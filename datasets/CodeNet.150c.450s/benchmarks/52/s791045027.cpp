#include "stdio.h"
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    int input; 
    int input_order[100];
    stack<int> train_stack;
    vector<int> order;

    while (~scanf("%d", &input)){
        if (input==0){
            cout<<train_stack.top()<<endl;
            train_stack.pop();
        }
        else{
            train_stack.push(input);
        }
    }
    return 0;
}