#include <iostream>
#include <stack>
#include <list>

using namespace std;


int main (int argc, char const* argv[]){
    stack<int> st;
    int n;
    int tmp;
    list<int> list1;
    
    while((cin >> n)){
        if(n == 0){ 
            list1.push_back(st.top());
            st.pop();
        }
        else st.push(n);
    }
    
    list<int>::iterator it = list1.begin();
    while(it != list1.end()){
        cout << *it << endl;
        it++;
    }
    
    return 0;
}