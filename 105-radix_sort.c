#include "sort.h"

/**
 * reset - resets an array
 * @array: array to reset
 * @size: size of the array
 * Return: void
 */
void reset(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		array[i] = 0;
}

/**
 * get_digits_largest - get num of digits
 * @array: array to check
 * @size: size of the array
 * Return: number of digits
 */
int get_digits_largest(int *array, size_t size)
{
	int number;
	int digits;
	size_t i;

	number = 0;
	digits = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > number)
			number = array[i];
	}

	while (number != 0)
	{
		number /= 10;
		digits++;
	}

	return (digits);
}

/**
 * get_digit - get a spefic digit of a number
 * @number: number to extract digit
 * @digit: digit count
 * Return: the digit
 */
int get_digit(int number, int digit)
{
	int den, dig, i;

	dig = digit - 1;
	den = 1;

	for (i = 0; i < dig; i++)
		den *= 10;

	return ((number / den) % 10);
}

/**

