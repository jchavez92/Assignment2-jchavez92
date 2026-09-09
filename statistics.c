//statistics.c for functions related to summing, averaging and standard deviation
#include <stdlib.h>
#include <math.h>
#include "statistics.h"

        double sum(int arr[], int arrsize)
        {
                double  total = 0;
                for (int i = 0; i < arrsize; i++)
                {
                        total += arr[i];
                };
                return total;
        };

        double avg(int arr[], int arrsize)
        {
                double  total = sum(arr,arrsize);
                total = total / arrsize;
                return total;
        };

        double std(int arr[], int arrsize)
        {
                double average = avg(arr,arrsize);
                double squaredsum = 0.0;

                for (int i = 0; i < arrsize; i++)
                {
                        double diff = arr[i] - average;
                        squaredsum += (diff * diff);
                };
                double subtotal = squaredsum / arrsize;
                double total = sqrt(subtotal);
                return total;
        };

	double min(int arr[], int arrsize)
	{
		int initVal = arr[0];
		for(int i = 1; i< arrsize; i++)
		{
			int nextVal = arr[i];
			if (nextVal < initVal)
			{
				initVal = nextVal;
			};
	        };
		return initVal;
	};

	double max(int arr[], int arrsize)
        {
                int initVal = arr[0];
                for(int i = 1; i< arrsize; i++)
                {
                        int nextVal = arr[i];
                        if (nextVal > initVal)
                        {
                                initVal = nextVal;
                        };
                };
		return initVal;
        };

	double diff(int arr[], int arrsize)
        {
		return abs(max(arr, arrsize) - min(arr, arrsize));
        };
