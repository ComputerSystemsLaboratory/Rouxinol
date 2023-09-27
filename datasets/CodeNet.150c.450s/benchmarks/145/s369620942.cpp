#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct Eng {
  string str;
  int count;
};
int main(){
  Eng data[3333],temp;
  string str,box="\0";
  int f=0,num=0,flag;
  getline(cin , str);
  int str_size = str.size();
  for(int i=0;i<str_size;i++){
    if(str[i] == ' '){
      data[num].str = str.substr( f , i - f );
      for(int j=0;j<num;j++){
	if(data[num].str == data[j].str){
	  data[j].count++;	
	}
      }
      f = i + 1;
      num++;
    }
    else if(i == str_size-1){
      data[num].str = str.substr( f , i - f + 1  );
      for(int j=0;j<num;j++){
	if(data[num].str == data[j].str)data[j].count++;
      }
      num++;
    }
  }
  for(int i=0;i<num-1;i++){
    for(int j=num-1;j>i;j--){
      if(data[j].count>data[j-1].count){
	temp = data[j];
	data[j] = data[j-1];
	data[j-1] = temp;
      }
    }
  }
  for(int i=0;i<num;i++)
    if(box.size()<data[i].str.size())box = data[i].str; // 長さ確保
  cout << data[0].str << ' ' << box << endl;
}