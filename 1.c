//
// Created by Administrator on 2023/6/24.
//

#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * arr =  (int *) malloc(2 *  sizeof (int));
    for (int i = 0; i < numsSize; ++i)
    {
        for (int j = i+1; j < numsSize; ++j)
        {
            if(nums[j] == target - nums[i])
            {
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }
    return NULL;
}