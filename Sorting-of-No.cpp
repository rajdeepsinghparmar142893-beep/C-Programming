//Sorting of Colors No. 
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int temp=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        } //cout<<nums[i];
        }
    }
};
