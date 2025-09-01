#include <bits/stdc++.h>
using namespace std;

int func(string &data, int n){
        if(n==0)return 0;
        
        int dig = data[n-1]-'0';
        return func(data, n-1)*10 + dig;
}

int main() {
	// your code goes here
	string data;
	cin>>data;
	int n = data.length();
	cout<<func(data, n);
        return 0;
}


//Python implementation
//# cook your dish here
// def func(data, n):
//         if n==0:
//                 return 0
//         dig = int(data[n-1])
        
//         return func(data, n-1)*10 + dig
        
// data = input()
// print(data, len(data))