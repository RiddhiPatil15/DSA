#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool autobiographical(string num){
        int n = num.length();
        vector<int>count(n, 0);
        for(int i = 0; i<n; i++){
                int d = num[i] - '0';
                if(d >= n) return false;
                count[d]++;
        }
        for(int i = 0; i<n; i++){
                if((num[i]-'0') != count[i]) return false;
        }
        return true;
}

int main(){
        string num;
        cin>>num;
        if(autobiographical(num)) cout<<"autobiographical num.";
        else cout<<"not autobiographical num.";
        return 0;
}