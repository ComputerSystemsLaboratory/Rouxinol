#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){
    int num;
    stack<int> Train;
    while(cin >> num){
        if(num){
            Train.push(num);
        }else{
            cout << Train.top() << endl;
            Train.pop();
        }
    }

    return 0;
}