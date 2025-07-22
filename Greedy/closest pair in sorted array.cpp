#include <vector>
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

pair<int, int>find(vector<int>& arr, int x){
        pair<int, int>res = {-1, -1};
        int diff = INT_MAX;
        int l = 0;
        int r = arr.size()-1;
        while(l < r){
                int curr = abs(arr[l] + arr[r] - x);
                if(curr < diff){
                        res = {arr[l], arr[r]};
                        diff = curr;
                }
                if(arr[l]+arr[r] < x) l++;
                r--;
        }
        return res;
}

int main() {
	// your code goes here
	int n, x;
	cin>>n;
	cin>>x;
	vector<int>arr(n);
	for(int i = 0; i<n; i++){
	        cin>>arr[i];
	}
	pair<int, int>res = find(arr, x);
	cout<<res.first<<" "<<res.second;
        return 0;
}
