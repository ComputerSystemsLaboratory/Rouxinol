#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <climits>
#include <cfloat>
#include <queue>
#include <stack>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

const int INF = INT_MAX;

typedef long long LL;
typedef pair<int,int> P;

int main(){
    stack<int> st;
    int x;
    while(cin>>x){
        if(x==0){
            cout << st.top() << endl;
            st.pop();
            continue;
        }else{
            st.push(x);
        }
    }
    return 0;
}