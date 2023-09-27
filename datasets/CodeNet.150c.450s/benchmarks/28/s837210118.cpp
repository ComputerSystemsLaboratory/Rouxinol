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
//#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
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
#endif
using namespace std;
typedef long long i64;
typedef vector<int> ivec;
typedef vector<string> svec;


int main(void){
    const int MAX = 100000;
    int n, k;
    int W[MAX];
    int mid;
    int left = 0;
    int right = 100000 * 10000;
    int windex = 0;
    int pindex = 0;

    //input starts
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", W + i);
    //input ends

    //solve starts
    
    while (right - left > 1) {
        mid = (left + right) / 2;
        int sum = 0;
        while (windex < n && pindex < k){
            if (sum + W[windex] <= mid) {
                sum += W[windex];
                windex++;
                // printf("windex = %d\n", windex);
            } else {
                sum = 0;
                pindex++;
                // printf("pindex = %d\n", pindex);

            }
        }
        if (windex == n){
            right = mid;
            windex = 0;
            pindex = 0;
        } else {
            left = mid;
            windex = 0;
            pindex = 0;
        }
    }
    //solve end
    
    printf("%d\n", right);
    return 0;
}