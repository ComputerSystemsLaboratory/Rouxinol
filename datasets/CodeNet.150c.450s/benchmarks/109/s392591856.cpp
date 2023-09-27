#include <iostream>
using namespace std;

#define MAX 24*60*60

int main(){

  int train[MAX];
  int N;

  while(1){

    cin >> N;
    if(N == 0) break;
    int ans = 0;
    for(int i = 0 ; i < MAX ; i++){
      train[i] = 0;
    }    

    int h1,m1,s1,h2,m2,s2;
    char tmp;

    for(int i = 0; i < N ; i++){
    
      cin  >> h1 >> tmp >> m1 >> tmp >> s1 >> h2 >> tmp >> m2 >> tmp >> s2;
      //  cout << h1 << " " << m1 << " " << s1 << " " << h2 << " " << m2 << " " << s2 << endl;
      // cout   << train[3*60*60 +1] << " " << train[3*60*60] << endl;


      //列車を増やすとき

      bool OK = true;
      for(int i =  s1 + 60*m1 + 60*60*h1 ; i <= s2+(60*m2)+(60*60*h2)-1 ;i++){
	if(train[i] == 0){
	  OK = false;
	  break;
	}
      }  
      
      if(OK == false){
	ans++;
	for(int i = 0 ; i < s1 + 60*m1 + 60*60*h1 ;i++){
	  train[i]++;
	} 
	for(int i = s2 + 60*m2 + 60*60*h2 ; i < MAX ;i++){
	  train[i]++;
	} 
      } 
      //足りているとき
      else{
	for(int i =  s1 + 60*m1 + 60*60*h1 ; i <= s2+(60*m2)+(60*60*h2)-1 ;i++){
	  if(train[i] != 0) train[i]--;
	} 
      }
      //   cout << train[0] <<" "<< train[MAX-1] << endl;
    }
    cout << ans << endl;
  }  
  return 0;
}