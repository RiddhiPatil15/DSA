// #Problem Restatement You have N bulbs in a row, each bulb has a switch.
// # Bulbs are either:
// # 0 → OFF
// # 1 → ON
// # Faulty wiring condition:
// # If you press switch at index i, it toggles bulb i and every bulb to its right.
// # Goal: Find the minimum number of switch presses needed to make all bulbs ON.


#include<iostream>
#include<vector>
using namespace std;

int BulbSwitch(vector<int>& arr){
        int n = arr.size();
        int count = 0;
        int flip = 0;
        
        for(int i = 0; i<n; i++){
                if(arr[i]^flip == 0){
                        count++;
                        flip^=1;
                }
        }
        return count;
}
int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it : arr){
                cin>>it;
        }
        cout<<BulbSwitch(arr);
        return 0;
}