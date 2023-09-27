//I used a #1336508 code by s146028 as a reference
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <queue>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    typedef pair<char, int> bslash;
    typedef pair<int, int> lake;
    stack<bslash> bslashes;
    stack<lake> lakes;
    int A=0;
    int sum=0;
    for(int n=0; n<str.length(); ++n){
        if (str[n] == '\\'){
            bslashes.push(bslash('\\', n));
        }else if (str[n] == '/'){
            if (!bslashes.empty()){
                A += n - bslashes.top().second;
                if (!lakes.empty()){
                    while(!lakes.empty() && bslashes.top().second < lakes.top().second){
                        sum += lakes.top().first;
                        lakes.pop();
                    }
                }
                lakes.push(lake(sum+n-bslashes.top().second, n));
                sum = 0;
                bslashes.pop();
            }
        }
    }
    
    cout << A << endl;
    cout << lakes.size();
    stack<int> st;
    
    while(!lakes.empty()){
        st.push(lakes.top().first);
        lakes.pop(); 
    }
    while(!st.empty()){
        cout << ' ' << st.top();
        st.pop();
    }
    cout << endl;
}