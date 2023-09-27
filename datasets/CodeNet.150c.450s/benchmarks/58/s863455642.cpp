#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>

using namespace std;


const long long  MAX = 200000;
int main() {
    

    stack <int> st;
    long long a,b;
    string s;
    while(cin >> s){
        if(s == "+"){
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(a+b);
        }else if(s == "-"){
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b-a);
        }else if(s == "*"){
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(a*b);
        }else{
            st.push(atoi(s.c_str()));
        }
    }
    cout << st.top() << endl;

}
