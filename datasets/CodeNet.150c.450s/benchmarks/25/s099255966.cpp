#include<iostream>
using namespace std;
int main()
{
  char x,c;
  int i=0;
  int count[26]={};
  while(cin >> c){
    if(c>='a' && c<='z') count[c-'a']++;
    else if(c>='A' && c<='Z') count[c-'A']++;
  }
  for(x='a';x<='z';x++,i++)
    cout << x << " : " << count[i] << endl;
  return 0;

}