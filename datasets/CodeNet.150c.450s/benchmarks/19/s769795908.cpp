#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    vector<pair<int,int> > num;
    while(true){
        int a,b;    cin>>a>>b;
        if(a==0&&b==0){
            break;
        }
        if(a>b) swap(a,b);
        num.push_back(make_pair(a,b));
    }
    rep (i,num.size()) {
        cout<< num[i].first<<" "<<num[i].second<<endl;
    }
}
