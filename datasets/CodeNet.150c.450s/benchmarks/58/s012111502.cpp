#include <iostream>
#include <stack>
#include <typeinfo>
#include <string>
using namespace std;

int main(){
    stack<int> st;
    int temp1,temp2 = 0;
    string Buf;
    
    while(cin >> Buf){
        if(Buf == "+"){
            temp1 = st.top();
            st.pop();
            temp2 = st.top();
            st.pop();
            st.push(temp1 + temp2);
        }else if(Buf == "-"){
            temp2 = st.top();
            st.pop();
            temp1 = st.top();
            st.pop();
            st.push(temp1 - temp2);
        }else if(Buf == "*"){
            temp1 = st.top();
            st.pop();
            temp2 = st.top();
            st.pop();
            st.push(temp1 * temp2);
        }else{
            st.push(stoi(Buf));
        }
    }
    
    cout << st.top() << endl;
    
    return 0;
}