#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  
  cin >> n;
  
  for(int i = 0;i < n;++i){
	string num;
	cin >> num;
	
	char m = '1';
	
	for(int j = 0;j < num.size();++j){
	  int nn = num[j] - '0';
	  
	  if(nn == 1){
		if(m == '1' || m == ' ')
		  m = '.';
		else if(m == '.')
		  m = ',';
		else if(m == ',')
		  m = '!';
		else if(m == '!')
		  m = '?';
		else if(m == '?')
		  m = ' ';
	  }
	  else if(nn == 2){
		if(m == '1' || m == 'c')
		  m = 'a';
		else if(m == 'a')
		  m = 'b';
		else if(m == 'b')
		  m = 'c';
	  }
	  else if(nn == 3){
		if(m == '1' || m == 'f')
		  m = 'd';
		else if(m == 'd')
		  m = 'e';
		else if(m == 'e')
		  m = 'f';
	  }
	  else if(nn == 4){
		if(m == '1' || m == 'i')
		  m = 'g';
		else if(m == 'g')
		  m = 'h';
		else if(m == 'h')
		  m = 'i';
	  }
	  else if(nn == 5){
		if(m == '1' || m == 'l')
		  m = 'j';
		else if(m == 'j')
		  m = 'k';
		else if(m == 'k')
		  m = 'l';
	  }
	  else if(nn == 6){
		if(m == '1' || m == 'o')
		  m = 'm';
		else if(m == 'm')
		  m = 'n';
		else if(m == 'n')
		  m = 'o';
	  }
	  else if(nn == 7){
		if(m == '1' || m == 's')
		  m = 'p';
		else if(m == 'p')
		  m = 'q';
		else if(m == 'q')
		  m = 'r';
		else if(m == 'r')
		  m = 's';
	  }
	  else if(nn == 8){
		if(m == '1' || m == 'v')
		  m = 't';
		else if(m == 't')
		  m = 'u';
		else if(m == 'u')
		  m = 'v';
	  }
	  else if(nn == 9){
		if(m == '1' || m == 'z')
		  m = 'w';
		else if(m == 'w')
		  m = 'x';
		else if(m == 'x')
		  m = 'y';
		else if(m == 'y')
		  m = 'z';
	  }
	  else if(nn == 0){
		if(m != '1')
		  cout << m;
		m = '1';
	  }
	}
	cout << endl;	
  }
  
}

