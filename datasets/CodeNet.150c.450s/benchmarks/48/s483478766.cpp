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
    int e;
    while(cin>>e,e){
        vector<PI> v3;
        for(int i =0;i<=100;i++){
            PI temp;
            temp.first=pow(i,3);temp.second=i;
            v3.push_back(temp);
        }
        vector<PI> v2;
        for(int i=0; i<=10000;i++){
            PI temp;
            temp.first=pow(i,2); temp.second=i;
            v2.push_back(temp);
        }
        PI min; min.first=INF; min.second=INF;
        for(int i=(int)v3.size()-1; i>=0;i--){
            for(int j=(int)v2.size()-1; j>=0;j--){
                if(v3[i].first+v2[j].first<=e){
                    if(min.second+min.first>e-(v3[i].first+v2[j].first)+v3[i].second+v2[j].second){
                        min.second=v3[i].second+v2[j].second;
                        min.first=e-(v3[i].first+v2[j].first);
                    }
                }
            }
        }
        cout<<min.second+min.first<<endl;
    }
    return 0;
}