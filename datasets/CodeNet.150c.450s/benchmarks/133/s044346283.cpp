#pragma region Headers
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

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
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
#pragma endregion

using namespace std;
#pragma region Macros
#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0, a1, a2, a3, a4, x, ...) x
#define debug_1(x1) cout << #x1 << ": " << x1 << endl
#define debug_2(x1, x2) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << endl
#define debug_3(x1, x2, x3) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << endl
#define debug_4(x1, x2, x3, x4) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << ", " #x4 << ": " << x4 << endl
#define debug_5(x1, x2, x3, x4, x5) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << endl
#ifdef _DEBUG
#define debug(...)                                                      \
  CHOOSE((__VA_ARGS__, debug_5, debug_4, debug_3, debug_2, debug_1, ~)) \
  (__VA_ARGS__)
#else
#define debug(...)
#endif
#pragma region end

#pragma region Libraries
template <typename T>
string to_string(T o)
{
  stringstream s;
  s << o;
  return s.str();
}

template <typename T>
string to_string(vector<T> v)
{
  stringstream s;
  s << "[";
  for (auto i = 0; i < v.size(); i++)
  {
    s << to_string(v.at(i));
    if (i != v.size() - 1)
    {
      s << ", ";
    }
  }
  s << "]";
  return s.str();
}

template <typename T>
ostream &operator<<(ostream &o, const vector<T> &obj)
{
  o << to_string(obj);
  return o;
}

template <typename T>
string to_string(vector<vector<T>> m)
{
  stringstream s;
  s << "[" << endl;
  for (auto i = 0; i < m.size(); i++)
  {
    auto v = m[i];
    s << "  "
      << "#" << i << ":"
      << " " << to_string(v);
    s << ", " << endl;
  }
  s << "]";
  return s.str();
}

template <typename T>
ostream &operator<<(ostream &o, const vector<vector<T>> &obj)
{
  o << to_string(obj);
  return o;
}

template <typename K, typename V>
string to_string(pair<K, V> p)
{
  stringstream s;
  s << "pair(" << to_string(p.first) << ", " << to_string(p.second) << ")";
  return s.str();
}

template <typename K, typename V>
ostream &operator<<(ostream &o, const pair<K, V> &obj)
{
  o << to_string(obj);
  return o;
}

template <typename K, typename V>
string to_string(map<K, V> m)
{
  stringstream s;
  s << "{" << endl;
  for (const auto &p : m)
  {
    s << "  " << to_string(p.first) << ": " << to_string(p.second) << "," << endl;
  }
  s << "}";
  return s.str();
}

template <typename K, typename V>
ostream &operator<<(ostream &o, const map<K, V> &obj)
{
  o << to_string(obj);
  return o;
}

template <typename T>
string to_string(set<T> ss)
{
  stringstream s;
  s << "set"
    << "{";
  for (auto itr = ss.begin(); itr != ss.end(); itr++)
  {
    s << to_string(*itr);
    if (next(itr, 1) != ss.end())
    {
      s << ", ";
    }
  }
  s << "}";
  return s.str();
}

template <typename T>
ostream &operator<<(ostream &o, const set<T> &obj)
{
  o << to_string(obj);
  return o;
}

template <typename T>
string to_string(queue<T> q)
{
  auto temp = queue<T>{};
  stringstream s;
  s << "queue{";
  while (!q.empty())
  {
    auto top = q.front();
    s << to_string(top) << ", ";
    q.pop();
    temp.push(top);
  }
  s << "}";

  while (!temp.empty())
  {
    auto top = temp.front();
    temp.pop();
    q.push(top);
  }

  return s.str();
}

template <typename T>
ostream &operator<<(ostream &o, const queue<T> &obj)
{
  o << to_string(obj);
  return o;
}
#pragma endregion

typedef long long ll;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  std::cout << std::setprecision(20);

  ll d;
  cin >> d;
  vector<ll> cs;

  for (auto i = 0; i < 26; i++)
  {
    ll c;
    cin >> c;
    cs.push_back(c);
  }

  vector<ll> last_d(26, 0);
  vector<vector<ll>> point_vec;

  for (auto i = 1; i <= d; i++)
  {
    vector<ll> points;
    for (auto j = 0; j < 26; j++)
    {
      ll p;
      cin >> p;
      points.push_back(p);
    }
    point_vec.push_back(points);
  }

  ll total_score = 0;
  for (auto i = 1; i <= d; i++)
  {
    // 得点だけ見ると0点になるので、ここを書き換え
    ll select;
    cin >> select;
    last_d[select - 1] = i;

    auto points = point_vec[i - 1];
    ll score = 0;
    for (auto j = 0; j < 26; j++)
    {
      if (j == select - 1)
      {
        score += points[j];
      }
      else
      {
        score -= cs[j] * (i - last_d[j]);
      }
    }
    total_score += score;
    cout << total_score << endl;
  }

  return 0;
}
