#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int> table;

#if 0
所用時間:

感想:

#endif

void solve(){
  // typedef set<int> size_t;
  string word, frequent, longest;
  int N = 0;
  while(cin >> word){
    table[word] += 1;
    if(table[word] > N){
      frequent = word; N = table[word];
    }
    if(word.size() > longest.size()){
       longest = word;
    }
  }
  cout << frequent << " " << longest << endl;
}

int main(){
  solve();
}

