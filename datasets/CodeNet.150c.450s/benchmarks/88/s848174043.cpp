#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cctype>
#include<climits>
#include<bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i,n) for(i=0;i<n;i++)
#define fin(ans) cout<<(ans)<<endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int,int> >
#define vvi vector<vector<int> >
#define vvc vector<vector<char> >
#define vvs vector<vector<string> >
#define P 1000000007
#define STI(s) atoi(s.c_str())//string to int
#define mp(p,q) make_pair(p,q)
using namespace std;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const long long LLINF=1LL<<60;
//set<int>::iterator it;
//|\_
//g++ -std=c++1z temp.cpp
//./a.out


int main(void){ios::sync_with_stdio(false);cin.tie(0);
//////////////////////////////////////////////////////
    int h,w;
    while(1){
        cin>>h>>w;
        if(h==0&&w==0)break;
        int minlen=INF,mini=INF,minj=INF;
        for(int i=1;i<151;i++){//w
            for(int j=1;j<151;j++){//h
                if(i<=j)continue;
                if(h*h+w*w>i*i+j*j||(h*h+w*w==i*i+j*j&&h>j))continue;
                if(w==i&&h==j)continue;
                if(i*i+j*j<minlen){
                    minlen=i*i+j*j;
                    mini=i;
                    minj=j;
                }
                else if(i*i+j*j==minlen&&j<minj){
                    minlen=i*i+j*j;
                    mini=i;
                    minj=j;
                }
            }
        }
        cout<<minj<<" "<<mini<<endl;
    }
//////////////////////////////////////////////////////
return 0;}

