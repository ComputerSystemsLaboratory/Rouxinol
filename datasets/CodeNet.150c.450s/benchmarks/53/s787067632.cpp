#include <iostream>
#include <vector>
using namespace	std;
int main(){

  int n,so[40000]={0},moto;

  cin>>n;
  moto=n;
  vector <int> sonaka;
  for(int i=2;i<40000;i++) if(so[i]==0){
      sonaka.push_back(i);
      for(int j=i*2;j<40000;j+=i) so[j]=1;
    }
  vector <int> result;
  for(int i=0;sonaka[i]<=n&&i<sonaka.size();i++) while(n%sonaka[i]==0){
      n/=sonaka[i];
      result.push_back(sonaka[i]);
  }
  if(n!=1) result.push_back(n);
  cout<<moto<<":";
  for(int i=0;i<result.size();i++) cout<<" "<<result[i];
  cout<<endl;

  return 0;

}