#include <iostream>
using namespace std;

int n, p, mayor[50], wan, basyo;

int main()
{
  while(true){
    
    cin >> n >> p;
    if(n == 0 && p == 0) break;
    
    for(int i = 0 ; i < n ; i++){
      mayor[i] = 0;
    }
    wan = p;
    basyo = 0;

    while(true){
      if(wan > 0){
	mayor[basyo]++;
	wan--;
	if(mayor[basyo] == p){
	  cout << basyo << '\n';
	  break;
	}
      }else{
	wan = mayor[basyo];
	mayor[basyo] = 0;
      }
	basyo++;
	if(basyo == n) basyo = 0;
    }
  }
}