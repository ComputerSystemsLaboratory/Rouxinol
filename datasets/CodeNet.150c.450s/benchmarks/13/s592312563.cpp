#include<iostream>
#include<string>
using namespace std;

int main(){
  int judge;
  string p,s;
  cin >> p >> s;
  p += p;

  judge = p.find(s);
  if(judge == -1) cout << "No" << endl;
  else            cout << "Yes" << endl;

  return 0;
}