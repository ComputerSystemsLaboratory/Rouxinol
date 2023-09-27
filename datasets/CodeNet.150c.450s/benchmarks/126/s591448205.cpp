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

int main ()
{
	vector<vector<int>>data;
	int A , B , N;
	while( cin >> A >> B ,A||B)
	{
		cin >> N;
		data.resize ( A + 1 );
		for( size_t i = 0; i < A + 1; i++ )
		{
			data[i].resize ( B + 1 );
		}
		for( size_t i = 0; i < N; i++ )
		{
			int a , b;
			cin >> a >> b;
			data[a][b] = -1;
		}
		data[0][1] = 1;
		for( size_t i = 1; i < A + 1; i++ )
		{
			for( size_t j = 1; j < B + 1; j++ )
			{
				if( data[i][j] != -1 )
				data[i][j] = max ( data[i][j - 1] , 0 ) + max ( data[i - 1][j] , 0 );
			}
		}
		cout << data[A][B] << endl;
		data.clear ();
	}
	return 0;
}