
 // C
 #ifndef _GLIBCXX_NO_ASSERT
 #include <cassert>
 #endif
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
 #ifdef __GXX_EXPERIMENTAL_CXX0X__
 #include <ccomplex>
 #include <cfenv>
 #include <cinttypes>
 #include <cstdbool>
 #include <cstdint>
 #include <ctgmath>
 #include <cwchar>
 #include <cwctype>
 #endif
 
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
 #ifdef __GXX_EXPERIMENTAL_CXX0X__
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
 #include <system_error>
 #include <thread>
 #include <tuple>
 #include <typeindex>
 #include <type_traits>
 #include <unordered_map>
 #include <unordered_set>
 #endif
using namespace std;
const long long MOD = 1000000007;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main(){
    int m,n;
    cin >> m >> n;
    cout << modpow(m,n,MOD) << endl;
    return 0;
}
