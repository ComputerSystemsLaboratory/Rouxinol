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

vector<vector<int>>data;

int x[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int y[] = { 1, 1, 0, -1, -1, -1, 0, 1 };

void serch(int i, int j)
{
	data[i][j] = 0;
	for (size_t k = 0; k < 8; k++)
	{
		if (data[i + x[k]][j + y[k]])
		{
			serch(i + x[k], j + y[k]);
		}
	}
}

int main()
{
	int N, M;
	int ans = 0;
	while (1)
	{
		data.clear();
		ans = 0;
		cin >> N >> M;
		if (N == 0 && M == 0)break;
		swap(M, N);
		data.resize(N + 2);
		for (size_t i = 0; i < N + 2; i++)
		{
			data[i].resize(M + 2);
			for (size_t j = 0; j < M+2; j++)
			{
				data[i][j] = 0;
			}
		}
		for (size_t i = 1; i <= N; i++)
		{
			for (size_t j = 1; j <= M; j++)
			{
				cin >> data[i][j];
			}
		}
		for (size_t i = 1; i <= N; i++)
		{
			for (size_t j = 1; j <= M; j++)
			{
				if (data[i][j])
				{
					ans++;
					serch(i, j);
				}
			}
		}
		cout << ans<<endl;
	}
}