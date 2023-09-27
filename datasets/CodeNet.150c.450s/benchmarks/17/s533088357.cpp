#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){
  using namespace std;
  vector<int> res;
  for (int i=0; i<5; ++i){
    int data;
    cin >> data;
    res.push_back(data);
  }
  sort(res.begin(), res.end(), greater<int>());
  vector<int>::iterator it = res.begin();
  while (it != res.end()){
    cout << *it;
    ++it;
    if (it != res.end()){
      cout << " ";
    }
    else{
      cout << endl;
    }
  }
  return 0;
}