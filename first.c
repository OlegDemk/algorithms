/*
 * first.c
 *
 *  Created on: Mar 2, 2021
 *      Author: odemki
 */
#include <stdio.h>

#include <stdint.h>			// Add types data


void bubble_sort(int *array, int size);


//-------------------------------------------------------------------------------------//
// Main function for sorts
void sorts(void)
{
	int array[10] = {1,4,1,9,3,2,8,5,0,3};

	bubble_sort(array, sizeof(array)/sizeof(int) - 1);



}
//-------------------------------------------------------------------------------------//
void bubble_sort(int *array, int size)
{
	 printf("BUBBLE SORT!\n");

	 printf("Print input array\n");
	 for(int i = 0; i <= size; i++)
	 {
		 printf("%d \n", array[i]);
	 }

}

//-------------------------------------------------------------------------------------//
