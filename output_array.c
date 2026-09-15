//output_array.c

#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

void arrays_list(int arr[], int arrsize)
{
    printf("\n\n");
    for (int i = 0; i < arrsize; i++)
    {
            printf("Array of Size %i, Position %i, is: %i\n", arrsize, i, arr[i]);
    }
}

void output_array(int arr[], int arrsize)
{
    double A1;
    printf("\n\nSee Calculations Below:\n\n");
    printf("The Average of Array is: %f\n", A1 = avg(arr, arrsize));
    printf("The Standard Deviation of the Array is: %f\n", A1 = std(arr, arrsize));
    printf("The Sum of the Array is: %f\n", A1 = sum(arr, arrsize));
    printf("The Minimum Value of the Array is: %f\n", A1 = min(arr, arrsize));
    printf("The Maximum Value of the Array is: %f\n", A1 = max(arr, arrsize));
    printf("The Difference Between the Min and Max Values of the Array is: %f\n\n", A1 = diff(arr, arrsize));
}
