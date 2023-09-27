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

struct Saikoro{
    vector<int> v{6};
    void rotate(char c){
        if(c=='E'){
            vector<int> temp={v[3],v[1],v[0],v[5],v[4],v[2]};
            v=temp;
        }else if(c=='W'){
            vector<int> temp={v[2],v[1],v[5],v[0],v[4],v[3]};
            v=temp;
        }else if(c=='N'){
            vector<int> temp={v[1],v[5],v[2],v[3],v[0],v[4]};
            v=temp;
        }else if(c=='S'){
            vector<int> temp={v[4],v[0],v[2],v[3],v[5],v[1]};
            v=temp;
        }
    }

};

int main (){
    Saikoro dice;
    rep(i,0,6)cin>>dice.v[i];
    string s;
    cin>>s;
    for(auto gotutiyan:s){
        dice.rotate(gotutiyan);
    }
    cout<<dice.v[0]<<endl;
}



/*

*/
