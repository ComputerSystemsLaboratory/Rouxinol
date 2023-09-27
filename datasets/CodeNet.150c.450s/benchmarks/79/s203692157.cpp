#include<iostream>
using namespace std;

int main(){

  int card[50];
  int esc[50];
  int n,r;
  int p,c;

  while(cin >> n >> r){
    if(n==0 && r==0){ break; }
    
    for(int i=0; i<n; i++){
      card[i]=n-i;
    }

    for(int i=0; i<r; i++){
      cin >> p >> c;

      /*
      cout << "prev:";
      for(int j=0; j<n; j++)cout << card[j] << ' ';
      cout << endl;
      */

      for(int j=0; j<c; j++){
	esc[j] = card[p-1+j];
      }
      for(int j=p-2; j>=0; j--){
	card[j+c]=card[j];
      }
      for(int j=0; j<c; j++){
	card[j] = esc[j];
      }

      /*cout << "now:";
      for(int j=0; j<n; j++)cout << card[j] << ' ';
      cout << endl;
      cout << "esc:";
      for(int j=0; j<c; j++)cout << esc[j] << ' ';
      cout << endl;
      */
   }

    
    cout << card[0] << endl;
  }
      

  return 0;
}