#include <bits/stdc++.h>
using namespace std;
// iterative code
// Binary Search Function
int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


// Main function
int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int target;

    cout << "Enter target: ";
    cin >> target;

    int result = search(nums, target);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}