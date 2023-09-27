#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    stack<int> s;
    while(scanf("%d",&n)!=EOF){
        if(n!=0) s.push(n);
        else{
            cout << s.top() << "\n";
            s.pop();
        }
    }
}

