#include<vector>

#include<iostream>

using namespace std;

int findCount(vector < int > & arr, int num, int diff) {
        int count = 0;
        vector < int > res;
        for (int i = 0; i < arr.size(); i++) {
                if (abs(num - arr[i]) <= diff) {
                        count++;
                        res.push_back(arr[i]);
                }
        }
        return count;
}

int main() {
        int n, num, diff;
        cin >> n;
        vector < int > arr(n);
        for (auto & it: arr) {
                cin >> it;
        }
        cin >> num;
        cin >> diff;
        cout << findCount(arr, num, diff);
        return 0;
}