#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int n,m,p;
    cin>>n>>m>>p;
    if(n==0&&m==0&&p==0)break;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    if(a[m-1]!=0){
      cout<<(sum*(100-p))/a[m-1]<<endl;
    }else{
      cout<<0<<endl;
    }
  }
  return 0;
}