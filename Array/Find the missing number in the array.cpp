#include<bits/stdc++.h>
using namespace std;

int FindMissing(vector<int> &nums, int n){
	
	int xor1 = 0, xor2 = 0;
	for(int i = 0; i<n; i++){
		xor2 = xor2 ^ (i+1);
		xor1 = xor1 ^ nums[i];
	}
	xor1 = xor1 ^ n;
	return (xor1 ^ xor2);
}
int main(){
	cout<<"Enter the number of elements: ";
	int n;
	cin>>n;
	cout<<"Enter the elements in the arrays: ";
	vector<int> nums(n);
	for(int i = 0; i<n; i++){
		cin>>nums[i];
	}
	int answer = FindMissing(nums, n);
//	for(int i = 0; i<n; i++){
//		cout<<answer[i];
//	}
	cout<<answer;
	return 0;
}
