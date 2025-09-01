#include <deque>
#include <iostream>
using namespace std;

deque<int> func(deque<int>&dq, int n){
        while(n > 3){
                dq.pop_front();
                n--;
        }
        return dq;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	deque<int>dq;
	for(int i = 0; i<n; i++){
	        int x;
	        cin>>x;
	        dq.push_back(x);
	}
	deque<int>ans = func(dq, n);
	for(auto &it : dq){
	        cout<<it<<" ";
	}
	return 0;

}


// from collections import deque

// def func(dq):
//         n = len(dq)
//         while n > 3:
//                 dq.popleft()
//                 n-=1
                
//         return dq

// dq = deque(map(int, input().split()))
// print(*func(dq))