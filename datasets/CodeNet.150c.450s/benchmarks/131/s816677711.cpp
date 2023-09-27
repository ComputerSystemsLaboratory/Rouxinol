#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

vector<string> number;
int L;

bool comp_asc(const char& ch1, const char& ch2){
  return (ch1 < ch2);
}

bool comp_des(const char& ch1, const char& ch2){
  return (ch1 > ch2);
}

int findj(string num){
  vector<string>::iterator it;
  int k = 0;
  for(it = number.begin(); it != number.end(); it++){
    if(*it == num) return k;
    k++;
  }
  return 0;
}

void padding(string& num){
  while(num.size() < L){
    num.insert(num.begin(), '0');
  }
}

int main(void){
  string num;
  int i = 0;
  while(cin >> num >> L, L){
    padding(num);
    number.push_back(num);
    while(true){
      sort(num.begin(), num.end(), comp_des);
      int nb = int(atof(num.c_str()));
      sort(num.begin(), num.end(), comp_asc);
      int ns = int(atof(num.c_str()));
      num = to_string(nb - ns);
      
      padding(num);
      i++;

      if(find(number.begin(), number.end(), num) != number.end()){
        int j = findj(num);
        cout << j << " " << int(atof(num.c_str())) << " " << i - j << endl;
        break;
      }
      
      number.push_back(num);
    }
    number.clear();
    i = 0;
  }
  return 0;
}