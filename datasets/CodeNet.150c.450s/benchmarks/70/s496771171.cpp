#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-6;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
    int dd[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string>v;
    v.push_back("Wednesday");
    v.push_back("Thursday");
    v.push_back("Friday");
    v.push_back("Saturday");
    v.push_back("Sunday");
    v.push_back("Monday");
    v.push_back("Tuesday");
    int mo,da;
    while(cin>>mo>>da,mo){
        int d=da;
        for(int i=0;i<mo-1;i++){
            d+=dd[i];
        }
        cout<<v[d%7]<<endl;
    }
}
