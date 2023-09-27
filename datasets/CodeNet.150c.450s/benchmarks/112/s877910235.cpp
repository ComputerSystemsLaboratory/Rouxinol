#include<cstdio>
//#include<cstring>
#include<iostream>
#define N 1000


void ini(void);
using namespace std;
char before[N];
char after[N];
char sth/*[N]*/;
int main(){
  ini();
  int n;
  
  int i;
  while(cin >> n){
    if(n==0)break;
    for(i=0;i<n;i++){
      
      cin >>  before[i] >> after[i];
      
    }
    
    int m;
    
    cin >> m;
    
    for(i=0;i<m;i++){
      
      cin >> sth/*[i]*/ ;
      for(int j=0;j<n;j++){
	if(sth/*[i]*/ == before[j]){
	  sth/*[i]*/=after[j];
	  break;
	}
      }
      printf("%c", sth/*[i]*/);
    }
    cout << endl;
    
  }
    return 0;
    
  
}
  
void  ini(void){

  int i;

  for(i=0;i<N;i++){
    // sth[i]=-1;
    before[i]=-1;
    after[i]=-1;
  }

}