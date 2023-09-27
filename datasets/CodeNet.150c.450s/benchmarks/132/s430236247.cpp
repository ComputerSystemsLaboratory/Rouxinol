#include<iostream>
using namespace std;


int main(){

  int n,p;
  int have[50];
  int num;
  int cup;

  while(cin >> n >> p){
    if(n==0 && p==0){break;}

    for(int i=0; i<n; i++){ have[i]=0; }
    num=0;
    cup = p;
    //reset


    while(have[num%n]!=p){
      if(cup!=0){
	cup--;
	have[num%n]++;
      }
      else{
	cup = have[num%n];
	have[num%n]=0;
      }
      
      num++;

    }


    cout << num%n << endl;

  }



  return 0;
}