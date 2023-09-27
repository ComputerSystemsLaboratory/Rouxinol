#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string revrs(string str, int a, int b)
{
  int m,k,j;
  string trs;

  m=str.size();
  trs = str;
  for(k = 0; k < m; k++) {
    if(k < a || b < k)
      j = k;
    else
      j = a + b -k;
    trs[j]=str[k];
  }
  return trs;
}


string trans(string str, string c, int a, int b, string p)
{
  string trs;

  trs = str;
  if(c == "reverse"){
    trs=revrs(str,a,b);
  }
  else if(c == "replace") {
    trs = str.erase(a,b-a+1);
    trs = trs.insert(a,p);
  }
  return trs;
}

int main(void)
{
  int n,k,m,j,a,b;
  string str,c,p,ans[1001];

  cin >> str;
  cin >> n;

  m=0;
  for(k = 1; k <= n; k++){
    cin >> c;
    if(c=="replace")
      cin  >> a >> b >> p;
    else
      cin >> a >> b;
    if(c!="print")
      str = trans(str,c,a,b,p);
    else if(c=="print") {
      m = m + 1;
      ans[m]=str.substr(a,b-a+1);
    }
  }

  for(j = 1; j<= m; j++){
    cout << ans[j] << endl;
  }
   
  return 0;
}