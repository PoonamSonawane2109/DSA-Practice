#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& nums,int low,int high, int target){
        if(low > high) return -1;

        int mid = low + (high - low) / 2;

        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) 
            return bs(nums, mid+1, high, target);
        else 
            return bs(nums, low, mid-1, target);
    }

    int search(vector<int>& nums, int target) {
        return bs(nums, 0, nums.size()-1, target);
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int target;

    cout << "Enter target: ";
    cin >> target;

    Solution obj;   // ✅ create object
    int result = obj.search(nums, target);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}