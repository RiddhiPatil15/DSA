#include <bits/stdc++.h>
using namespace std;


// Memoization

// int count(int n, vector<int>& memo){
//         if(n == 0 || n == 1) return 1;
//         if(memo[n] != -1) return memo[n];
//         return memo[n] = count(n-1, memo) + count(n-2, memo);
// }

// int countways(int n){
//         vector<int>memo(n+1, -1);
//         return count(n, memo);
// }


// Tabulation

int countways(int n){
        vector<int>dp(n+1, 0);
        dp[0] = 1; 
        dp[1] = 1;
        for(int i = 2; i<=n; i++){
                dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<countways(n);
	return 0;

}

