#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

void solve(int h,int w){
    int sq = h*h+w*w;
    vector<pii> v;
    for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
            v.push_back(make_pair(i*i+j*j,i));
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(sq==v[i].first && v[i].second>h){
            for(int j=0;j<=150;j++){
                if(v[i].second*v[i].second+j*j==sq){
                    cout << v[i].second << " " << j << endl;
                    return;
                }
            }
        }else if(v[i].first>sq){
            for(int j=0;j<=150;j++){
                if(v[i].second*v[i].second+j*j==v[i].first){
                    cout << v[i].second << " " << j << endl;
                    return;
                }
            }
        }
    }
}

int main(){
    int h,w;
    while(cin>>h>>w){
        if(h==0 && w==0) break;
        solve(h,w);
    }
}