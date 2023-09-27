#include<iostream>
#include<string>
using namespace std;


int main(){
  int n,m;
  while(cin >> n&&n!=0){
  
    char conv[n][2];
    for(int i=0;i<n;i++){
      cin >> conv[i][0] >> conv[i][1];
    }
  
    cin >> m;

    char inp[m];

    for(int i=0;i<m;i++){
      cin >> inp[i];
      for(int j=0;j<n;j++){
	if(inp[i]==conv[j][0]){
	  inp[i]=conv[j][1];
	  break;
	}
      }
    }


    for(int i=0;i<m;i++){
      cout << inp[i];
    }
    cout << endl;
  }
  

}