#include<iostream>
#include<cstdio>
using namespace std ;
int main(){
  int n;
  cin>>n;  
  int day[n];
  for(int i=0;i<n;i++){
    cin>>day[i];
  }
 for(int i=n-1;i>=0;i--){
   printf("%d",day[i]);
  if(i)printf(" ");
  }
  cout<<endl;
 return 0;
}