#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
  int i,j,a[10],n;
  string str;
  char ans;
  cin >> n;
  for(int t=0;t<n;t++){  
    cin >> str;
    for(i=0;i<10;i++) a[i] = 0;
    for(i=0;i<str.size();i++){
      if(i != 0 && str[i] == '0'){
	if(str[i-1] == '1' && (a[1]) % 5 == 1) ans = '.';
	else if(str[i-1] == '1' && (a[1]) % 5 == 2) ans = ',';
	else if(str[i-1] == '1' && (a[1]) % 5 == 3) ans = '!';
	else if(str[i-1] == '1' && (a[1]) % 5 == 4) ans = '?';
	else if(str[i-1] == '1' && (a[1]) % 5 == 0) ans = ' ';
	else if(str[i-1] == '2' && (a[2]) % 3 == 1) ans = 'a';
	else if(str[i-1] == '2' && (a[2]) % 3 == 2) ans = 'b';
	else if(str[i-1] == '2' && (a[2]) % 3 == 0) ans = 'c';
	else if(str[i-1] == '3' && (a[3]) % 3 == 1) ans = 'd';
	else if(str[i-1] == '3' && (a[3]) % 3 == 2) ans = 'e';
	else if(str[i-1] == '3' && (a[3]) % 3 == 0) ans = 'f';
	else if(str[i-1] == '4' && (a[4]) % 3 == 1) ans = 'g';
	else if(str[i-1] == '4' && (a[4]) % 3 == 2) ans = 'h';
	else if(str[i-1] == '4' && (a[4]) % 3 == 0) ans = 'i';
	else if(str[i-1] == '5' && (a[5]) % 3 == 1) ans = 'j';
	else if(str[i-1] == '5' && (a[5]) % 3 == 2) ans = 'k';
	else if(str[i-1] == '5' && (a[5]) % 3 == 0) ans = 'l';
	else if(str[i-1] == '6' && (a[6]) % 3 == 1) ans = 'm';
	else if(str[i-1] == '6' && (a[6]) % 3 == 2) ans = 'n';
	else if(str[i-1] == '6' && (a[6]) % 3 == 0) ans = 'o';
	else if(str[i-1] == '7' && (a[7]) % 4 == 1) ans = 'p';
	else if(str[i-1] == '7' && (a[7]) % 4 == 2) ans = 'q';
	else if(str[i-1] == '7' && (a[7]) % 4 == 3) ans = 'r';
	else if(str[i-1] == '7' && (a[7]) % 4 == 0) ans = 's';
	else if(str[i-1] == '8' && (a[8]) % 3 == 1) ans = 't';
	else if(str[i-1] == '8' && (a[8]) % 3 == 2) ans = 'u';
	else if(str[i-1] == '8' && (a[8]) % 3 == 0) ans = 'v';
	else if(str[i-1] == '9' && (a[9]) % 4 == 1) ans = 'w';
	else if(str[i-1] == '9' && (a[9]) % 4 == 2) ans = 'x';
	else if(str[i-1] == '9' && (a[9]) % 4 == 3) ans = 'y';
	else if(str[i-1] == '9' && (a[9]) % 4 == 0) ans = 'z';
	if(str[i-1] != '0') cout << ans;
	for(j=0;j<10;j++) a[j] = 0;
      }
      else a[str[i]-'0']++;      
    }
    cout << endl;
  }
  return 0;
}