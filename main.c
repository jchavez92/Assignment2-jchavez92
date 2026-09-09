#include <stdio.h>
#include <math.h>
#include "statistics.h"

int main()
{
	int i;
	double A1;
	double A2;
	double A3;

	int array1[2] = {1,2};  printf("\n\n1st Array is: %i %i\n", array1[0],array1[1]);
	int array2[3] = {1,3,4};  printf("2nd Array is: %i %i %i\n", array2[0],array2[1],array2[2]);
	int array3[4] = {1,4,5,6};  printf("3rd Array is: %i %i %i %i\n", array3[0],array3[1],array3[2],array3[3]);

	printf("\n\nSee Calculations Below:\n\n");
	A1 = avg(array1,2);  printf("The Average of Array1 is: %f\n",A1);
	A1 = std(array1,2);  printf("The Standard Deviation of Array1 is: %f\n",A1);
	A1 = sum(array1,2);  printf("The Sum of Array1 is: %f\n",A1);
	A1 = min(array1,2);  printf("The Minimum Value of Array1 is: %f\n",A1);
	A1 = max(array1,2);  printf("The Maximum Value of Array1 is: %f\n",A1);
	A1 = diff(array1,2); printf("The Difference Between the Min and Max Values of Array1 is: %f\n\n",A1);

	A2 = avg(array2,3);  printf("The Average of Array2 is: %f\n",A2);
	A2 = std(array2,3);  printf("The Standard Deviation of Array2 is: %f\n",A2);
	A2 = sum(array2,3);  printf("The Sum of Array2 is: %\n",A2);
	A2 = min(array2,3);  printf("The Minimum Value of Array2 is: %f\n",A2);
	A2 = max(array2,3);  printf("The Maximum Value of Array2 is: %f\n",A2);
	A2 = diff(array2,3); printf("The Difference Between the Min and Max Values of Array2 is: %f\n\n",A2);

	A3 = avg(array3,4);  printf("The Average of Array3 is: %f\n",A3);
	A3 = std(array3,4);  printf("The Standard Deviation of Array3 is: %f\n",A3);
	A3 = sum(array3,4);  printf("The Sum of Array3 is: %f\n",A3);
	A3 = min(array3,4);  printf("The Minimum Value of Array3 is: %f\n",A3);
	A3 = max(array3,4);  printf("The Maximum Value of Array3 is: %f\n",A3);
	A3 = diff(array3,4); printf("The Difference Between the Min and Max Values of Array3 is: %f\n\n\n",A3);
};
