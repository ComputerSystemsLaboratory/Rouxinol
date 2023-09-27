#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct WordCount{
  string word;
  int count;
};

void PushWordCount(const vector<string>, vector<WordCount>&);
vector<string> split(string);
bool space(char);
bool not_space(char);

int main(){
  int max=0, longest=0;
  string s, Max, Longest;
  vector<string> str;
  vector<WordCount> data;

  getline(cin, s);
  str = split(s);
  PushWordCount(str, data);

  for(vector<WordCount>::size_type i=0; i != data.size(); ++i){
    if(data[i].count > max){
      max = data[i].count;
      Max = data[i].word;
    }
    if(data[i].word.size() > longest){
      longest = data[i].word.size();
      Longest = data[i].word;
    }
  }

  cout << Max << " " << Longest << endl;
  return 0;
}

void PushWordCount(const vector<string> s, vector<WordCount>& words){
  int isFound;
  WordCount NewWord;
  vector<WordCount>::iterator iter;

  for(string::size_type i=0; i != s.size(); ++i){
    isFound = 0;
    iter = words.begin();
    while(iter != words.end()){
      if(iter->word == s[i]){
        ++iter->count;
        break;
      }
      ++iter;
    }
    if(isFound == 0){
      NewWord.word = s[i];
      NewWord.count = 1;
      words.push_back(NewWord);
    }
  }
}

vector<string> split(string str){
  string _str;
  vector<string> Str;
  string::iterator i, j;

  j = str.begin();
  while(i < str.end() || j < str.end()){
    i = find_if(j, str.end(), not_space);
    j = find_if(i, str.end(), space);
    copy(i, j, back_inserter(_str));
    Str.push_back(_str);
    _str.clear();
  }
  return Str;
}

bool space(char c){
  return (isspace(c));
}

bool not_space(char c){
  return (!isspace(c));
}