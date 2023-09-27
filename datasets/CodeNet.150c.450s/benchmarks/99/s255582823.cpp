#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  string s1, s2;

  for(int i=0; i<n; i++){
    cin >> s1 >> s2;
    int num = 1;
    int i1 = 0;
    int i2 = 0;
    for(unsigned int j=0; j<s1.length(); j++){
      if(isdigit(s1[j])){
	num = atoi(&s1[j]);
      }else{
	if(s1[j] == 'm'){
	  i1 += num*1000;
	}else if(s1[j] == 'c'){
	  i1 += num*100;
	}else if(s1[j] == 'x'){
	  i1 += num*10;
	}else if(s1[j] == 'i'){
	  i1 += num;
	}
	num = 1;
      }
    }
    num = 1;
    for(unsigned int j=0; j<s2.length(); j++){
      if(isdigit(s2[j])){
	num = atoi(&s2[j]);
      }else{
	if(s2[j] == 'm'){
	  i2 += num*1000;
	}else if(s2[j] == 'c'){
	  i2 += num*100;
	}else if(s2[j] == 'x'){
	  i2 += num*10;
	}else if(s2[j] == 'i'){
	  i2 += num;
	}
	num = 1;
      }
    }
    num = i1 + i2;

    int m[4] = {0};
    if(num/1000 > 0){
      m[0] = num/1000;
      num %= 1000;
    }
    if(num/100 > 0){
      m[1] = num/100;
      num %= 100;
    }
    if(num/10 > 0){
      m[2] = num/10;
      num %= 10;
    }
    if(num > 0){
      m[3] = num;
    }

    string aaa[4] = {"m", "c", "x", "i"};
    for(int j=0; j<4; j++){
      if(m[j] > 1){
	cout <<  m[j];
      }
      if(m[j] > 0){
	cout <<  aaa[j];
      }
    }
    cout << endl;
  }

  return 0;
}