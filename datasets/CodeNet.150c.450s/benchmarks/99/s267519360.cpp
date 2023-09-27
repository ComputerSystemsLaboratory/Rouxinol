#include <iostream>
#include <cctype>
#include <map>
using namespace std;

int n;
map<char, int> ctoi;
map<int, char> itoc;

void init(){
  ctoi['m'] = 1000;
  ctoi['c'] = 100;
  ctoi['x'] = 10;
  ctoi['i'] = 1;
  itoc[1000] = 'm';
  itoc[100] = 'c';
  itoc[10] = 'x';
  itoc[1] = 'i';
}

int mcxitoarab(string mcxi){
  string::iterator it;
  int num = 0, tmp;
  for(it = mcxi.begin(); it != mcxi.end(); it++){
    if(isalpha(*it)){
      tmp = ctoi[*it];
      if(isdigit(*(it - 1))){
        tmp *= *(it - 1) - '0';
      }
      num += tmp;
    }
  }
  return num;
}

string arabtomcxi(int num){
  string str;
  int N = 1000, tmp;
  while(num != 0){
    if((num / N) == 0){
      N /= 10;
      continue;
    }
    if((num / N) != 1) str += (num / N) + '0';
    str += itoc[N];
    num %= N;
    N /= 10;
  }
  return str;
}

int main(void){
  string opr1, opr2;
  cin >> n;
  init();
  for(int i = 0; i < n; i++){
    cin >> opr1 >> opr2;
    int op1 = mcxitoarab(opr1), op2 = mcxitoarab(opr2);
    int sum = op1 + op2;
    //cout << op1 << " + " << op2 << " = " << sum << endl;
    cout << arabtomcxi(sum) << endl;
  }
  return 0;
}