#include<iostream>
#include<cstring>
using namespace std;

int main(){

  char s[101];
  char p[101];
  int s_len;
  int p_len;
  int work;
  int j;
  bool flg=false;

  cin >> s;     s_len=strlen(s);
  cin >> p;     p_len=strlen(p);

  for(int i=0; i<s_len; i++){
    work = i;
    for(j=0; j<p_len; j++){
      if(work+j>=s_len)
	work = -j;
      if(p[j]!=s[work+j])break;
    }
    if(j == p_len){
      flg = true;
      break;
    }

  }

  if(flg == true)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;


  return 0;
}