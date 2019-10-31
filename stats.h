/******************************************************************************
 * Copyright (C) 2017 by Mohd Habeeb Ur Rehman - LTTS, Mysore
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Purvi Multani and the LTTS, Mysore are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.h
 * @brief Peer-graded Assignment: Week 1 Application Assignment
 * This file contains funtions Prototypes/Declerations 
 * @author Purvi Multani
 * @date 31-Oct-19
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief This function takes 2 unsigned char pointers as argument pointing to 
 *   adjacent elements of the array & swaps them
 * @param unsigned char pointers whose contents need to be swapped.*
 * @return returns void
 */
void swap_array(unsigned char* element1, unsigned char* element2);


/**
 * @brief A function that prints the statistics of an array
 *     including minimum, maximum, mean, and median.
 * @param unsigned char array whose statistics to be printed
 * @param size of the given unsigned array
 *
 * @return returns void
 */
void print_statistics(unsigned char* arr, int size);
/**
 * @brief Prints the given array
 * @param unsigned char array to be printed
 * @param size of the given unsigned array
 *
 * @return returns void
 */
 
 
void print_array(const unsigned char* arr, int size);


/**
 * @brief Computes the median of the given array
 * @param unsigned char array
 * @param size of the given unsigned array
 *
 * @return returns double which is the median.
 */
double find_median(unsigned char* arr, int size);


/**
 * @brief Computes the mean of the given array
 * @param unsigned char array
 * @param size of the given unsigned array
 *
 * @return returns double which is the mean.
 */ 
double find_mean(const unsigned char* arr, int size);


/**
 * @brief Funtion finds the largest element of the given array.
 * @param unsigned char array
 * @param size of the given unsigned array
 *
 * @return returns largest element of type unsigned char.
 */
unsigned char find_maximum(unsigned char* arr, int size);


/**
 * @brief Funtion finds the smallest element of the given array.
 * @param unsigned char array
 * @param size of the given unsigned array
 *
 * @return returns smallest element of type unsigned char.
 */ 
unsigned char find_minimum(unsigned char* arr, int size);
/**
 * @brief Given an array of data and a length, sorts 
    the array from largest to smallest. (The zeroth Element 
	should be the largest value,and the last element (n-1) should be the smallest value. )
 * @param unsigned char array
 * @param size of the given unsigned array
 *
 * @return returns unsigned char pointer to the sorted array.
 */
unsigned char* sort_array(unsigned char* arr, int size);


#endif /* __STATS_H__ */
