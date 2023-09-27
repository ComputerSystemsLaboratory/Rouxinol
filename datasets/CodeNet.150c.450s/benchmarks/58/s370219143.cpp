#include <algorithm>
#include <stack>
#include <iostream>
#include <stdexcept>

struct symbol
{
  bool _is_str = true;
  int _n;
  std::string _str;

  symbol(const std::string& str) {
    try{
      _n = std::stoi(str);
      _is_str = false;
    } catch(const std::invalid_argument& e)
    {
      _str = str;
    } catch(const std::exception& e)
    {
      std::cout << "error" << std::endl;
    }
  }

  bool is_str() const{
    return _is_str;
  }
};

int eval(std::stack<symbol>& eq) {
  auto s = eq.top();
  eq.pop();

  if (s.is_str()){
    auto r = eval(eq);
    auto l = eval(eq);

    if (s._str == "+"){
      return l + r;
    } else if (s._str == "-"){
      return l - r;
    } else if (s._str == "*"){
      return l * r;
    } else{
      std::cout << "invalid operand" << std::endl;
      return 0;
    }
  }

  return s._n;
}

int main()
{
  std::stack<symbol> st;
  std::string temp;
  while(std::cin >> temp){
    st.push(symbol(temp));
  }

  int ret = eval(st);
  std::cout << ret << std::endl;
}