#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int number;  // The number from the array
    int index;   // The index of the number
} HashEntry;
#define ASH_SIZE 1000

int hash(int key);
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

