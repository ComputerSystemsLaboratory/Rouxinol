#include <iostream>
#include <string>


using namespace std;

int exchange(string str){
  int ans = 0;
  int i;
  for (i = 0; i < (int)str.length(); i++) {
	if(str[i] == 'm')
	  ans += 1000;
	else if(str[i] == 'c')
	  ans += 100;
	else if(str[i] == 'x')
	  ans += 10;
	else if(str[i] == 'i')
	  ans += 1;
	else if(str[i] >= '0' && str[i] <= '9'){
	  int a;
	  a = str[i] - '0';
	  i++;
	  if(str[i] == 'm')
		ans += a*1000;
	  else if(str[i] == 'c')
		ans += a*100;
	  else if(str[i] == 'x')
		ans += a*10;
	  else if(str[i] == 'i')
		ans += a*1;
	}	
  }
  return ans;
}

string rev(int a){
  string str;
  string m="",c="",x="",i="";
  str = to_string(a);
  int l = str.length();
  string ans;
  
  if(l == 4){
	if(str[0] == '1'){
	  m += "m";
	}
	else if(str[0] <= '9' && str[0] >= '2'){
	  m += str[0];
	  m += 'm';
	}
	str = str.substr(1);
	l = str.length();
  }
  
  if(l == 3){
	if(str[0] == '1'){
	  c += "c";
	}
	else if(str[0] <= '9' && str[0] >= '2'){
	  c += str[0];
	  c += 'c';
	}
	str = str.substr(1);
	l = str.length();
  }
  
  if(l == 2){
	if(str[0] == '1'){
	  x += "x";
	}
	else if(str[0] <= '9' && str[0] >= '2'){
	  x += str[0];
	  x += 'x';
	}
	str = str.substr(1);
	l = str.length();

  }

  if(l == 1){
	if(str[0] == '1'){
	  i += "i";
	}
	else  if(str[0] <= '9' && str[0] >= '2'){
	  i += str[0];
	  i += 'i';
	}
	str = str.substr(1);
	l = str.length();

  }
  
  ans = m + c + x + i;
  return ans;
}

int main(){
  int n;
  cin >> n;
  while(1){
	if(n <= 0) break;

	string str1,str2,str3;
	cin >> str1 >> str2;
	int a,b,c;
	a = exchange(str1);
	b = exchange(str2);
	c = a + b;
	str3 = rev(c);
	cout << str3 << endl;
	n--;
  }
  
  return 0;
}