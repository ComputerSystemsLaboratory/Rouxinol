#include<iostream>
#include<cstring>
using namespace std;

int data[10][6]={
  {5,'.',',','!','?',' '},
  {3,'a','b','c',0,0},
  {3,'d','e','f',0,0},
  {3,'g','h','i',0,0},
  {3,'j','k','l',0,0},
  {3,'m','n','o',0,0},
  {4,'p','q','r','s',0},
  {3,'t','u','v',0,0},
  {4,'w','x','y','z',0}
};

int main(){
  int n;
  cin>>n;
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<s.length();j++){
      if(s[j]=='0')continue;
    int tmp=j;
    while(s[j]!='0')j++;

    int button=s[j-1]-'0'-1;
    int cnt=(j-tmp-1)%data[button][0] + 1;

    cout << (char)data[button][cnt];
    }
    cout << endl;
  }
  return 0;
}