#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n,n){
        set<pair<int,int> > sp;

        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            sp.insert(make_pair(y,x));
        }

        cin>>m;
        int c=0;
        pair<int,int> now(10,10);

        for(int i=0;i<m;i++){
            char d;
            int len;

            cin>>d>>len;
            cin.ignore();

            for(int j=0;j<len;j++){
                switch(d){
                    case 'N':
                        now.first++;
                        break;
                    case 'S':
                        now.first--;
                        break;
                    case 'E':
                        now.second++;
                        break;
                    case 'W':
                        now.second--;
                        break;
                }

                decltype(sp.end()) it;
                if((it=sp.find(now)) != sp.end()){
                    c++;
                    sp.erase(it);
                }
            }
        }

        cout << (c==n ? "Yes" : "No") << endl;
    }
}