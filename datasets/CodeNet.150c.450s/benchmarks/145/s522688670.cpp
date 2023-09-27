#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
  map<string,int> table;
  string word;
  int k1 = 0;
  int k2 = 0;
  string answer1;
  string answer2;
  while(cin >> word){
    table[word]+=1;
    if(table[word] > k1){
      k1 = table[word];
      answer1 = word;
    }
    int len = word.length();
    if (len > k2){
      k2 = len;
      answer2 = word;
    }
  }
  cout << answer1 << " " << answer2 << endl;
}