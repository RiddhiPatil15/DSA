#include <bits/stdc++.h>
using namespace std;
int Remove_Duplicates(vector<int> &nums){
	int n = nums.size();
	int i = 0, j;
	for(j = 1; j<n; j++){
		if(nums[j] != nums[i]){
			nums[i+1] = nums[j];
			i++;
		}
	}
	return (i+1);
}
int main() {
    int n;

    // Prompt the user to input the size of the vector
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);  // Declare a vector with 'n' elements

    // Take input for the vector elements
    cout << "Enter " << n << " elements (sorted order is expected): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Print the original vector
    cout << "Original array: ";
    for (int i = 0; i<n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Remove duplicates
    int new_length = Remove_Duplicates(nums);

    // Print the modified vector (up to the new length)
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < new_length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Optionally, print the new length of the array
    cout << "New length: " << new_length << endl;

    return 0;
}
