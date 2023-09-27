#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
  stack<pair<int,char> > S;
  int section_num=0;
  int pool_sum=0;

  string input;
  std::cin >> input;;

  vector<pair<int, int> > pools;
  pools.reserve(20000);

  for (size_t i = 0; i < input.length(); i++) {
    if(input[i]=='_'){
      continue;
    }else if(input[i]=='\\'){
      pair<int,char> p = make_pair(i, input[i]);
      S.push(p);
    }else if(input[i]=='/'){
      if(S.empty()){ continue; }
      pair<int,char> l = S.top(); S.pop();
      int left = l.first;
      pair<int, int> section = make_pair(left, i);
      pools.push_back(section);
      section_num++;
      pool_sum += i - left;
    }
  }

  std::cout << pool_sum << '\n';

  sort(pools.begin(), pools.end());

  std::vector<int> pool_section; pool_section.push_back(0);

  int pool_num=0;
  pair<int,int> L = make_pair(pools[0].first, pools[0].second);

  for (size_t j = 0; j < section_num; j++) {
    if(L.first <= pools[j].first && pools[j].second <= L.second){
      pool_section[pool_num] += pools[j].second - pools[j].first;
    }else{
      pool_section.push_back(pools[j].second - pools[j].first);
      L = pools[j];
      pool_num++;
    }

  }



    if (pool_sum!=0) {
      std::cout << pool_num+1;
      for (size_t i = 0; i <= pool_num; i++) {
        std::cout << ' ' << pool_section[i];
        }
    }else{
      std::cout << "0";
    }


    std::cout  << '\n';



  return 0;

}

