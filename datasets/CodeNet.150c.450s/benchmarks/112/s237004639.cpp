#include<iostream>
using namespace std;
int main(){
  
  int n,m;
  char  moji,change[1000000][2];

  while(1){
    
    cin >>n;
    
    if( n == 0)break;
    
    for(int i=0 ; i < n ; i++){
      cin >>change[i][0]>>change[i][1];
    }
    
    cin >>m;
    
    for(int i=0 ; i < m ; i++){
      cin >>moji;
      for(int j=0 ; j < n ; j++){
	if(moji == change[j][0]){
	  moji=change[j][1];
	  break;
	}
    }
      cout<<moji;
    }
    cout <<endl;
  }
  
  return 0;
}