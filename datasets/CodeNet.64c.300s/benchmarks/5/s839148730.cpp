#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int height[10];
  for(int i = 0; i < 10; i++)
    cin >> height[i];
  sort(height, height + 10);
  cout << height[9] << endl;
  cout << height[8] << endl;
  cout << height[7] << endl;
}