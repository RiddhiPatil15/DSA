// rotate the array by 'k' steps:

#include <bits/stdc++.h>
using namespace std;

void RotateRight(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) {
        return;
    }
    
    k = k % n; // handles cases where k is larger than n
    if (k == 0) return;  // If no rotation is needed
    
    vector<int> temp(k); // temporary array to store last k elements
    
    // Store the last k elements in temp
    for (int i = n - k; i < n; i++) {
        temp[i - (n - k)] = nums[i];
    }
    
    // Shift the first part of nums to the right
    for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }
    
    // Copy back the elements from temp to the beginning of nums
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}

void RotateLeft(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) {
        return;
    }
    
    k = k % n; // handles cases where k is larger than n
    if (k == 0) return;  // If no rotation is needed
    
    vector<int> temp(k); // temporary array to store first k elements
    
    // Store the first k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = nums[i];
    }
    
    // Shift the remaining part of nums to the left
    for (int i = 0; i < n - k; i++) {
        nums[i] = nums[i + k];
    }
    
    // Copy back the elements from temp to the end of nums
    for (int i = 0; i < k; i++) {
        nums[n - k + i] = temp[i];
    }
}

int main() {
    vector<int> nums;
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);  // Properly adding elements to the vector
    }
    
    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    RotateRight(nums, k);
    cout << "Array after rotating right by " << k << " steps: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    RotateLeft(nums, k);
    cout << "Array after rotating left by " << k << " steps: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}



