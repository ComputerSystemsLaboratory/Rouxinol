#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int> PI;
#define MAX 1000009
int main(){
    int n,n2;
    while(cin>>n>>n2,n+n2){
        string s; s=to_string(n);
        int size=(int)s.size();
        rep(i,n2-size) s.push_back('0');
        vi v; v.push_back(stoi(s));
        int count=1;
        while(true){
            sort(s.begin(), s.end(),greater<int>());
            string maxi=s;
            //cout<<maxi<<endl;
            sort(s.begin(), s.end());
            string mini=s;
            //cout<<mini<<endl;
            int a=stoi(maxi);
            int b=stoi(mini);
            rep(i,count){
                if(v[i]==a-b){
                    cout<<i<<" "<<a-b<<" "<<count-i<<endl;
                    goto e;
                }
            }
            v.push_back(a-b);
            s=to_string(a-b);
            rep(j,n2-s.size()){
                s.insert(s.begin(),'0');
            }
            count++;
        }
    e:;
    }
}