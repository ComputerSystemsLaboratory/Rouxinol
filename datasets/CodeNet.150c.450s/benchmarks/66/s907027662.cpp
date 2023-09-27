#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;




int main(){
    map<string,int> data;
    data.clear();
    
    int n,m;
    cin>>n;
    rep(i,n){
        string a;
        cin>>a;
        data[a]=1;
    }
    
    cin>>m;
    bool now=true;

    rep(i,m){
        string a;
        cin>>a;
        if(data[a]==1){
            if(now){
                cout<<"Opened by ";
            }
            else{
                cout<<"Closed by ";
            }
            now=!now;
            cout<<a<<endl;
            
        }
        else{
            cout<<"Unknown "<<a<<endl;
        }
    }
    
    
    return 0;
}