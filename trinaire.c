#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void convert_int_to_binary(int *binary_number, int number, int mask, int binary_length)
{
	int mask_shifted = 0;
	int number_and_mask = 0;
	for (int i = 0; i < binary_length; ++i)
	{
		mask_shifted = mask << i;
		number_and_mask = number & mask_shifted;
		binary_number[i] = number_and_mask >> i;
	}
	mask_shifted = 0;
	number_and_mask = 0;
}

int main(int argc, char const *argv[])
{
	int architecture = 32; // or 64
	int *binary_number = (int *)malloc(architecture*sizeof(int));
	convert_int_to_binary(binary_number, 2147483647, 1, architecture);
	printf("mask 1 : 2147483647 = %d (int) = ", 2147483647);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", binary_number[i]);
	}
	printf("\n\n");
	convert_int_to_binary(binary_number, 2147483648, 1, architecture);
	printf("mask 1 : 2147483648 = %d (int) = ", 2147483648);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", binary_number[i]);
	}
	printf("\n\n");
	convert_int_to_binary(binary_number, 2147483647, -1, architecture);
	printf("mask -1 : 2147483647 = %d (int) = ", 2147483647);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", binary_number[i]);
	}
	printf("\n\n");
	convert_int_to_binary(binary_number, 2147483648, -1, architecture);
	printf("mask -1 : 2147483648 = %d (int) = ", 2147483648);
	for (int i = architecture-1; i >= 0; --i)
	{
		printf("%d ", binary_number[i]);
	}
	printf("\n\n");
	free(binary_number);
	architecture = 0;
	return 0;
}
