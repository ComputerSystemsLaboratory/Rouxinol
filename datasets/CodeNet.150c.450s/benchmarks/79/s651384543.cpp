#include<iostream>
using namespace std;

int main(){
  int n,r;
  int array1[50],array2[50];

  while(1){
    cin>>n>>r;
    if(n+r==0)break;

    for(int i=0;i<n;i++) array1[n-i-1]=array2[n-i-1]=i+1;

    for(int j=0;j<r;j++){
      int c,p;
      cin>>c>>p;

      for(int i=0;i<p;i++){
	swap(array1[c-1+i],array1[i]);
	array2[c-1+i]=0;
      }
      int k=p;
      for(int i=0;i<n;i++){
	while(array2[i]==0) i++;
	array1[k++]=array2[i];
      }
      for(int i=0;i<n;i++){
	//	while(array2[i]==0)i++;
	array2[i]=array1[i];
      }
      //      for(int i=0;i<n;i++) cout<<array1[i]<<endl;     
    }

    cout<<array1[0]<<endl;
  }
  return 0;
}