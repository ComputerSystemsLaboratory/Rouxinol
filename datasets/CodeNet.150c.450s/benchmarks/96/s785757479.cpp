#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  char c[10][5];
  c[1][0] = '.';c[1][1] = ',';c[1][2] = '!';c[1][3] = '?';c[1][4] = ' ';
  c[2][0] = 'a';c[2][1] = 'b';c[2][2] = 'c';
  c[3][0] = 'd';c[3][1] = 'e';c[3][2] = 'f';
  c[4][0] = 'g';c[4][1] = 'h';c[4][2] = 'i';
  c[5][0] = 'j';c[5][1] = 'k';c[5][2] = 'l';
  c[6][0] = 'm';c[6][1] = 'n';c[6][2] = 'o';
  c[7][0] = 'p';c[7][1] = 'q';c[7][2] = 'r';c[7][3] = 's';
  c[8][0] = 't';c[8][1] = 'u';c[8][2] = 'v';
  c[9][0] = 'w';c[9][1] = 'x';c[9][2] = 'y';c[9][3] = 'z';
  cin >>n;
  while(n--){
    string s;
    cin >>s;
    for(int i=0,a=0,b=0; i<s.size(); i++){
      if(s[i] == '0' && a == 0) continue;
      else if(s[i] == '0' && a!=0){
	if(a == 1) b%=5;
	else if(a == 7 || a == 9) b%=4;
	else b%=3;
	cout <<c[a][b];
	a = 0;
	b = 0;
      }
      else if(s[i] != '0' && a == 0) a = s[i]-'0';
      else if(s[i] != '0' && a!=0) b++;
    }
    cout <<endl;
  }
  return 0;
}