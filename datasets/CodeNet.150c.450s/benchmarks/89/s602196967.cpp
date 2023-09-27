

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
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main (){
    // ?´???°??????sqrt(max)??§??????
    vector<bool>check(MAX+1);
    rep(i, MAX+1)
    check[i] = true;
    vector<int>Primenumber(MAX+1,0); //Primearray
    int counter =0;                  //Primearray counter;
    for(int i = 2; i<MAX+1;i++){
        if(check[i]){
            for(int j = 2;i*j<MAX;j++)
                check[i*j] = false;//?´???°??????Primearray???????´??????????????????°?????¨???false???
            Primenumber[counter] = i;
            counter++;
        }
    }
    int a,d,n;
    while(cin>>a>>d>>n,a+d+n){
        int count=0;int ans=0;
        while (true) {
            if(check[a] && a!=1)count++;
            if(count==n) {ans=a;break;}
            a+=d;
        }
        cout<<ans<<endl;
    }
}