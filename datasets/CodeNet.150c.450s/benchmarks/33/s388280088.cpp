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

int tax(int v, int w)
{
	return (int)(v*(100.0 + (double)w) / 100.0);
}

int main()
{
	int p, q, r,s;
	vector<int>x, y;
	while (1)
	{
		cin >> p >> q >> r;
		if (p == 0 && q == 0)break;
		x.clear();
		y.clear();
		for (size_t i = 0; i <= r; i++)
		{
			x.push_back(tax(i, p));
			
		}
		int i=1, j=x.size()-2;
		while (i <= j)
		{
			if (x[i] + x[j] == r)
			{
				y.push_back(tax(i, q) + tax(j, q));
				i++;
				j--;
			} else if (x[i] + x[j] < r)
			{
				i++;
			} else
			{
				j--;
			}

		}
		sort(y.rbegin(), y.rend());
		cout << y[0]<<endl;
	}
	return 0;
}