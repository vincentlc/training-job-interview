
#include "two_sum.h"  // If you split your code into header and source files

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result); // Free allocated memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}