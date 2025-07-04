#include <bits/stdc++.h>
using namespace std;

int f(int ind, vector<int>& heights){
        if(ind == 0) return 0;
        
        int left = f(ind-1, heights) + abs(heights[ind] - heights[ind-1]);
        int right = INT_MAX;
        if(ind>1) right = f(ind-2, heights) + abs(heights[ind] - heights[ind-2]);
        return min(left, right);
}

int frogjumps(int n, vector<int>& heights){
        return f(n-1, heights);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>heights(n);
	for(int i = 0; i<n; i++){
	        cin>>heights[i];
	}
	int ans = frogjumps(n, heights);
	cout<<ans;
	return 0;

}


// Tabulation:

// int frogjumps(){
        vector<int>dp(n, 0);
        dp[0] = 0;
        for(int i = 0; i<n; i++){
                int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
                int ss = INT_MAX;
                if(i > 1) ss = dp[i-2] + abs(heights[i] - heights[i-2]);
                dp[i] = min(fs, ss);
        }
        return dp[n-1];
// }