#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<map>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(){
    int n;
    cin>>n;
    int judged[4]={0,0,0,0};

    string judge[n];
    rep(i,n){
        cin>>judge[i];
        if(judge[i]=="AC") judged[0]++;
        else if(judge[i]=="WA") judged[1]++;
        else if(judge[i]=="TLE") judged[2]++;
        else judged[3]++;
    }

    cout<<"AC x "<<judged[0]<<endl;
    cout<<"WA x "<<judged[1]<<endl;
    cout<<"TLE x "<<judged[2]<<endl;
    cout<<"RE x "<<judged[3]<<endl;
}