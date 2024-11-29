#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int> &a, vector<int> &b){
	int n1 = a.size(), n2 = b.size();
	int i = 0, j = 0;
	vector<int> unionArr;
	while(i<n1 && j<n2){
		if(a[i] <= b[j]){
			if(unionArr.size() == 0 || unionArr.back() != a[i]){
				unionArr.push_back(a[i]);
			}
			i++;
		}
		else{
			if(unionArr.size() == 0 || unionArr.back() != b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
		}
	}
	while(j<n2){
		if(unionArr.size() == 0 || unionArr.back() != b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
	}
	while(i<n1){
		if(a[i] <= b[j]){
			if(unionArr.size() == 0 || unionArr.back() != a[i]){
				unionArr.push_back(a[i]);
			}
			i++;
		}
	}
	return unionArr;
}
int main(){
	vector<int> num1;
	vector<int> num2;
	cout<<"Enter the number of elements in each array: ";
	int n, m;
	cin>>n;
	cin>>m;
	num1.resize(n);
	num2.resize(m);
	cout<<"Enter the numbers in the Arrays(Sorted array is expected): ";
	for(int i = 0; i<n; i++){
		cin>>num1[i];
	}
	for(int i = 0; i<m; i++){
		cin>>num2[i];
	}
	vector<int> answer = Union(num1, num2);
	cout<<"The union of the given arrays is: "<<endl;
	for(int i = 0; i<answer.size(); i++){
		cout<<answer[i]<<" ";
	}
	return 0;
}
