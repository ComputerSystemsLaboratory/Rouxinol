#include <iostream>
using namespace std;

int ToNum(string str){
  int num = 0;
  for(int i = 0 ; i < str.size(); i++){
    if(str[i] == 'm'){
      if('0'<=str[i-1]&&str[i-1]<='9' && i-1 >= 0){
	num+=10000*(str[i-1]-'0');
      }else num+=10000;
    }else if(str[i] == 'c'){
      if('0'<=str[i-1]&&str[i-1]<='9' && i-1 >= 0){
	num+=1000*(str[i-1]-'0');
      }else num+=1000;
    }else if(str[i] == 'x'){
      if('0'<=str[i-1]&&str[i-1]<='9' && i-1 >= 0){
	num+=100*(str[i-1]-'0');
      }	else num+=100;
    }else if(str[i] == 'i'){
      if('0'<=str[i-1]&&str[i-1]<='9' && i-1 >= 0){
	num+=10*(str[i-1]-'0');
      }else num += 10;
    }
  }
  if('0'<=str[str.size()-1] && str[str.size()-1] <= '9')num+=str[str.size()-1]-'0';
  return num;
}

string ToStr(int num){

  string ans = "";
  int t = 10000;
  while(1){
    int a = (num/t)%10;
    if(0 < a && a <= 9 && t == 10000){
      if(a > 1)ans+=char(a+'0');
      ans+='m';
    }
    if(0 < a && a <= 9 && t == 1000){
      if(a > 1)ans+=char(a+'0');
      ans+='c';
    }
    if(0 < a && a <= 9 && t == 100){
      if(a > 1)ans+=char(a+'0');
      ans+='x';
    }
    if(0 < a && a <= 9 && t == 10){
      if(a > 1)ans+=char(a+'0');
      ans+='i';
    }
    if(0 < a && a <= 9 && t == 1){
      ans+=char(a+'0');
    }
    t/=10;
    if(t == 0)break;
  }
  return ans;
}

int main(){
  int n;
  string num1,num2;
  cin >> n;
  while(n--){
    cin >> num1 >> num2; 
    int a = ToNum(num1);
    int b = ToNum(num2);
    a = a+b;
    string ans = ToStr(a);
    cout << ans << endl;
  }
}