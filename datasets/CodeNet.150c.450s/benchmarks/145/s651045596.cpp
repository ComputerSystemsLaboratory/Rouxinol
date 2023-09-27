#include<iostream>
#include<map>
#include<cstring>
#include<stack>

using namespace std;

int main(){
  int max_c = 0;
  map<string, int> cnt;
  stack<string> words;
  string word, freq, max_l;
  
  while(cin >> word) {
    if(word.length() > max_l.length()) max_l = word;
    if(cnt[word] == 0) words.push(word);
    cnt[word]++;
  }
  
  while(!words.empty()){
    word = words.top();
    words.pop();
    if(max_c < cnt[word]) {
      max_c = cnt[word];
      freq = word;
    }
  }

  cout << freq << ' ' << max_l << endl;

  return 0;
}