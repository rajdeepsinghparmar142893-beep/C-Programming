//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/?envType=problem-list-v2&envId=array
bool search(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
    if(nums[i]==target){
        return true;
    }
    
    }return false;
}
