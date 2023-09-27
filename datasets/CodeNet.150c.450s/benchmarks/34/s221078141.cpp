#include<iostream>
#include<vector>

using namespace std;

int kannondo(int n){
  vector<int> a;
  int answer=0;
  a.resize(n+3);
  a[0]=0;
  a[1]=0;
  a[2]=1;
  for (int i=3;i<n+3;i++){
    a[i]=a[i-1]+a[i-2]+a[i-3];
  }
  answer=a[n+2]/3650+1;
  return answer;
}


int main(){
  while(true){
    int a;
    cin>>a;
    if(a==0) break;
    int result;
    result=kannondo(a);
    cout<<result<<endl;
  }
  return 0;
}