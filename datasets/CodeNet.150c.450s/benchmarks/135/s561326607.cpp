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
	int N, M, L;
	vector<int>A[2];
	map<int, int >B;
	int count = 0;
	while (1)
	{
		cin >> N >> M;
		if (N == 0 && M == 0)break;
		A[0].clear(); 
		A[1].clear(); 
		B.clear();
		count = 0;
		for (size_t i = 0; i < N; i++)
		{
			cin >> L;
			A[0].push_back(L);
			int sum = 0;
			for (auto i = A[0].rbegin(); i != A[0].rend(); i++)
			{
				sum += *i;
				B[sum]++;
			}
		}
		for (size_t i = 0; i < M; i++)
		{
			cin >> L;
			A[1].push_back(L);
			int sum = 0;
			for (auto i = A[1].rbegin(); i != A[1].rend(); i++)
			{
				sum += *i;
				count += B[sum];
			}
		}
		cout << count<<endl;
	}
	return 0;
}