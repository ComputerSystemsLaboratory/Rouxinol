#include<iostream>

using namespace std;

int main(){

  int n;

  while(cin>>n){



    if(n==0){
      break;
    }
    int a[n];
    int max,min;

    max=0;
    min=1000;

    for(int i=0;i<n;i++){
      cin>>a[i];

      if(a[i]>max){
	max=a[i];
      }

      if(a[i]<min){
	min=a[i];
      }
    }

    int sum;

    sum=0;

    for(int p=0;p<n;p++){
      sum=sum+a[p];
    }

    sum=sum-max-min;

  

    cout << sum/(n-2) << endl; 

   

  }

  



  return 0;
}