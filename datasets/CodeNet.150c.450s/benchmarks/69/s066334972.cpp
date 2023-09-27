//C++14 (Clang 3.8.0)

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#define rp(i,a,b) for(int (i)=(int)(a);i<(int)(b);++i)

typedef long long ll;


using namespace std;
int main(){
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        stack<int> a,b;
        a.push(0);
        b.push(0);
        bool flag=true;
        for(int j=0;j<10;j++){
            int tm;
            cin>>tm;
            if(tm>a.top()) a.push(tm);
            else if(tm>b.top()) b.push(tm);
            else {flag=false;}
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
};