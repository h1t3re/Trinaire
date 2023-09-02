#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void convert_int_to_binary(int *bits, int number, int mask, int binary_length)
{
	int mask_shifted = 0;
	int number_and_mask = 0;
	for (int i = 0; i < binary_length; ++i)
	{
		mask_shifted = mask << i;
		number_and_mask = number & mask_shifted;
		bits[i] = number_and_mask >> i;
	}
	mask_shifted = 0;
	number_and_mask = 0;
}

int main(int argc, char const *argv[])
{
	int architecture = 32;
	int *bits = (int *)malloc(architecture*sizeof(int));
	int *bits0 = (int *)malloc(64*sizeof(int));
	convert_int_to_binary(bits, 2147483647, 1, architecture);
	printf("mask 1 : 2147483647 = %d (int) = ", 2147483647);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483648, 1, architecture);
	printf("mask 1 : 2147483648 = %d (int) = ", 2147483648);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 3, -1, architecture);
	printf("mask -1 : 3 = %d (int) = ", 3);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	free(bits);
	free(bits0);
	architecture = 0;
	return 0;
}
