#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
char str[1000000];
typedef pair<char,char>P;
int main(){
  int n,k;
  P sezi[100];
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){   
      cin>>sezi[i].first>>sezi[i].second;
    }  
    cin>>k;
    for(int i=0;i<k;i++){
      cin>>str[i];
    }
    int flg = 0;
    for(int i=0;i<k;i++){
      for(int j=0;n>j;j++){
	if(str[i]==sezi[j].first){
	  printf("%c",sezi[j].second);
	  flg++;
	  break;
	}
      }
      if(flg==0){
	cout<<str[i];
      }
      flg=0;
    }
    cout<<endl;
  } 
  return 0;
}