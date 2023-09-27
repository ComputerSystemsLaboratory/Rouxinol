#include <bits/stdc++.h>
#include <cstdint>
#include <sys/time.h>

typedef std::int_fast32_t  s32;
typedef std::uint_fast32_t u32;
typedef std::int_fast64_t  s64;
typedef std::uint_fast64_t u64;

const unsigned long mod = 1000000007;
const double EPS = 0.00000001;
const int INF = (1 << 29);

typedef std::pair<int, int> P;

template<typename T>
void print_array(T *A_, s32 size) {
  //printf("%d\n", size);
  if( size != 0 ) {
    for(int i = 0; i < size - 1; ++i) {
      printf("%d ", A_[i]);
    }
    printf("%d\n", A_[size - 1]);
  }
}

std::pair<std::string, std::string> split(std::string str, int i) {
  std::string res1, res2;
  for(int k = 0; k < i; ++k) {
    res1 += str[k];
  }
  for(int k = i; k < (int)str.size(); ++k) {
    res2 += str[k];
  }
  return std::pair<std::string, std::string>(res1, res2);
}

int main() {

  int n;
  std::cin >> n;
  
  for(int i = 0; i < n; ++i) {
    std::string str;
    std::cin >> str;
    int s = str.size();

    int res = 0;

    std::vector<std::string> vstr;
    for(int j = 1; j < s; ++j) {

      auto strs1 = split(str, j);

      std::string str1, str2, str1r, str2r;
      str1r = str1 = strs1.first;
      str2r = str2 = strs1.second;
      std::reverse(str1r.begin(), str1r.end());
      std::reverse(str2r.begin(), str2r.end());

      vstr.push_back( str1  + str2  );
      vstr.push_back( str1r + str2  );
      vstr.push_back( str1  + str2r );
      vstr.push_back( str1r + str2r );
      vstr.push_back( str2  + str1  );
      vstr.push_back( str2r + str1  );
      vstr.push_back( str2  + str1r );
      vstr.push_back( str2r + str1r );
    }
    
    std::sort(vstr.begin(), vstr.end());
    vstr.erase(std::unique(vstr.begin(), vstr.end()), vstr.end());
    res = vstr.size();
    
    std::cout << res << std::endl;
  }
  
  return 0;
}