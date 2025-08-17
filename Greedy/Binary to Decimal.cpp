#include <bits/stdc++.h>
using namespace std;

int BinaryToDec(int num){
        if(num==0) return 0;
        int ans = 0;
        int base = 1;
        while(num > 0){
                int last = num%10;
                ans += last*base;
                base *= 2;
                num /= 10;
        }
        return ans;
}

int main() {
	// your code goes here
	int num;
	cin>>num;
	cout<<BinaryToDec(num);
	return 0;

}
