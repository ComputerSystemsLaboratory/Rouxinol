#include <iostream>
#include <vector>
#include <algorithm>

using vector = std::vector<long long int>;
using iterator = vector::iterator;

auto print_vector = [](iterator begin, iterator end){
                      while (begin != end)
                        {
                          if (begin+1 < end) std::cout << *begin << " ";
                          else std::cout << *begin << std::endl;
                          ++begin;
                        }
                    };

long long int merge(iterator begin, iterator mid, iterator end)
{
  auto itr = begin;

  vector left, right;

  for (auto tmp=begin; tmp<mid; ++tmp) left.push_back(*tmp);
  for (auto tmp=mid; tmp<end; ++tmp) right.push_back(*tmp);
  left.push_back(10000000001);
  right.push_back(10000000001);

  auto itr_left = left.begin();
  auto itr_right = right.begin();

  // std::cout << "Merging...\n";
  // print_vector(left.begin(), left.end());
  // print_vector(right.begin(), right.end());


  long long int ninv = 0;
  long long int nR = 0;
  while (itr != end)
    {
      if (*itr_left <= *itr_right)
        {
          *itr = *itr_left;
          ++itr_left;

          ninv += nR;
        }
      else
        {
          *itr = *itr_right;
          ++itr_right;

          ++nR;
        }
      ++itr;
      // std::cout << "ninv = " << ninv << std::endl;
    }
  // std::cout << "...finish\n";
  // print_vector(begin, end);

  return ninv;
}

long long int mergeSort(iterator begin, iterator end)
{
  if ((begin+1) == end)
    {
      return 0;
    }

  auto n = std::distance(begin, end);
  auto mid = begin + n/2;

  long long int ninv;
  ninv = mergeSort(begin, mid);
  ninv += mergeSort(mid, end);
  ninv += merge(begin, mid, end);

  return ninv;
}


int main ()
{
  int n;
  std::cin >> n;
  vector seq;

  for (int i=0; i<n; i++)
    {
      int tmp;
      std::cin >> tmp;
      seq.push_back(tmp);
    }

  auto ncomp = mergeSort(seq.begin(), seq.end());

  // print_vector(seq.begin(), seq.end());
  std::cout << ncomp << std::endl;
}

