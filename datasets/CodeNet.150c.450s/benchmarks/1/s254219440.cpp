
    

#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int num;
  cin >> num;
  vector<int> numbers;
  for (int i = 0; i < num; i++) {
    int temp;
    cin >> temp;
    numbers.push_back(temp);
  } 

  vector<int> b;
  for (int i = 0; i < numbers.size(); i++) {
    int index = lower_bound(b.begin(), b.end(), numbers[i]) - b.begin();
    if (index == b.size()) 
      b.push_back(numbers[i]);
    else 
      b[index] = numbers[i];
  }
  cout << b.size() << endl;
}