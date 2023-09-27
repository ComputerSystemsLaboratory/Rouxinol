#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<vector>
int main(){
  std::stack<int> S1;
  std::stack<std::pair<int, int> > S2;
  char c;
  int sum=0;
  for(int i=0; std::cin>>c; i++){
    if(c == '\\') S1.push(i);
    else if(c == '/' && S1.size() > 0){
      int tmp1 = S1.top(); S1.pop();
      sum += i - tmp1;
      int tmp2 = i - tmp1;
      while(S2.size() > 0 && S2.top().first > tmp1) tmp2 += S2.top().second, S2.pop();
      S2.push(std::make_pair(tmp1,tmp2));
    }
  }
  std::vector<int> out;
  std::cout << sum << std::endl;
  sum = 0;
  while(S2.size() > 0) out.push_back(S2.top().second), S2.pop();
  std::reverse(out.begin(),out.end());
  std::cout << out.size();
  for(int i=0; i<out.size(); i++){
    sum += out[i];
    std::cout << " " << out[i];
  }
  std::cout << std::endl;
  return 0;
}