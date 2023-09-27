#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int n;
string s, t;
string c = "mcxi";
int v[] = {1000, 100, 10, 1};

string enc(int x)
{
  char buf[50];
  sprintf(buf, "%dm%dc%dx%di", x/1000, x/100%10, x/10%10, x%10);
  string tmp = buf, ret;
  for(int i = 0; i < tmp.size(); i++){
    if(tmp[i] == '0') i++;
    else if(tmp[i] == '1');
    else ret += tmp[i];
  }
  return ret;
}

int dec(string s)
{
  int ret = 0;
  for(int i = 0 ;i < s.size(); i++){
    for(int j = 0; j < 4; j++){
      if(c[j] == s[i]){
        int m = 1;
        if(i != 0 && s[i-1] >= '2' && s[i-1] <= '9') m = s[i-1]-'0';
        ret += v[j] * m;
      }
    }
  }
  return ret;
}

int main(void)
{
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s >> t;
    //cout << dec(s) << " " << dec(t) << endl;
    cout << enc(dec(s)+dec(t)) << endl;
  }
  return 0;
}

