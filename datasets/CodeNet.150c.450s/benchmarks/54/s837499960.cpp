#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){

  char w[11] , t[1001];
  int sum=0;

  cin >> w;

  for(int i=0; i<(int)strlen(w); i++)
    w[i] = toupper(w[i]);

  while(1){
    cin >> t;



    if(strcmp(t,"END_OF_TEXT")==0)
      break;


    for(int i=0; i<(int)strlen(t); i++)
      t[i] = toupper(t[i]);


    if(strcmp(t,w)==0)

      sum++;

  }

  cout << sum << endl;


  return 0;
}