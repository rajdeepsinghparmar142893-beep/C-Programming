//Search an Element in Array
//https://leetcode.com/problems/search-in-rotated-sorted-array/?envType=problem-list-v2&envId=array
int search(int* nums, int numsSize, int target) {
    
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
    }
    }
   return -1;
}
