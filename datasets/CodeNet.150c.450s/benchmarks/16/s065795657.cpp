#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<int> area(s.size()+1,0);
    vector<int> hei(40000,1e9),wid(40000,1e9);


    int maxh=20000,minh=400000;
    int loch=20000;
    hei[20000]=0;
    for(int i=1;i<=s.size();i++){
//        cout << s[i-1];
//        cout <<"loch : "<< loch << endl;
        if(s[i-1]=='\\'){
            loch--;
        }else if(s[i-1]=='/'){
            loch++;
            if(hei[loch]!=1e9){
                area[i]=(i-hei[loch]-1); //area
                wid[i]=hei[loch]; //start i of area
            }
        }
        hei[loch]=i;
    }
//    for(int i=0;i<=s.size();i++){
//        cout << i;
//        cout << " area : "<< area[i];
//        cout << " begin wid : "<<wid[i] << endl;
//    }
//
    int bw=0,cou=-1;
    stack<pair<int,ll> > st;
    for(int i=0;i<=s.size();i++){
        if(area[i]!=0){
            if(wid[i]>=bw){
                st.push(make_pair(i,area[i]));
                bw=wid[i];
            }else{
                for(;!st.empty();){
                    int j=st.top().first;
                    ll a=st.top().second;
                    if(wid[j]>wid[i]){
                        area[i]+=a;
                        st.pop();
                    }else{
                        break;
                    }
                }
                st.push(make_pair(i,area[i]));
            }
        }
    }

    ll sumare=0;
    int siz=st.size();
    vector<ll> vc;
    for(int i=0;i<siz;i++){
        sumare += st.top().second;
        vc.push_back(st.top().second);
        st.pop();
    }

    cout << sumare << endl;
    cout << siz << (siz!=0?" ":"\n");
    for(int i=vc.size()-1;i>=0;i--){
        cout << vc[i] << (i!=0?" ":"\n");
    }
}

