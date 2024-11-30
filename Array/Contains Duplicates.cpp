#include<bits/stdc++.h>
using namespace std;

bool containsDuplicates(vector<int> &nums, int n){
	sort(nums.begin(), nums.end());
	for(int i = 1; i<n; i++){
		if(nums[i] == nums[i-1]){
			return true;
		}
	}
	return false;
}

int main(){
	vector<int> nums;
	int n;
	cout<<"Enter the number of elemnets: ";
	cin>>n;
	cout<<endl;
	
	nums.resize(n);
	cout<<"Enter the elements in the array: ";
	for(int i = 0; i<n; i++){
		cin>>nums[i];
	}
	bool result = containsDuplicates(nums, n);
	if(result){
		cout << "True";
	}
	else{
		cout << "False";
	}
	return 0;
}
