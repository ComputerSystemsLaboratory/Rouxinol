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


string solve(string s){
    string ret="";
    char data[20][10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int d[20]={0,5,3,3,3,3,3,4,3,4};
    
    string tmp="";
    rep(i,s.sz){
        if(s[i]!='0'){
            tmp+=s[i];
        }
        else{
            if(tmp.sz>0){
                ret+=data[ tmp[0]-'0' ][(tmp.sz-1)%d[tmp[0]-'0']];
                tmp.clear();
            }
        }
    }
    return ret;
    
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