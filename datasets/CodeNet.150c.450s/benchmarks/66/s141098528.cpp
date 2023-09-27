#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,m;
    cin>>n;
    std::deque<string> id;
    string s,card;
    for (int i=0;i<n;i++) {
        cin>>s;
        id.emplace_back(s);
    }
    cin>>m;
    int flag=0;
    for (int j=0;j<m;j++) {
        cin>>card;
        if (find(id.begin(),id.end(),card)!=id.end()) {
            if (flag==0) {
                flag=1;
                cout<<"Opened by "<<card<<endl;
            } else {
                flag=0;
                cout<<"Closed by "<<card<<endl;
            }
        } else {
            cout<<"Unknown "<<card<<endl;
        }
    }
}

