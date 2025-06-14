There is more than 0 and 1. Their is -1, 0 and 1 "Trinaire".
To run the process:
$ make

The discovery of the -1:

I discovered the -1 by adding 1 to 2147483647 which is stored with binary mask 1 in 32 bit format: 2147483647 and in binary:

2147483647 = 2147483647(int) = 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

The number 2147483648 with binary mask 1 in 32 bit format is stored in an "int" like -2147483648:

2147483648 = -2147483648 = -1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

We can observe that the number 2147483647 in binary is 0 at the most significant bit and 1's at the other bits. After adding one to the int 21474 83647 it become now -2147483648 and in binary it's a -1 at the most significant bit and 0's at the other bits.

And the limit is the number 4294967295, adding one to this number it becomes a 0 stored in 32 bit format like an integer in c language:

mask 1 : 4294967295 = -1 = -1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

mask 1 : 4294967296 = 0 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

We can represent an int in 32 bit format with the following function:

The line of bits of ints:

![](line_of_bits_of_int.png)

The understanding of the -1.
Now to understand the -1. I calculated the binary value of some numbers with the binary mask of -1. Let's see a few examples:

This is the binary representation of the number 3 with the binary mask 1:

3 = 3 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1

And this is the binary representions of this number with the binary mask -1:

3 = 3 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 3

Let's explain. To calculate the binary value of the number, we have to do an and with -1 shifted n = 31 time.

Let's take the first shift:

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1

&

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -1

= 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 3

The calcule is: -1 is is away from the first bit by 0 so it's 2^0 in addition to -1 is away from the second 1 by 1 so it's 2^1, wich equale to 2^0 + 2^1 = 3.

Now the second shift:

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1

&

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 -1 0

=

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0

With all the shift's done we got this binary number:

0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 3

Another example is 4:

mask 1 : 4 = 4 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0

mask -1 : 4 = 4 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 2 4

The binary mask can take 3 values: -1, 0, or 1.

I have deducted that with the mask -1: 1 bit becomes 32 bits. And the representation of that bit value is "the line of bits of ints".
0 1 4 2 8 12 3 13 7 5 11 15 24 25 19 (26 9) 14 18 27 28 22 (29 11) (44 8) (37 12) (30 3) (40 4) (25 7) (41 5) (47 11) (44 8) (42 6) 6
