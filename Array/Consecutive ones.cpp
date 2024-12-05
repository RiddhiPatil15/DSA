#include <bits/stdc++.h>
using namespace std;

int ConsecutiveOne(vector<int> &nums){
	int n = nums.size();
	int count = 0;
	int output = 0;
	for(int i = 0; i<n; i++){
		if(nums[i] == 1){
			count++;
			output = max(output, count);
		}
		else{
			count = 0;
		}
	}
	return output;
}
int main(){
	cout<<"Enter the number of elements in array: ";
	int n;
	cin>>n;
	cout<<"Enter the elements in the array: ";
	vector<int> nums(n);
	for(int i = 0; i<n; i++){
		cin>>nums[i];
	}
	int answer = ConsecutiveOne(nums);
	cout<<answer;
	return 0;
}
