#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    vector<string>vs(n);
    for(int i=0;i<n;++i){
        cin>>vs[i];
    }
    sort(vs.begin(),vs.end());
    int m;cin>>m;
    bool lock=0;
    for(int i=0;i<m;++i){
        string s;cin>>s;
        auto it1=lower_bound(vs.begin(),vs.end(),s);
        auto it2=upper_bound(vs.begin(),vs.end(),s);
        if(it1==it2){
            cout<<"Unknown "<<s<<endl;
            continue;
        }
        else{
            if(lock)lock=false;
            else lock=true;
            if(lock)cout<<"Opened by "<<s<<endl;
            else cout<<"Closed by "<<s<<endl;
        }
    }
    return 0;
}