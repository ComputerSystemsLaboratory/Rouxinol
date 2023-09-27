#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, b[2]={0};
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
      if(s[i]=='0'){
	if(b[0] != 0){
	  int a = b[0]-'0';
	  if(a==1){
	    b[1]%=5;
	    if(b[1]==0)
	      cout << " ";
	    else if(b[1]==1)
	      cout << ".";
	    else if(b[1]==2)
	      cout << ",";
	    else if(b[1]==3)
	      cout << "!";
	    else if(b[1]==4)
	      cout << "?";
	  }
	  else if(a==2 || a==3 || a==4 || a==5 || a==6 || a==8){
	    b[1]%=3;
	    if(b[1]==0)
	      b[1] = 3;
	    if(a==8)
	      b[1]++;
	    char c = b[1]+'a'-1+3*(b[0]-'0'-2);
	    cout << c;
	  }
	  else if(a==7 || a==9){
	    b[1]%=4;
	    if(b[1]==0)
	      b[1] = 4;
	    if(a==9)
	      b[1]++;
	    char c = b[1]+'a'-1+3*(b[0]-'0'-2);
	    cout << c;
	  }
	}
	b[0]=0;
	b[1]=0;
      }
      else{
	b[0] = s[i];
	b[1]++;
      }
    }
    cout << endl;
  }
  return 0;
}