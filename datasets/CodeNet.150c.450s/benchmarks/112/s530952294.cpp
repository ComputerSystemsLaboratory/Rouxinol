#include<iostream>
#include<string>
#include<cstring>

using namespace std; 

int main(void){
  int n,m,j;
  bool fg;
  char ch,str[2][100];
 
 
  while(cin >> n,n){
    j=0;
    for(int i=0;i<n;i++,j++)
      cin >> str[0][i] >> str[1][i];
    
    cin >> m;

    for(int k=0;k<m;k++){
      cin >> ch;
      fg=false;
      for(int i=0;i<j+1;i++){
	if(ch==str[0][i]){
	  cout << str[1][i];
	  fg=true;
	  break;
	}
      }
      if(!fg)cout << ch;
    }
    cout << endl;
  }
   
  return 0;
}