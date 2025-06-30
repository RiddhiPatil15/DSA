#include <bits/stdc++.h>
using namespace std;

class Queue{
        vector<int>q;
        
public:
        bool isEmpty(){
                return q.empty();
        }
        void push(int x){
                q.push_back(x);
        }
        void pop(){
                if(!q.empty()){
                        q.erase(q.begin());
                }
        }
        int getFront(){
                return isEmpty() ? -1 : q.front();
        }
        void display(){
                for(int i = 0; i<q.size(); i++){
                        cout<<q[i]<<" ";
                }
        }
};

int main() {
	// your code goes here
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.display();
	cout<<endl;
	q.pop();
	cout<<q.getFront()<<endl;
	q.push(6);
	q.display();
        return 0;
}
