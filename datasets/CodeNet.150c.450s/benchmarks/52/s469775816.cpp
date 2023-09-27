#include<iostream>
#include<stack>
using namespace std;

stack <int> st;

void enter(int car) {
  st.push(car);
}

void exit() {
  cout << st.top() << endl;
  st.pop();
}

int main() {
  int car;
  while (cin >> car) {
    if (car == 0) {
      exit();
    } else {
      enter(car);
    }
  }
}