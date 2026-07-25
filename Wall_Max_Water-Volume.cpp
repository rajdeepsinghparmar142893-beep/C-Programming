#include <iostream>
#include <vector>
#include <algorithm> // Required for std::max and std::min

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, m, k, n = height.size();
        
        // Pointers initialized to the first and last elements
        int *l = &height[0];
        int *r = &height[n-1];
        
        // Loop while the left pointer is before or at the right pointer
        while (l <= r) {
            m = *l; // Value at left pointer
            k = *r; // Value at right pointer
            
            // Calculate area: min(height) * width
            // Width is calculated by subtracting addresses and casting to int
            int currentArea = max(min(m, k), 0) * static_cast<int>(r - l);
            
            // Update max area
            area = max(currentArea, area);
            
            // Move the pointer pointing to the shorter line
            if (m < k) {
                l++;
            } else {
                r--;
            }
        }
        return area;
    }
};

// Main function to test the solution
int main() {
    Solution sol;
    
    // Test Case 1: Standard example
    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Test Case 1: ";
    cout << "Input: [1, 8, 6, 2, 5, 4, 8, 3, 7]" << endl;
    cout << "Output: " << sol.maxArea(height1) << " (Expected: 49)" << endl << endl;

    // Test Case 2: Simple case
    vector<int> height2 = {1, 1};
    cout << "Test Case 2: ";
    cout << "Input: [1, 1]" << endl;
    cout << "Output: " << sol.maxArea(height2) << " (Expected: 1)" << endl << endl;

    // Test Case 3: Increasing order
    vector<int> height3 = {1, 2, 3, 4, 5};
    cout << "Test Case 3: ";
    cout << "Input: [1, 2, 3, 4, 5]" << endl;
    cout << "Output: " << sol.maxArea(height3) << " (Expected: 6)" << endl; 
    // Explanation: 1*4=4, 2*3=6, 3*2=6, 4*1=4. Max is 6.

    return 0;
}
