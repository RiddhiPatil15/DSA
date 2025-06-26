#include <bits/stdc++.h>
using namespace std;

string camelcase(string& s){
        string result = "";
        bool flag = false;
        for(int i = 0; i<s.length(); i++){
                if(s[i] == ' ') flag = true;
                else if(flag == true){
                        result += toupper(s[i]);
                        flag = false;
                }
                else{
                        result += s[i];
                }
        }
        return result;
}

int main() {
	// your code goes here
	string data;
	getline(cin, data);
	cout<<camelcase(data);
	return 0;

}
