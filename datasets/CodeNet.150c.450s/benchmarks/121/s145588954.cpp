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

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	int a, b;
	while (cin >> a >> b, a)
	{
		vector<vector<int>>data;
		data.resize(a + 2);
		for (size_t i = 0; i < a + 2; i++)
		{
			data[i].resize(b + 2);
		}
		for (size_t i = 1; i <= a; i++)
		{
			for (size_t j = 1; j <= b; j++)
			{
				char c;
				cin >> c;
				switch (c)
				{
					case '#':
						data[i][j] = 1;
						break;
					case '*':
						data[i][j] = 2;
						break;
					case '@':
						data[i][j] = 3;
						break;
					default:
						break;
				}
			}
		}
		int ans = 0;
		queue<pair<int, int>>d;
		for (size_t i = 1; i <= a; i++)
		{
			for (size_t j = 1; j <= b; j++)
			{
				if (data[i][j])
				{
					ans++;
					int memo = data[i][j];
					data[i][j] = 0;
					d.push(pair<int, int>(i, j));
					while (!d.empty())
					{
						pair<int, int>p = d.front();
						d.pop();
						for (size_t k = 0; k < 4; k++)
						{
							if (data[p.first + dx[k]][p.second + dy[k]] == memo)
							{
								data[p.first + dx[k]][p.second + dy[k]] = 0;
								d.push(pair<int, int>(p.first + dx[k], p.second + dy[k]));
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}