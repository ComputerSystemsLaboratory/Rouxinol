#include<iostream>
using namespace std;

int t[86401];

int convert(int h,int m,int s){
  
  int sec=0;
  
  sec=s+(m*60)+(h*3600);
  
  return sec;
}
int main(){
  
  int n;
  int h,m,s;
  char dum;

  while(1){

    cin >>n;
    if(n==0)break;

    for(int i=0 ; i < 86401 ; i++)t[i]=0;
    
    int cnt=1;
    
    for(int i=0 ; i < n ; i++){
      cin >>h>>dum>>m>>dum>>s;
      int S=convert(h,m,s);
      cin >>h>>dum>>m>>dum>>s;
      int G=convert(h,m,s);
      bool flag=false;
      for(int j=S ; j < G ; j++){
	t[j]++;
	if(t[j] > cnt)flag=true;
      }
      if(flag)cnt++;
    }
    
    cout <<cnt<<endl;
    
  }
  
  return 0;
}