#include <iostream>
using namespace std;

int mcxi2i(char mcxi){
  switch(mcxi){
  case 'm': return 1000;
  case 'c': return 100;
  case 'x': return 10;
  case 'i': return 1;
  }
  return 0;
}


int MCXI2i(string mcxi){
  int ans = 0;
  for(size_t i = 0; i < mcxi.size(); i++){
    if(0 <= mcxi[i] - '0'
       && mcxi[i] - '0' <= 9){
      ans += (mcxi[i] - '0') * mcxi2i(mcxi[i + 1]);
      ++i;
    }
    else{ ans += mcxi2i(mcxi[i]); }
  }
  return ans;
}

string i2MCXI(int n){
  string ans = "";
  string mcxi = "mcxi";
  int radix[4] = {1000, 100, 10, 1};
  
  for(int i = 0; i < 4; i++){
    int tmp = n / radix[i];
    if(tmp >= 2){ ans += to_string(tmp); }
    if(tmp >= 1){ ans += mcxi[i]; }
    n -= (n / radix[i]) * radix[i];
  }
  
  return ans;
}

int main(void){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    string a, b;
    cin >> a >> b;
    cout << i2MCXI(MCXI2i(a) + MCXI2i(b)) << endl;
  }
  return 0;
}