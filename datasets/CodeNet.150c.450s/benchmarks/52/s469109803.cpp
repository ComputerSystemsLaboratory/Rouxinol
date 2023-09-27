#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main(){
    int n;
    std::stack<int> st;
    while(scanf("%d", &n) != EOF){
        if(n == 0){
            cout << st.top() << endl;
            st.pop();
        }
        else
            st.push(n);
    }
}