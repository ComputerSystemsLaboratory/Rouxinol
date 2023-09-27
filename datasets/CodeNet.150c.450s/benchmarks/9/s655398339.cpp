#include<iostream>
#include<cstring>
using namespace std;

int main(){

  char c[201];
  char work[201];
  int m,h;
  int l;


  while(1){
    cin >> c;
    if(c[0]=='-')
      break;

    l=strlen(c);

    cin >> m;

    for(int i=0; i<m; i++){
      cin >> h;

      for(int j=0; j<h; j++)
	work[j] = c[j];

      for(int j=0; j<l-h; j++)
	c[j]=c[j+h];

      // cout << "swift:" << c << endl;

      for(int j=l-h; j<l; j++)
	c[j] = work[j-(l-h)];

      //cout << "complte:" << c << endl;

    }

    cout << c << endl;

  }

  return 0;
}