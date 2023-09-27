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


#define rep(i,n) for(int i=0;i<(n);i++)

const double EPS = 1e-10;
const double INF = 100000000;




int main(){
    int n;
    cin>>n;
    rep(i,n){
        double x[4],y[4],ax,ay,bx,by,ans;
        
        rep(j,4){
            cin>>x[j]>>y[j];
        }
        
        ax=x[1]-x[0];
        ay=y[1]-y[0];
        bx=x[3]-x[2];
        by=y[3]-y[2];
        
        ans=ax*by-bx*ay;
        if(fabs(ans)<=EPS)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}