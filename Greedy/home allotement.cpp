// Problem Statement -:  There are N Homeless people in the community and N houses in the community. It will be given in the array (people), the height of the person, and in the array house capacity of the house is given.

// The government decided to give homes to people on the basis of the following conditions:

// Priority is given to the people from left to right of the array
// Each person is allotted to a house if and only if the capacity of the house is greater than or equal to the person’s height
// Nearby empty Houses are allotted to the person( starting from the extreme left)
// You need to find the number of homeless people who have not been allotted any home if the government follows the above conditions. So that government will have an idea of how many people they need to allot homes for next time.

// Constraints:

// 1 <= N <= 10^3
// 1 <= people[i] <= 10^5
// 1 <= house[i] <= 10^5
// Input Format for Custom Testing:

// The first line contains an integer, N, denoting the number of  people and number of houses.
// Each line i of the N subsequent lines (where 0 <= i <= N) contains an integer describing peoplei.
// Each line i of the N subsequent lines (where 0 <= i <= N) contains an integer describing housei.




#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& people, vector<int>& height, int n){
        int homeless = 0;
        
        for(int i = 0; i<n; i++){
                for(int j = 0; j<n; j++){
                        if(people[i] < height[j]){
                                homeless++;
                                height[j] = -1;
                                break;
                        }
                }
        }
        return n-homeless;
}

int main(){
        int n;
        cin>>n;
        vector<int>people(n);
        vector<int>height(n);
        for(int i = 0; i<n; i++){
                cin>>people[i];
        }
        for(int i = 0; i<n; i++){
                cin>>height[i];
        }
        int res = func(people, height, n);
        cout<<res<<endl;
        return 0;
}