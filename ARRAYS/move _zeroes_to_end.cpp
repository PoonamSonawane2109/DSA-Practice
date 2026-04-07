#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; // points to the next position to place a non-zero

        // Step 1: Move all non-zero numbers to the front
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }

        // Step 2: Fill the rest with zeros
        for(int i = j; i < n; i++){
            nums[i] = 0;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;
    obj.moveZeroes(nums);

    cout << "Array after moving zeros: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}