#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

bool anagram(string s, string t){
        if(s.length() != t.length()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) return true;
        return false;
}
int main(){
        string s, t;
        cin>>s;
        cin>>t;
        if(anagram(s, t)) cout<<"Anagram";
        else cout<<"Not an Anagram";
        return 0;
        
}