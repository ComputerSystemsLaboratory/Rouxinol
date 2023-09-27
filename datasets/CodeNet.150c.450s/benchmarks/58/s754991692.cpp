#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){

    stack<int> a;
    char b[100];
    
    while( cin >> b ){
        if(b[0]=='+'){
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            int z = x + y;
            a.push(z);
        }
        else if(b[0]=='-'){
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            int z = y - x;
            a.push(z);
        }
        else if(b[0]=='*'){
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            int z = x * y;
            a.push(z);
        }
        else{
            int i = atoi(b);
            a.push(i);
        }
    }
    
    printf("%d\n",a.top());

    return 0;
}

