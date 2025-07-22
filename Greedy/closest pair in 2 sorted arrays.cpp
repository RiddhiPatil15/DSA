#include <vector>
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

pair<int, int>find(vector<int>& arr1, vector<int>& arr2, int x){
        pair<int, int>res = {-1, -1};
        int diff = INT_MAX;
        int l = 0;
        int r = arr2.size()-1;
        while(l < arr1.size() && r >= 0){
                int curr = abs(arr1[l] + arr2[r] - x);
                if(curr < diff){
                        res = {arr1[l], arr2[r]};
                        diff = curr;
                }
                if(arr1[l]+arr2[r] < x) l++;
                r--;
        }
        return res;
}

int main() {
	// your code goes here
	int n1, n2, x;
	cin>>n1;
	cin>>n2;
	cin>>x;
	vector<int>arr1(n1);
	vector<int>arr2(n2);
	for(int i = 0; i<n1; i++){
	        cin>>arr1[i];
	}
	for(int i = 0; i<n2; i++){
	        cin>>arr2[i];
	}
	pair<int, int>res = find(arr1, arr2, x);
	cout<<res.first<<" "<<res.second;
        return 0;
}
