#include <iostream>
using namespace std;
int main() {

  int S;
  cin>>S;

  if (S>=0 && 86400>S) {
    cout<<S/3600<<":"<<(S%3600)/60<<":"<<S%60<<"\n";
  }

  return 0;
}