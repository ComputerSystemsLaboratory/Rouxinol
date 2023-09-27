#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>


using namespace std;

int main(int, char**){
    int tmp;
    stack<int> st;
    while(cin >> tmp){
	if(tmp == 0) {
	    cout << st.top() << endl;
	    st.pop();
	}
	else{
	    st.push(tmp);
	}
    }
    return 0;
}