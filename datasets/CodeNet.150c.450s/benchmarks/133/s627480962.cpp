#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <limits.h>
#include <cmath>
#include <map>
using namespace std;
using P = pair<int,int>;
using ll = long long;
int d;
//inputの時にresize
vector<int> c(26);
vector<vector<int>> s;
vector<int> t;
vector<int> p;
//last&next
vector<P> ln;
void input(){
    cin>>d;    
    s.resize(d,vector<int>(26));
    t.resize(d);
    p.resize(d);
    ln.resize(d,P(0,0));
    for(int i=0;i<26;i++)cin>>c[i];
    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++){
            cin>>s[i][j];
        }
    }
}
void output(){
    for(int i=0;i<d;i++){
        cout<<t[i]<<endl;
    }
}
//aは全体の日程
void calc_p(vector<int> a){
    for(int i=0;i<d;i++){
        if(i==0)p[i]=0;
        else p[i]=p[i-1];
        p[i]+=s[i][a[i]];
        for(int j=0;j<26;j++){
            int last=-1;
            for(int k=i;k>=0;k--){
                if(a[k]==j){
                    last=k;
                    break;
                }
            }
            p[i]-=c[j]*(i-last);
        }
    }
}
int main(){
    input();
    for(int i=0;i<d;i++){
        cin>>t[i];
        t[i]--;
    }
    calc_p(t);
    for(int i=0;i<d;i++){
        cout<<p[i]<<endl;
    }
}
