#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

int main() {
	
	int m, tmp;
	
			while (cin >> m){
			
				if(m > 0)  {
					st.push(m);
				}
				else if(m == 0)  {
					cout << st.top() << endl;
					st.pop();
				}
			}
			
	return 0;
}