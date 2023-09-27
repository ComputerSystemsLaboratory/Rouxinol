#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    char ch;
    stack<int> st1;
    stack<pair<int,int>> st2;
    int ans = 0;
    for(int i=0;cin>>ch;i++){
        if(ch=='\\') st1.push(i);
        else if(ch=='/'&&!st1.empty()){
            int j = st1.top();
            st1.pop();
            int num = i-j;
            ans+=num;
            while(!st2.empty()&&st2.top().first>j){
                num+=st2.top().second;
                st2.pop();
            }
            st2.push(make_pair(j,num));
        }
    }

    vector<int> rt;
    while(!st2.empty()){
        rt.push_back(st2.top().second);
        st2.pop();
    }
    cout<<ans<<endl;
    cout<<rt.size();
    for(int i = rt.size()-1;i>=0;--i){
        cout<<" "<<rt[i];
    }
    cout<<endl;
}
