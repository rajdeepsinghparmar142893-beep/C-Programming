/**
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/?envType=problem-list-v2&envId=array
 * Note: The returned array must be malloced, 
 * assume caller calls free().
 */

// Helper function to find the first (leftmost) occurrence
int findFirst(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;      // Record potential answer
            right = mid - 1;   // Continue searching left
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

// Helper function to find the last (rightmost) occurrence
int findLast(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;      // Record potential answer
            left = mid + 1;    // Continue searching right
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    // Allocate memory for the result array (2 integers)
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    // Handle edge case: empty array
    if (numsSize == 0) {
        result[0] = -1;
        result[1] = -1;
        return result;
    }

    int first = findFirst(nums, numsSize, target);
    
    // If target not found, no need to search for last
    if (first == -1) {
        result[0] = -1;
        result[1] = -1;
        return result;
    }

    int last = findLast(nums, numsSize, target);

    result[0] = first;
    result[1] = last;

    return result;
}
