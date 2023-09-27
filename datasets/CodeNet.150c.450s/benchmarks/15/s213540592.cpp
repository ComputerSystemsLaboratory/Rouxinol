#include<iostream>
using namespace std;

int N;

int Linear_Search(int A[],int key){
  for(int i=0;i<N;i++)if(A[i] == key) return 1;
  return 0;
}


int main(){
  int T[100000];
  int q;
  int a;
  int sum=0;
  //cout<<"move"<<endl;
  cin>>N;
  for(int i=0;i<N;i++)cin>>T[i];
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>a;
    sum += Linear_Search(T,a);
  }

  cout<<sum<<endl;

  return 0;

}
  