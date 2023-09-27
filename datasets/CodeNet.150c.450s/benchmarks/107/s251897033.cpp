#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef long long ll;


//レーベンシュタイン距離を求める
int LD(string s1, string s2)
{
    int l1 = s1.length() + 1;
    int l2 = s2.length()+ 1;
    vvi dist(l1);
    rep(i,l1) dist[i].resize(l2);
    int cost = 0;
 
    rep(i,l1) dist[i][0] = i;
    rep(i,l2) dist[0][i] = i;
 
    REP(i,1,l1){
        REP(j,1,l2){
            cost = !(s1[i-1] == s2[j-1]);
            dist[i][j] = min(dist[i-1][j]+1,min(dist[i][j-1]+1,dist[i-1][j-1]+cost));
        }
    }
    return dist[l1-1][l2-1];
}
 
int main()
{   
    string s1; cin>>s1;
    string s2; cin>>s2;
    cout<<LD(s1,s2)<<endl;
    return 0;
}