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
    int x,y,z,c;
    cin>>x>>y>>z;
    rp(i,x,y+1){
        if(z%i==0) c++;
    }
    cout<<c<<endl;

    return 0;
};