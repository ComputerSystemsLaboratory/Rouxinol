#include<iostream>
using namespace std;

int main(){
  int N,M;
  string str[257];
  cin>>N;
  string str2[257];
  int f,k=0;
  for(int i=0;i<N;i++){
    cin>>str[i];
  }
  cin>>M;
  for(int i=0;i<M;i++){
    cin>>str2[i];
  }

  for(int i=0;i<M;i++){
    f=0;
    for(int j=0;j<N;j++){
      if(str2[i]==str[j]){
	if(k==0){
	  f=1;
	  k=1;
	  cout<<"Opened by "<<str2[i]<<endl;
	  break;
	}else{
	  k=0;
	  cout<<"Closed by "<<str2[i]<<endl;
	  break;
	}
      }
      else{
	if(j==N-1 && f==0) cout<<"Unknown "<<str2[i]<<endl;
      }
    }
  }
  return 0;
}
	