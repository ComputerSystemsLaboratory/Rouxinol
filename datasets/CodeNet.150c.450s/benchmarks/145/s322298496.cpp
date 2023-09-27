#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, int> Map;
  string str;
  string max, freq;

  while (cin >> str){
    Map[str]++;
    if (Map[max] < Map[str]){
      max = str;
    }
    if (freq.size() < str.size()){
      freq = str;
    }
  }

  cout << max << " " << freq << '\n';

  return (0);
}