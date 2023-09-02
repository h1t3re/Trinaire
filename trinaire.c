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
	convert_int_to_binary(bits, 0, 1, architecture);
	printf("mask 1 : 0 = %d = ", 0);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 0, -1, architecture);
	printf("mask -1 : 0 = %d = ", 0);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 1, 1, architecture);
	printf("mask 1 : 1 = %d = ", 1);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 1, -1, architecture);
	printf("mask -1 : 1 = %d = ", 1);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2, 1, architecture);
	printf("mask 1 : 2 = %d = ", 2);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2, -1, architecture);
	printf("mask -1 : 2 = %d = ", 2);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 3, 1, architecture);
	printf("mask 1 : 3 = %d = ", 3);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 3, -1, architecture);
	printf("mask -1 : 3 = %d = ", 3);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 4, 1, architecture);
	printf("mask 1 : 4 = %d = ", 4);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 4, -1, architecture);
	printf("mask -1 : 4 = %d = ", 4);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 5, 1, architecture);
	printf("mask 1 : 5 = %d = ", 5);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 5, -1, architecture);
	printf("mask -1 : 5 = %d = ", 5);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 6, 1, architecture);
	printf("mask 1 : 6 = %d = ", 6);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 6, -1, architecture);
	printf("mask -1 : 6 = %d = ", 6);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 3, 1, architecture);
	printf("mask 1 : 3 = %d = ", 3);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 3, -1, architecture);
	printf("mask -1 : 3 = %d = ", 3);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483647, 1, architecture);
	printf("mask 1 : 2147483647 = %d = ", 2147483647);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483647, -1, architecture);
	printf("mask -1 : 2147483647 = %d = ", 2147483647);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483648, 1, architecture);
	printf("mask 1 : 2147483648 = %d = ", 2147483648);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483648, -1, architecture);
	printf("mask -1 : 2147483648 = %d = ", 2147483648);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483649, 1, architecture);
	printf("mask 1 : 2147483649 = %d = ", 2147483649);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 2147483649, -1, architecture);
	printf("mask -1 : 2147483649 = %d = ", 2147483649);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits0, 4294967296, 1, 64);
	printf("mask 1 : 4294967296 = %d = ", 4294967296);
	for (int i = 64-1; i >=	 0; --i)
	{
		printf("%d ", bits0[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits0, 4294967297, 1, 64);
	printf("mask 1 : 4294967297 = %d = ", 4294967297);
	for (int i = 64-1; i >=	 0; --i)
	{
		printf("%d ", bits0[i]);
	}
	printf("\n\n");
	convert_int_to_binary(bits, 4294967296, -1, architecture);
	printf("mask -1 : 4294967296 = %d = ", 4294967296);
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
