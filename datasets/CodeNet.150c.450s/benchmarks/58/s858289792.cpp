#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;
int main(void){
    string str;
    stack<long> st;
    
    while(cin >> str){
        if(str == "+" || str == "-" || str == "*"){
            long y = st.top();
            st.pop();
            long x = st.top();
            st.pop();
            if(str == "+")
                st.push(x + y);
            else if(str == "-")
                st.push(x - y);
            else
                st.push(x * y);
        }
        else{
            char *ends;
            st.push(strtol(str.c_str(), &ends, 0));
        }
    }
    
    cout << st.top() << endl;
    
    return 0;
}