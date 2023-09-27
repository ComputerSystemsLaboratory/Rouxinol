#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int n[num-1];
  for(int i=0;i<num-1;i++)
    cin>>n[i];
  int answer;
  cin>>answer;
  long long a[num-1][21];
  for(int i=0;i<num-1;i++){
    for(int j=0;j<21;j++){
      a[i][j]=0;
    }
  }

  a[0][n[0]]=1;
  for(int j=1;j<num-1;j++){
    for(int i=0;i<21;i++){
      //if(a[j-1][i]>0){
	if(i+n[j]<21)
	  a[j][i+n[j]]+=a[j-1][i];
	if(i-n[j]>=0)
	  a[j][i-n[j]]+=a[j-1][i];
	//}
    }
  }
  cout<<a[num-2][answer]<<endl;

  return 0;
}