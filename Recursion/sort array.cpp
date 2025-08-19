#include<iostream>
#include<vector>
using namespace std;

void sort_array(vector<int>& arr, int n){
        if(n <= 1) return;
        for(int i = 0; i<n-1; i++){
                if(arr[i] > arr[i+1]){
                        swap(arr[i], arr[i+1]);
                }
        }
        sort_array(arr, n-1);
}

int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &it : arr){
                cin>>it;
        }
        sort_array(arr, n);
        
        for(auto &it : arr){
                cout<<it<<" ";
        }
        return 0;
}