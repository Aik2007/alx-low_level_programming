#include "main.h"
/**
 *reverse_array - reverses an array of integers
 *@a: array to be reversed
 *@n: number of element in the array
 */
 voidreverse_array(int *a, int n)
 {
        int i, j, tmp;

        j = n - 1;

        for (i = 0; < n/2; i++)
        {
        tmp = a[i];
        a[i] = a[j];
        a[j--] = tmp;
        }
}

