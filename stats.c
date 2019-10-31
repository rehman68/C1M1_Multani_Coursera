/*Copyright (C) 2017 by Mohd Habeeb Ur Rehman - LTTS, Mysore
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Purvi Multani and the LTTS, Mysore are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.c
 * @brief Peer-graded Assignment: Week 1 Application Assignment
 * This file contains funtions definitions/body
 * @author Purvi Multani
 * @date 27-Oct-19
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char* arr, int size)
{
	unsigned char median  = 0x00;
	unsigned char maximum = 0x00;
	unsigned char minimum = 0x00;
	unsigned char mean    = 0x00;
	maximum = find_maximum(arr, SIZE);
	minimum = find_minimum(arr, SIZE);
	median  = find_median(arr, SIZE);
	mean    = find_mean(arr, SIZE);
	printf("Array's Maximum   = %d\n", maximum);
	printf("Array's Minimum   = %d\n", minimum);
	printf("Array's Median    = %d\n", median);
	printf("Array's Mean      = %d\n", mean);	
}

void print_array(const unsigned char* arr, int size)
{
	int i = 0x00;
	for( ; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void swap_array(unsigned char* element1, unsigned char* element2)
{
	unsigned char temp = 0x00;
	temp      = *element1;
	*element1 = *element2;
	*element2 = temp;
}

unsigned char* sort_array(unsigned char* arr, int size)
{
	int i = 0x00;
	int j = 0x00;
	for(; i < (size-1); i++)
	{
		for(j = 0; j < (size-i-1); j++)
		{
			if(arr[j] < arr[j+1])
			{
				swap_array(&arr[j], &arr[j+1]);
			}
		}			
	}
	return arr;
}

double find_mean(const unsigned char* arr, int size)
{
	int sum, i;
	for(; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return ((double)sum/(double)size);
}

double find_median(unsigned char* arr, int size)
{
	/*first sort an array*/
	unsigned char* sorted_array = NULL;
	sorted_array = sort_array(arr, size);
	if((size%2) != 0)
	{
		return (double)(sorted_array[(size/2)]);
	}
	else
	{
		return (double)(sorted_array[((size-1)/2)]+arr[(size/2)]/2.0);
	}	
}

unsigned char find_maximum(unsigned char* arr, int size)
{
	unsigned char* sorted_array = NULL;
	sorted_array = sort_array(arr, size);
	return sorted_array[0];	
}

unsigned char find_minimum(unsigned char* arr, int size)
{
	unsigned char* sorted_array = NULL;
	sorted_array = sort_array(arr, size);
	return sorted_array[(size-1)];	
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int i;
  /*Create a copy of the given array in order to avoid manupulation
   of the original array */
  unsigned char test_copy[SIZE];
  for(i=0; i<SIZE; i++)
  {
   	test_copy[i] = test[i];
  }
  printf("Sorted array (Descending order)\n");
  unsigned char* a = sort_array(test_copy, SIZE);
  for(i=0; i<SIZE; i++)
  {
  	printf("%d ", a[i]);
  }
  printf("\n");

  printf("Maximum = %d\n", find_maximum(test_copy, SIZE));
  printf("Minimum = %d\n", find_minimum(test_copy, SIZE));
  printf("Median  = %f\n", find_median(test_copy, SIZE));
  printf("Mean    = %f\n", find_mean(test_copy, SIZE)); 

  printf("Ginen/Original Array\n");
  for(i=0; i<SIZE; i++)
  {
  	printf("%d ", test[i]);
  }
  printf("\n"); 
}
