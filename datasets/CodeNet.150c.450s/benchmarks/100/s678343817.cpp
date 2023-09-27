#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <complex>
#include <string>
#include <sstream>

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>

using namespace std;

#define all(c) c.begin(),c.end()
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl

typedef long long ll;
typedef vector<int> vi;

template<typename T>
ostream& operator<<(ostream& os,const vector<T>& val){
    os << "[ ";
    for(typename vector<T>::const_iterator it=val.begin();
        it != val.end();++it){
        os << *it << " ";
    }
    os << "]";
    return os;
}

ll fact(ll n){
    if(n == 1) return 1;
    else return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}