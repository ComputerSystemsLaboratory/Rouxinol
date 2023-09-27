#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int N;
  string in;
  char list[9][6]={
    {'.',',','!','?',' ','/'},
    {'a','b','c','/','/','/'},
    {'d','e','f','/','/','/'},
    {'g','h','i','/','/','/'},
    {'j','k','l','/','/','/'},
    {'m','n','o','/','/','/'},
    {'p','q','r','s','/','/'},
    {'t','u','v','/','/','/'},
    {'w','x','y','z','/','/'}
  };
  
  int x=-1,y=-1;
  
  cin >>N;
  
  for(int i=0 ; i < N ; i++){
    
    cin >>in;
    
    for(int j=0 ; j < (int)in.size() ; j++){
      
      char in_one=in[j];
      int num=atoi(&in_one);

      if(num == 0){
	if(y != -1)cout <<list[y][x];
	y=-1;
	x=-1;
      }else{
	x++;
	if(list[y][x] == '/')x=0;
	y=num-1;
      }
      
    }
    cout <<endl;
    
  }
  
  return 0;
}