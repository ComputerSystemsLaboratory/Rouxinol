#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    while(cin>>N) {
        set<string> S;
        for(int i=0;i<N;i++) {
            string U;
            cin>>U;
            S.insert(U);
        }
        bool close=1;
        int M;
        cin>>M;
        for(int i=0;i<M;i++) {
            string T;
            cin>>T;
            if(S.find(T)!=S.end()) {
                if(close) cout<<"Opened by "<<T<<endl;
                else cout<<"Closed by "<<T<<endl;
                close^=1;
            }else {
                cout<<"Unknown "<<T<<endl;
            }
        }
    }
}