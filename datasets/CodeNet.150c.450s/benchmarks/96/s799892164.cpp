#include<string>
#include<iostream>
using namespace std;

int main(){
  int prev=10,n,c=0;
  string str;
  char s,buf='\0';
  char keymap[9][5]={ {'.',',','!','?',' '},
		      {'a','b','c','\0','\0'},
		      {'d','e','f','\0','\0'},
		      {'g','h','i','\0','\0'},
		      {'j','k','l','\0','\0'},
		      {'m','n','o','\0','\0'},
		      {'p','q','r','s','\0'},
		      {'t','u','v','\0','\0'},
		      {'w','x','y','z','\0'}};
  cin>>n;

  while(n--){
    cin>>str;
    for(int i=0;i<str.length();i++){
      s=str.at(i);
      if(c!=0&&s=='0')cout<<buf,c=0,buf=0;
      switch (s){
      case '1':
	buf=keymap[0][(c++)%5];
	break;
      case '2':
	buf=keymap[1][(c++)%3];
	break;
      case '3':
	buf=keymap[2][(c++)%3];
	break;
      case '4':
	buf=keymap[3][(c++)%3];
	break;
      case '5':
	buf=keymap[4][(c++)%3];
	break;
      case '6':
	buf=keymap[5][(c++)%3];
	break;
      case '7':
	buf=keymap[6][(c++)%4];
	break;
      case '8':
	buf=keymap[7][(c++)%3];
	break;
      case '9':
	buf=keymap[8][(c++)%4];
	break;
      }
    }
    buf=0;
    cout<<endl;
  }
}