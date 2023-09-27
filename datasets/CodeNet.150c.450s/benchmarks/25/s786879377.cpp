#include <iostream>
#include <vector>
#include <string>
const int size = 26;
using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  vector<int> v(size,0);
  while(cin >> line){
    for (auto c : line){
      if(isalpha(c)) v[tolower(c)-'a']++;
    }
  }
  char a='a';
  for(auto n:v){
    cout<<a++<<" : "<<n<<endl;
  }
  return 0;
}