#include <iostream>
#include <ctype.h>
#define N 26
using namespace std;

char BCH[N]={'a','b','c','d','e','f','g',
	      'h','i','j','k','l','m','n',
	      'o','p','q','r','s','t','u',
	     'v','w','x','y','z'};

int main()
{
  char ch;
  int count[26]={0};

  while(cin >> ch){
    if(islower(ch)==0) ch=tolower(ch);
    for(int i=0;i<N;i++){
    if(ch==BCH[i]) count[i]++;
    }
  }

  for(int i=0;i<N;i++){
    cout << BCH[i] << " : " << count[i] << endl;
  }

  return 0;
}