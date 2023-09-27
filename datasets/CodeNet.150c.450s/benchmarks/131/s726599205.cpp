#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

string addzero(string str,int n){
  string str_0;
  for(int i=0;i<(n-str.size());i++)
    str_0.insert(0,"0");
  str_0+=str;
  return str_0;
}

string getMin(string str){
  sort( str.begin(),str.end() );
  return str;
}

string getMax(string str){
  str=getMin(str);
  reverse( str.begin(),str.end() );
  return str;
}

string int_to_string(int& n){
  stringstream ss;
  ss << n;
  return ss.str();
}

int string_to_int(const string& s){
  int n;
  istringstream iss(s);
  iss >> n;
  return n;
}

string getSub(string maxstr,string minstr){
  int max,min,work;
  string str;
  max=atoi( maxstr.c_str() );
  min=atoi( minstr.c_str() );
  work=max-min;
  str=int_to_string(work);
  return str;
}

void printData(int data[]){
  for(int i=0;i<=20-1;i++)
    for(int j=i+1;j<=20;j++)
      if(data[i]==data[j]){
	cout<<i<<" "<<data[i]<<" "<<j-i<<endl;
	return ;
      }
}

int main(){
  int n,max_,min_;
  int data[21]={0};
  string str;

  while(1){
  cin>>str>>n;
  if(str=="0" && n==0) break;
    for(int i=0;i<=20;i++){
      data[i]=string_to_int(str);
      str=addzero(str,n);
      str=getSub(getMax(str),getMin(str));
    }
    printData(data);

    
  }
  return 0;
}