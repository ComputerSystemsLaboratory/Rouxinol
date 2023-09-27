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
    int n,m,p;
    while(cin>>n>>m>>p){
        if(n==0 && m==0 && p==0)break;
        
        int sum=0;
        int data[200]={};
        rep(i,n){
            cin>>data[i];
            sum+=data[i];
        }
        
        double allMoney=sum*100;
        allMoney=allMoney*(100-p)/100;
        
        if(data[m-1]==0)cout<<'0'<<endl;
        else cout<<(int)(allMoney/data[m-1])<<endl;
        
        
    }
    return 0;
}