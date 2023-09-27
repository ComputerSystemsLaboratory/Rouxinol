#include <iostream>
#include <string>
#include <stack>
#include <vector>

#define MAX_LEN 20000
#define r(i, n) for(int i=0;i<n;i++) 

using namespace std;

// input
string str;

// result help
stack<int> st;
int mark[MAX_LEN] = {0};
int area[MAX_LEN] = {0};
vector<int> A;

int main(){

    getline(cin, str);

    r(i, str.size()){
        char c = str[i];
        if(c == '\\') st.push(i);
        if(c == '_') continue;
        if(c == '/'&& !st.empty()){
            area[i] = i - st.top();
            mark[i] = 1;
            mark[st.top()] = -1; st.pop();
        }
    }    

    int flag = 0, sum = 0, SUM = 0;
    r(i, str.size()) {
        if(mark[i] == 0 && flag == 0) continue;

        flag += mark[i];
        
        if(mark[i] == 1){
            sum += area[i];
        }

        if(flag == 0){
            A.push_back(sum);
            SUM += sum;
            sum = 0;
        }
    }

    // output
    cout << SUM << endl;
    cout << A.size();
    r(i, A.size()){
        cout << " " << A[i];
    }
    cout << endl;
}
