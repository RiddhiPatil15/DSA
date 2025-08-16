#include<iostream>
#include<string>
using namespace std;

int binaryOperation(string s){
        int n = s.length();
        if(n == 0 || n == 1) return -1;
        int result = s[0]-'0';
        int i = 1;
        while(i < n-1){
                char op = s[i];
                int num = s[i+1]-'0';
                if (op == 'A') result = result & num;
                else if (op == 'B') result = result | num;
                else if (op == 'C') result = result ^ num;
                else return -1;
                i+=2;
        }
        return result;
}
int main(){
        string s;
        cin>>s;
        cout<<binaryOperation(s);
        return 0;
}