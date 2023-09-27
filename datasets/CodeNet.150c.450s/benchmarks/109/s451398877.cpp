#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    while(cin>>n,n){
        vector<P> V;
        V.clear();
        for(int i=0;i<n;i++){
            int hh,mm,ss;
            cin>>hh;
            cin.ignore();
            cin>>mm;
            cin.ignore();
            cin>>ss;
            cin.ignore();
            int ts = hh*3600+mm*60+ss;
            V.emplace_back(ts,+1);
            cin>>hh;
            cin.ignore();
            cin>>mm;
            cin.ignore();
            cin>>ss;
            cin.ignore();
            int te = hh*3600+mm*60+ss;
            V.emplace_back(te,-1);
        }
        sort(V.begin(), V.end());
        int ans=0,cnt=0;
        for(auto v:V){
            cnt+=v.second;
            //cout<<cnt<<endl;
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}