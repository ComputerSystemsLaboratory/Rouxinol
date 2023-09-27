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
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;


int solve(string s){
    int c=0;
    map<string,bool> data;
    data.clear();
    
    int len=s.sz;
    REP(i,1,len){
        string a=s.substr(0,i);
        string b=s.substr(i,len-i);
        
        if(data[a+b]==false)c++;
        data[a+b]=true;
        
        reverse(all(a));
        if(data[a+b]==false)c++;
        data[a+b]=true;
        
        reverse(all(b));
        if(data[a+b]==false)c++;
        data[a+b]=true;
        
        reverse(all(a));
        if(data[a+b]==false)c++;
        data[a+b]=true;

        reverse(all(b));
        
        if(data[b+a]==false)c++;
        data[b+a]=true;
        
        reverse(all(a));
        if(data[b+a]==false)c++;
        data[b+a]=true;
        
        reverse(all(b));
        if(data[b+a]==false)c++;
        data[b+a]=true;
        
        reverse(all(a));
        if(data[b+a]==false)c++;
        data[b+a]=true;

    }
    
    
    return c;
}


int main(){
    
    int n;
    cin>>n;
    rep(i,n){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    
    return 0;
}