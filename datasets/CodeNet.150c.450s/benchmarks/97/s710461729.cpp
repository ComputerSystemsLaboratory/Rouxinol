#define _crt_secure_no_warnings

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

int main()
{
	int N;
	while (1)
	{
		cin >> N;
		if (N == 0)break;
		//int xnow = 0, ynow = 0;
		int xmax = INT_MIN, xmin = INT_MAX;
		int ymax = INT_MIN, ymin = INT_MAX;
		int a, b;
		map<int, pair<int, int>>data;
		pair<int, int>p;
		p.first = 0; p.second = 0;
		data[0] = p;
		for (size_t i = 1; i < N; i++)
		{
			cin >> a >> b;
			p.first = data[a].first;
			p.second = data[a].second;
			switch (b)
			{
				case 0:p.first--; break;
				case 1:p.second--; break;
				case 2:p.first++; break;
				case 3:p.second++; break;
			}
			data[i] = p;
		}
		for (auto x : data)
		{
			xmax = max(xmax, x.second.first);
			xmin = min(xmin, x.second.first);
			ymax = max(ymax, x.second.second);
			ymin = min(ymin, x.second.second);
		}
		cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;
	}
}