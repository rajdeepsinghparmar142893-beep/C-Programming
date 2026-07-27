// https://leetcode.com/problems/find-greatest-common-divisor-of-array/

int findGCD(int* nums, int numsSize) {
    int larger=nums[0],smallest=nums[0];
    for(int i=0;i<numsSize;i++){//to find larger and smallest no. 
        if(nums[i]>larger){
            larger=nums[i];
        }if(nums[i]<smallest){
            smallest=nums[i];
        }
    } for (int i = smallest; i >= 1; i--) {
        if (larger % i == 0 && smallest % i == 0) {
            return i;
        }
    }
    return 1; // Fallback
}
