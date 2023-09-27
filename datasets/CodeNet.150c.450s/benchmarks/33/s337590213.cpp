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

#define MAX 1000

int tax1[MAX] = {};
int tax2[MAX] = {};

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c, a&&b&&c)
	{
		for (size_t i = 0; i < MAX; i++)
		{
			tax1[i] = i*(100 + a) / 100;
			tax2[i] = i*(100 + b) / 100;
		}
		int ans = 0;
		int j = MAX - 1;
		int i = 1;
		while (1)
		{
			if (tax1[i] + tax1[j] == c)
			{
				ans = max(ans, tax2[i] + tax2[j]);
				j--;
				i++;
			} else if (tax1[i] + tax1[j] > c)
			{
				j--;
			} else
			{
				i++;
			}
			if (j==1||j == i-1||i==MAX)break;
		}
		cout << ans << endl;
	}
}