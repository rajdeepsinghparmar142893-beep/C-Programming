//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2086426584/?envType=problem-list-v2&envId=array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0; // Slow pointer for the last unique element

        // Fast pointer iterates through the array
        for (int j = 1; j < nums.size(); j++) {
            // If current element is different from the last unique one
            if (nums[j] != nums[i]) {
                i++; // Move the unique pointer forward
                nums[i] = nums[j]; // Place the new unique element
            }
        }

        // Return the count of unique elements
        return i + 1;
    }
};
