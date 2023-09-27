#include <cassert>

#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>

// C++
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
//#include <boost/foreach.hpp>
//#include <boost/range/algorithm.hpp>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define ll long long
#define Sort(v) sort(all(v))
#define INF 1000000000
#define END return 0
#define pb push_back
#define se second
#define fi first
#define pb push_back
#define all(v) (v).begin() , (v).end()
#define MP make_pair
#define MOD 1000000007LL
using namespace std;
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main (){
    int h,w;
    while(cin>>h>>w && h){
        vector<vector<int>> v(h,vector<int>(w));
        rep(i,0,h)rep(j,0,w)cin>>v[i][j];
        int ans=0;
        for(int i=0;i<(1<<h);i++){
            //cout<<"i"<<i<<endl;
            int s=0;
            for(int p=0;p<w;p++){
                int sum=0;
                for(int q=0;q<h;q++){
                    //cout<<"pq"<<p<<" "<<q<<endl;
                    //cout<<(i>>q &1)<<" ";
                    if(i>>q & 1){
                        if(v[q][p]==1){sum++;}
                    
                    }
                    else {
                        if(v[q][p]==0){sum++;}
                        
                    }
                }
               // cout<<" sum: "<<sum<<endl;
                if(sum==0)s+=h;
                else if(sum*2>=h)s+=sum;
                else s+=(h-sum);
            }
            //  cout<<s<<endl;
            //  cout<<endl;
            ans=max(ans,s);
        }
        cout<<ans<<endl;
    }
    
}


/*
14
1 0
1 1
1 2
2 1
0 0
0 1
0 2
0 3
3 3
4
5
6
7
8
*/

