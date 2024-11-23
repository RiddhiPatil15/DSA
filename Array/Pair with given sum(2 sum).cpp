// Better Approach (Sorting and two-pointer technique) O(n*log(n)) time and O(1) space

//Once the array is sorted then we can use this approach by keeping one pointer at the beginning (left) and another at the end (right) of the array. Then check the sum of the elements at these two pointers:
//If the sum equals the target, we’ve found the pair.
//If the sum is less than the target, move the left pointer to the right to increase the sum.
//If the sum is greater than the target, move the right pointer to the left to decrease the sum.

//#include <bits/stdc++.h>
//using namespace std;
// //Function to check if a pair exists whose sum is equal to given target value
//bool Sum(vector<int> &arr, int target){
//	sort(arr.begin(), arr.end());
//	int left = 0, right = arr.size()-1;
//	while(left < right){
//		int sum = arr[left] + arr[right];
//		if(sum == target) return true;
//		else if(sum < target) left++;
//		else right--;
//	}
//	return false;
//}
//int main(){
//	vector<int> arr = {0, -1, 2, -3, 1};
//	int target = -2;
//	
//	//Call for function
//	if(Sum(arr, target)) cout<<"True";
//	else cout<<"False";
//	return 0;
//}


// Best Approach Using Hash Set O(n) time and O(n) space

//Step-by-step approach:
//
//Create an empty Hash Set or Unordered Set
//Iterate through the array and for each number in the array:
//Calculate the complement (target – current number).
//Check if the complement exists in the set:
//If it is, then pair found.
//If it isn’t, add the current number to the set.
//If the loop completes without finding a pair, return that no pair exists.

#include <bits/stdc++.h>
using namespace std;
bool Sum(vector<int> &arr, int target){
	  // Create an unordered_set to store the elements
    	unordered_set<int> s;

    // Iterate through each element in the vector
    for (int i = 0; i < arr.size(); i++){

        // Calculate the complement that added to
        // arr[i], equals the target
        int complement = target - arr[i];

        // Check if the complement exists in the set
        if (s.find(complement) != s.end())
            return true;

        // Add the current element to the set
        s.insert(arr[i]);
    }
    // If no pair is found
    return false;
}

int main(){
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    // Call the twoSum function and print the result
    if (twoSum(arr, target))
        cout << "true";
    else
        cout << "false";

    re
	
}

