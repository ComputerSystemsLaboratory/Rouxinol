#include <iostream>

using namespace std;


int main(){
  int anum[1000000];
  int bnum[1000000];
  int cnum[10000];
  int a,b,cnt=0;
  int flag=0;

  cin >>a;

  for(int i=0;i<a;i++){
    cin >>anum[i];
  }

  cin >>b;

  for(int i=0;i<b;i++){
    cin >>bnum[i];
  }

  int s=0;
for(int j=0; j<b; j++){
    s=0;
    anum[a]=bnum[j];
     
    while(anum[s] != anum[a]) s++;
    if(s < a) cnt++;
  }
   


  
  

  cout << cnt <<endl;
  
  return 0;
}