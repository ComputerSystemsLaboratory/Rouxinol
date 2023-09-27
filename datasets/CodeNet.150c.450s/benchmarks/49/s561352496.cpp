#include<iostream>
using namespace std;

int main(){

  
  int n;
  int sum;
  int s;
  int max,min;

  while(cin >> n){
    if(n==0){ break; }
    sum = 0;
    max=0,min=1000;

    for(int i=0; i<n; i++){
      cin >> s;
      if(s>max){ max=s; }
      if(s<min){ min=s; }

      sum += s;
    }

    sum -= max+min;

    cout << sum/(n-2) << endl;

  }


  return 0;
}