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


int main() {
    int a[4],b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
        int H=0,B=0;
        int blow[10]={};
        rep(i,4) blow[a[i]]++;
        rep(i,4) blow[b[i]]++;
        rep(i,10)if(blow[i]==2)B++;
        
        rep(i,4){
            if(a[i]==b[i])H++;
        }
        cout<<H<< " "<<B-H<<endl;
    }
    return 0;
}