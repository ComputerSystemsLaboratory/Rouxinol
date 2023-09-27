
#include<iostream>
using namespace std;


int main(void)
{   
  while(true){
  int p,q;
  cin >> p;
  if(p==0){
    break;
  }
  char  changes[p][2];
  for(int i=0;i<p;i++){
    cin >> changes[i][0];
    cin >> changes[i][1];
  }
  
  cin >> q;
  char words[q];
  for(int i=0;i<q;i++){
    cin >> words[i];
  }
  
  for (int i=0;i<q;i++){
    for(int j=0;j<p;j++){
      if(words[i]==changes[j][0]){
	 words[i]=changes[j][1];
	 break;
      }

  }
      cout << words[i];
  }
  cout << endl;

  }
    return 0;
}