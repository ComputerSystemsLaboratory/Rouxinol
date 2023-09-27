#include <iostream>
#include <string>

using namespace std;

class stack{
  int topIndex;
  int data[1000];
public:
  stack(){
    topIndex = 0;
  }
  void push(int num){
    data[topIndex++] = num;
  }
  int pop(){
    return data[--topIndex];
  }
  int print(){
    std::cout << "debug stack = ";
    for(int i= 0; i < topIndex; i++){
      std::cout << data[i] << ' ';
    }
    std::cout << '\n';
  }
};

int main(){
  stack st;
  while(!cin.eof()){
    //st.print();
    string s;
    cin >> s;
    if (s == ""){
      break;
    }
    if (s == "*"){
      st.push(st.pop() * st.pop());
    }else if(s == "/"){
      int o1 = st.pop();
      int o2 = st.pop();
      st.push(o2 / o1);
    }else if(s == "+"){
      st.push(st.pop() + st.pop());
    }else if(s == "-"){
      int o1 = st.pop();
      int o2 = st.pop();
      st.push(o2 - o1);
    }else {
      //std::cout << "debug s = " << s << '\n';
      int num = stoi(s);
      st.push(num);
    }
  }
  cout << st.pop() << endl;
}