#include<iostream>
using namespace std;
int main()
{
 long long int n,seisu,goukei;
  int i;
 long long int max,min;

  cin >> n;
 
 cin >> seisu;

 max = seisu;
 min = seisu;
 goukei = seisu;

  for(i = 0;i < n-1;i++){

    cin >> seisu;

   

    if(max <= seisu){

      max = seisu;

    }

    if(min >= seisu){

      min = seisu;

    }

    goukei = goukei + seisu;

  }

  cout << min << " " << max << " " << goukei << "\n";
}