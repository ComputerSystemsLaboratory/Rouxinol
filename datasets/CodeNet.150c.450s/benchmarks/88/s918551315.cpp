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
#include<map>
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
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
int main(){
    int w,h;
    while(cin>>h>>w,w+h){
    int sum=w*w+h*h; vector<pii>v;
    rep(i,151)rep(j,151){
        //i:h j:w
        if(i==0||j==0)continue;;
        if(((sum>i*i+j*j||j<=i)))continue;
        if(sum==i*i+j*j&&h<i)v.push_back(pii(sum,i));
        else if(sum<i*i+j*j)v.push_back(pii(i*i+j*j,i));
    }
    sort(all(v));
    //rep(i,10)cout<<v[i].first<<" "<<v[i].second<<endl;
    cout<<v[0].second<<" "<<sqrt((double)v[0].first-(v[0].second*v[0].second))<<endl;
    }
}