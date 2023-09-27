#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main()
{
  int n, count = 0;
  string input;
  map<char, string> map;

  map['1'] = ".,!? ";
  map['2'] = "abc";
  map['3'] = "def";
  map['4'] = "ghi";
  map['5'] = "jkl";
  map['6'] = "mno";
  map['7'] = "pqrs";
  map['8'] = "tuv";
  map['9'] = "wxyz";

  cin >> n;
  int j = 0, i;
  for(i = 0 ; i < n ; i++){
    cin >> input;
    for(j = 0 ; input[j] == '0' && j < (int)input.length() ; j++);

    for( ; j <  (int)input.length() ; j++){
      if(input[j] == '0'){
	if(input[j-1] == '0')continue;
	string hoge = map[input[j-1]];
	cout << hoge[(count-1)%(hoge.length())];
	count = 0;
      }else{
	count++;
      }
    }
    cout << '\n';
      } 
  
}