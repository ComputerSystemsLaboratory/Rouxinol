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
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;



int isPointInsidePolygon(vector<pair<double,double>> angle,pair<double,double> point){    //点が多角形の内側にあるかどうかを求める
    long angleSum=angle.size();
    int count=0;
    
    for(int i=0;i<angleSum;i++){
        double x1=angle[i].first;
        double y1=angle[i].second;
        double x2=angle[(i+1)%angleSum].first;
        double y2=angle[(i+1)%angleSum].second;
        double xp=point.first;
        double yp=point.second;
        
        double result=(x2-x1)*(yp-y1) - (xp-x1)*(y2-y1);
        
        if(result>0)count++;
        
    }
    if(count%angleSum==0)return 1;    //点は内側にある
    else return 0;
    
}



int main(){
    double a,b,c,d,e,f,g,h;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
        vector<pair<double,double>> angle;
        angle.pb(pair<double,double>(a,b));
        angle.pb(pair<double,double>(c,d));
        angle.pb(pair<double,double>(e,f));

        if(isPointInsidePolygon(angle,pair<double,double>(g,h))){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }


    return 0;
}