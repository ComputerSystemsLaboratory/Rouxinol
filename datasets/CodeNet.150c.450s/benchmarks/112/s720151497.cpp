#include<iostream>
using namespace std;
int main() {
  int i,j,k;
  string s;
  while(1){
    cin>>i;
    if(i==0)break;
    string c[i][2];
    for(j=0;j<i;j++) {
      cin>>s,c[j][0]=s;
      cin>>s,c[j][1]=s;
    }
    cin>>k;
    for(j=0;j<k;j++){
      cin>>s;
      for(int l=0;l<i;l++){
	if(s==c[l][0]) {
	  s=c[l][1];
	  break;
	}
      }
      cout<<s;
    }
    cout<<"\n";
  }
}