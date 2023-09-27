#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
char buf[20];
int main(){
  int n;
  cin >> n;
  string dup;
  getline(cin,dup);
  for(int i = 0;i < n;i++){
    string str;
    getline(cin,str);

    int j = 0;
    vector<int> array1  = vector<int>(4);
    vector<int> array2  = vector<int>(4);
    vector<int> p = vector<int>(array1);
    int keep = 1;
    for(int i = 0;i < str.length();i++){
      char a = str[i];
      if('2' <= a && '9' >= a ){
	keep = a - '0';
	//cout << a<<" " <<keep << "     dddd" <<endl;
      }
      else if('m' == a){
	p[0] = keep;
	keep = 1;
      }
      else if('c' == a){
	p[1] = keep;
	keep = 1;
      }
      else if('x' == a){
	p[2] = keep;
	keep = 1;
      }
      else if('i' == a){
	p[3] = keep;
	keep = 1;
      }
      else if(' ' == a){
	array1 = vector<int>(p);
	p = vector<int>(array2);;
	keep  = 1;
      }
	
    }
    array2 = vector<int>(p);
    int flag = 0;
    vector<int> ans = vector<int>(4);
    for(int i = 3;i >= 0;i--){
      if(flag == 1){
	if(array1[i]+array2[i]+1 >=10){
	  flag = 1;
	  ans[i] = (array1[i]+array2[i]+1)%10;
	}else{
	  flag = 0;
	  ans[i] = array1[i]+array2[i]+1;
	}
      }else{
	if(array1[i]+array2[i] >=10){
	  flag = 1;
	  ans[i] = (array1[i]+array2[i])%10;
	}else{
	  flag = 0;
	  ans[i] = array1[i]+array2[i];  
	}
      }
    }/*
    cout << "-------" << endl;
    for(int i = 0;i < 4;i++){
      cout << ans[i] << endl;
    }
    cout << "-------" << endl;*/
    for(int i = 0;i < 4;i++){
      if(ans[i] != 0){
	if(ans[i] != 1){
	  cout << ans[i];
	}
	if(i == 0){
	  cout << "m";
	}
	if(i == 1){
	  cout << "c";
	}
	if(i == 2){
	  cout << "x";
	}
	if(i == 3){
	  cout << "i";
	}
      }
    }
    cout << endl;
    
  }
  return 0;
}