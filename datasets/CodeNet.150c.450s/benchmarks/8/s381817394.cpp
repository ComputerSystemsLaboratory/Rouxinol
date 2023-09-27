#include<iostream>
#include<cctype>
using namespace std;

#include<cstdio>
#include<cstring>
#include<string>

int main(){
  int n, taro=0, hanako=0;
  string ct, ch;

  cin >> n;

  for (int i=0; i<n; i++){
    cin >> ct >> ch;
    if (ct > ch) taro+=3;
    else if (ct < ch) hanako+=3;
    else {
      taro++; hanako++;
    }
  }

  cout << taro << ' ' << hanako << "\n";

  return 0;
}