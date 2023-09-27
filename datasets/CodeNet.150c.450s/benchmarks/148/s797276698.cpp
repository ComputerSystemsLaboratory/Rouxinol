#include <algorithm>
#include <bits/stdc++.h>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>

// lib/util.hpp
#ifndef UTIL_HPP
#define UTIL_HPP


using i64 = ::std::int_fast64_t;
using u64 = ::std::uint_fast64_t;
using i32 = ::std::int_fast32_t;
using u32 = ::std::uint_fast32_t;

namespace tools {
  template <typename T>
  void read(::std::istream& is, ::std::vector<T>& vector, const typename ::std::vector<T>::size_type size) {
    vector.reserve(size);
    ::std::copy_n(::std::istream_iterator<T>(is), size, ::std::back_inserter(vector));
  }
  template <typename T>
  void read(::std::vector<T>& vector, const typename ::std::vector<T>::size_type size) {
    ::tools::read(::std::cin, vector, size);
  }

  template <typename T, ::std::size_t N>
  void read(::std::istream& is, ::std::array<T, N>& array) {
    ::std::copy_n(std::istream_iterator<T>(is), N, array.begin());
  }
  template <typename T, ::std::size_t N>
  void read(::std::array<T, N>& array) {
    ::tools::read(::std::cin, array);
  }
}

#endif

// main.cpp

int main() {
  i64 N;
  std::cin >> N;

  std::unordered_map<std::string, i64> tally = {{"AC", 0}, {"WA", 0}, {"TLE", 0}, {"RE", 0}};
  for (i64 i = 0; i < N; ++i) {
    std::string S_i;
    std::cin >> S_i;
    ++tally[S_i];
  }

  std::cout << "AC x " << tally["AC"] << std::endl;
  std::cout << "WA x " << tally["WA"] << std::endl;
  std::cout << "TLE x " << tally["TLE"] << std::endl;
  std::cout << "RE x " << tally["RE"] << std::endl;
  return 0;
}