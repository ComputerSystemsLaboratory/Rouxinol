/*input
20
*/

// #include<bits/stdc++.h>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <cstdint>
#endif
 
using namespace std;
long long mod=1e9+7;
long long INF=1e7;
double EPS = 1e-12;
const long long lim = 1e5+100;
typedef long long int lld;
typedef long long ll;


ll A[lim];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    lld T,i,p,j,l,n,e,r,b,c,k,m,q,a,d,w,x,y,u,v,z,t,curr,prev,sum,ans,val,countA,indicator=0,pos,h,minA,maxA,type;
    ans=0;
    cin>>n;
    for(int i=1;i<=100;i++) {
        for(int j=1;j<=100;j++) {
            for(int k=1;k<=100;k++) {
                if(i*i+ j*j + k*k + i*j + i*k + j*k <= n)
                A[i*i+ j*j + k*k + i*j + i*k + j*k]++;
            }
        }
    }

    for(int i=1;i<=n;i++) cout<<A[i]<<endl;
    return 0;
}
