#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

void findCommonElements(vector<vector<int>>& arr){
        int row = arr.size();
        unordered_map<int, int>freq;
        
        for(int i = 0; i<row; i++){
                unordered_map<int, bool>vis;
                for(int j = 0; j<arr[0].size(); j++){
                        int val = arr[i][j];
                        if(!vis[val]){
                                freq[val]++;
                                vis[val] = true;
                        }
                }
        }
        for(auto& it : freq){
                if(it.second == row) cout<<it.first<<" ";
        }
        cout<<endl;
}

int main() {
	// your code goes here
	vector<vector<int>> arr = {
	        {1, 2, 2, 3},
                {2, 4, 2, 1},
                {5, 1, 2, 2}       
	};
        findCommonElements(arr);
        return 0;
}
