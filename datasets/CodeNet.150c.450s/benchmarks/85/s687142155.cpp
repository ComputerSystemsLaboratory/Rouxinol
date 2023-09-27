#include <vector>
#include <iostream>
#include <string>
#include <climits>

class M{
  int left, right;
  int cnt;
public:
  M(int l = 0, int r = 0, int c = 0):left(l),right(r),cnt(c){}
  const bool is_init(){return left != 0;}
  int get_l(){return left;}
  int get_r(){return right;}
  int get_c(){return cnt;}
  void show(){std::cout << "[ " << left << "," << cnt << "," << right << " ]";}
  M operator+(M &other){
	  M res(left, other.get_r(), cnt + other.get_c() + left * right * other.get_r());
    return res;
  }
  bool operator>(M &other){
	  return cnt > other.get_c();
  }
};
void show_line(int line){
  std::cout << "start dp line " << line << std::endl;
}
void show_all(std::vector<M> &vec){
  for (auto i = vec.begin(); i != vec.end(); ++i){
    i->show();
    std::cout << "-";
  }
  std::cout << std::endl;
}
M Max(0, 0, INT_MAX);
int dp(std::vector<std::vector<M>> memo){
  if (memo.back().size() != 1){
  	std::vector<M> vec;
  	const int n = memo[0].size() - memo.size();
  	for (auto i = 0; i < n; ++i){
      M min = Max;
  		for (auto j = 0; j < memo.size(); ++j){
  			M temp = memo.at(j).at(i) + memo.at(memo.size() - j - 1).at(i + j + 1);
  			if (min > temp){
  				min = temp;
  			}
  		}
  		vec.push_back(min);
  	}
  	memo.push_back(vec);
  	return dp(memo);
	}else{
    return memo.back().back().get_c();
  }
}
int main(){
  int n;
  std::vector<M> v;
  std::cin >> n;
  for (auto i = 0; i < n; ++i){
	  int a, b;
	  std::cin >> a >> b;
	  v.push_back(M(a, b));
  }
  std::vector<std::vector<M>> memo;
  memo.push_back(v);
  std::cout << dp(memo) << std::endl;
  return 0;

}