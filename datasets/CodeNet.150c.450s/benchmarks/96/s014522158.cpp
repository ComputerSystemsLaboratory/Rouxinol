#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

int main(void){
  string a[10];

  a[0]="";
  a[1]=" .,!?";
  a[2]="cab";
  a[3]="fde";
  a[4]="igh";
  a[5]="ljk";
  a[6]="omn";
  a[7]="spqr";
  a[8]="vtu";
  a[9]="zwxy";

  int n;
  cin >> n;
  cin.ignore();
  while(n--){
    string str;
    getline(cin,str);

    int sz=str.size(),i=0,cnt=0;
    while(str[i]=='0')i++;
    for(;i<sz;i++){
      if(str[i]=='0'){
	cout << a[str[i-1]-'0'][cnt%a[str[i-1]-'0'].size()];
	cnt=0;
	while(str[i+1]=='0')i++;
      }
      else cnt++;
    }
    cout << endl;
  }
  return 0;
}