/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include "two_sum.h"

int hash(int key) {
    return abs(key) % ASH_SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashEntry hashTable[ASH_SIZE] = {0};
    for(int i=0; i<numsSize;i++ )
    {
        int complement = target - nums[i];
        int ashIndex = hash(complement);
        printf("element=%d Complement=%d ",nums[i], complement);
        printf("ash=%d \n", ashIndex);
        while (hashTable[ashIndex].number != 0)
        {
            if (hashTable[ashIndex].number == complement)
            {
                int* array_return = (int *)malloc(2 * sizeof(int));
                array_return[0] = hashTable[ashIndex].index;
                array_return[1] = i;
                returnSize[0] = 2;
                return array_return;
            }
            ashIndex = hash(ashIndex +1);
            
        }
        ashIndex = hash(nums[i]);
        while (hashTable[ashIndex].number != 0)
        {
            ashIndex = ashIndex +1 %ASH_SIZE ; 
        }
        hashTable[ashIndex].number = nums[i];
        hashTable[ashIndex].index = i;
        


    }
    //free(hashTable);
    return 0;
}