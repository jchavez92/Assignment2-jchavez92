#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

int main()
{
        int array1[2] = {1,2};
        int array2[3] = {1,3,4};
        int array3[4] = {1,4,5,6};

        arrays_list(array1, 2);
        output_array(array1, 2);

        arrays_list(array2, 3);
        output_array(array2, 3);

        arrays_list(array3, 4);
        output_array(array3, 4);
}

