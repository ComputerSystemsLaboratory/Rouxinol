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
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
    int n,s;
    while(cin >> n >> s,n+s){
        int temp = s;
        vi v(n,0); int count = 0; bool check = true;
        while(true){
            if(s != 0){s-=1;v[count]++; if(v[count] == temp){cout << count << endl; break;}
            }else if(s == 0){
                s+=v[count]; v[count] = 0;
            }
            if(count == n-1)
                count =0;
            else
                count++;
            
        }
    }
}