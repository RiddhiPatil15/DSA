#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int func(vector<int>&arr, int n, int k){
        sort(arr.begin(), arr.end());
        int absdiff = abs(arr[0] - k);
        int ans = arr[0];
        
        for(int i = 1; i<n; i++){
                int diff = abs(arr[i]-k);
                if(diff < absdiff){
                        absdiff = diff;
                        ans = arr[i];
                }
        }
        return ans;
}
        

int main(){
        int n, k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
                cin>>arr[i];
        }
        int res = func(arr, n, k);
        cout<<res;
        return 0;
}


// def func(arr, n, k):
//         absDiff = abs(arr[0]-k)
//         ans = arr[0]
        
//         for i in range(1, n):
//                 z = arr[i]
//                 AD = abs(arr[i]-k)
//                 if AD < absDiff:
//                         absDiff = AD
//                         ans = arr[i]
                        
//         return ans

// n, k = map(int, input().split())
// arr = list(map(int, input().split()))
// res = func(arr, n, k)
// print(res)