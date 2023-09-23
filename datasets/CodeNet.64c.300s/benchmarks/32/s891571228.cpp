#include <iostream>

using namespace std;
int n,a;
int mi=1000001;
int ma=-1000001;
long long  s=0;
int main(){
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>a;
  if(mi>a){
   mi=a;
  }
  if(ma<a){
  ma=a;
  }
  s+=a;
 }
 cout<<mi<<" "<<ma<<" "<<s<<endl;
}