#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *array = new int[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(array[j] < array[minj])
	minj=j;
    }
    if(i!=minj){
      swap(array[i],array[minj]);
      count++;
    }
  }

  cout<<array[0];
  for(int i=1;i<n;i++)
    cout<<" "<<array[i];
  cout<<'\n'<<count<<endl;
  delete []array;
  return 0;
}