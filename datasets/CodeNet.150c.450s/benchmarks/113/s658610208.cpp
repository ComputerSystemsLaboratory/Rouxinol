#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<int> v;
  int hoge;

  cin >> hoge;
  while(hoge != 0){
    v.push_back(hoge);
    cin >> hoge;
  }

  for(int i = 0 ; i < v.size() ; i++){
    cout << "Case " << i+1 << ": " << v.at(i) << endl;
  }


  return 0;
}