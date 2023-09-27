#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#define rep(i,n) for(int i = 0;i < n;i++)
#define N 20005
using namespace std;

int h[N],wh[N];
int nh;
string S;

int main(){
    std::cin >> S;
    int l = S.length();
    h[0]=0;
    for(int i=1;i<=l;i++){
        switch(S[i-1]){
            case '\\':
                h[i]=h[i-1]-1;
                break;
            case '/':
                h[i]=h[i-1]+1;
                break;
            case '_':
                h[i]=h[i-1];
                break;
        }
    }
    int nwh=0;
    int ans = 0;
    wh[0]=0;
    for(int i = 1;i<=l;i++){
        nwh=max(nwh,h[i]);
        wh[i]=nwh;
    }
    nwh=h[l];
    wh[l]=min(wh[l],nwh);
    for(int i = l-1;i>=0;i--){
        nwh=max(nwh,h[i]);
        wh[i]=min(wh[i],nwh);
    }
    vector<int> ws;
    int left = 0;
    int ar2=0;
    for(int i = 1;i<=l;i++){
        ar2 += wh[i]+wh[i-1]-h[i]-h[i-1];
        if(wh[left]==h[i]){
            if(ar2){ws.push_back(ar2/2);
                }
            ans+=ar2;
            left=i;
            ar2=0;
        }else if(wh[i]!=wh[left]){
            left = i;
        }
    }
    cout<<ans/2<<endl;
    if(!ws.empty()){
        cout<<ws.size()<<" ";
        rep(i,ws.size()-1){
            cout<<ws[i]<<" ";
        }
        cout<<ws.back()<<endl;
    }else{
        cout<<0<<endl;
    }
}