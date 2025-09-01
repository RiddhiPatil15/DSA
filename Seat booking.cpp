#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<string>func(vector<int>&arr){
        int n = arr.size();
        vector<string>ans;
        set<int>s;
        for(int num : arr){
                if(s.find(num) != s.end()){
                        ans.push_back("Already-booked");
                }
                else{
                        s.insert(num);
                        ans.push_back("Booked");
                }
        }
        return ans;
        
}

int main(){
        int n;
        cin>>n;
        vector<int>seats(n);
        for(int i = 0; i<n; i++){
                cin>>seats[i];
        }
        vector<string>ans = func(seats);
        for(auto &it : ans){
                cout<<it<<" ";
        }
        return 0;
}




// def func(seats):
//         s = set()
//         ans = []
        
//         for num in seats:
//                 if num in s:
//                         ans.append("Already-booked")
//                 else:
//                         s.add(num)
//                         ans.append("Booked")
                        
//         return ans

// n = int(input())
// seats = []

// for _ in range(n):
//         seat = int(input())
//         seats.append(seat)
        
// print(func(seats))