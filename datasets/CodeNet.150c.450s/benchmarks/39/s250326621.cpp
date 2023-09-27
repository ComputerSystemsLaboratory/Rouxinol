#include<iostream>
using namespace std;
  
int main() {
  int a, b;
  int area, length;
  cin >> a >> b;

  area = a * b;
  length =2*(a + b);

  cout << area << " " << length << endl;
}