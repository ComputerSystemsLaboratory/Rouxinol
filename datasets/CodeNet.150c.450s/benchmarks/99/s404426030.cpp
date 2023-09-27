#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int,int> > vpii;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef vector<vector<string> > vvs;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define fin(ans) cout<<(ans)<<endl
#define P 1000000007
#define STI(s) atoi(s.c_str())//string to int
#define mp(p,q) make_pair(p,q)
#define Sort(a) sort(a.begin(),a.end())
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const int INF = INT_MAX;
const long long LLINF = 1LL<<60;
//g++ -std=c++1z temp.cpp
//./a.out



int main(void){ios::sync_with_stdio(false);cin.tie(0);
//////////////////////////////////////////////////////
    
    int n;
    cin>>n;
    rep(i,n){
        string s,t;
        cin>>s>>t;
        int tmp=0,sum=0;
        rep(j,s.length()){
            if(s[j]=='m'){
                tmp+=1000;
            }
            else if(s[j]=='c'){
                tmp+=100;
            }
            else if(s[j]=='x'){
                tmp+=10;
            }
            else if(s[j]=='i'){
                tmp+=1;
            }
            else{
                if(s[j+1]=='m'){
                    tmp+=1000*(s[j]-'0');
                }
                else if(s[j+1]=='c'){
                    tmp+=100*(s[j]-'0');
                }
                else if(s[j+1]=='x'){
                    tmp+=10*(s[j]-'0');
                }
                else if(s[j+1]=='i'){
                    tmp+=1*(s[j]-'0');
                }
                j++;
            }
        }
        sum+=tmp;
        tmp=0;
        rep(j,t.length()){
            if(t[j]=='m'){
                tmp+=1000;
            }
            else if(t[j]=='c'){
                tmp+=100;
            }
            else if(t[j]=='x'){
                tmp+=10;
            }
            else if(t[j]=='i'){
                tmp+=1;
            }
            else{
                if(t[j+1]=='m'){
                    tmp+=1000*(t[j]-'0');
                }
                else if(t[j+1]=='c'){
                    tmp+=100*(t[j]-'0');
                }
                else if(t[j+1]=='x'){
                    tmp+=10*(t[j]-'0');
                }
                else if(t[j+1]=='i'){
                    tmp+=1*(t[j]-'0');
                }
                j++;
            }
        }
        sum+=tmp;
        int digit[4]={0};
        rep(j,4){
            digit[j] = sum / (int)pow(10,3-j);
            sum=sum%(int)pow(10,3-j);
        }

        if(digit[0]>1)cout<<digit[0]<<'m';
        else if(digit[0]==1) cout<<'m';

        if(digit[1]>1)cout<<digit[1]<<'c';
        else if(digit[1]==1) cout<<'c';

        if(digit[2]>1)cout<<digit[2]<<'x';
        else if(digit[2]==1) cout<<'x';

        if(digit[3]>1)cout<<digit[3]<<'i';
        else if(digit[3]==1) cout<<'i';
        cout<<endl;
    }
//////////////////////////////////////////////////////
return 0;}
