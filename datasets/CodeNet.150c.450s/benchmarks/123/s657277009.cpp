//ALDS1_1C
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int x){
 if(x==2) return true;
 if(x<2 || x%2==0) return false;
 int n=static_cast<int>(sqrt(x));
 for(int i=3;i<=n;i+=2){
  if(x%i==0) return false;
 }
 return true;
}

int main(){
 int n;
 cin>>n;
 vector<int>data(n);
 for(int i=0;i<n;i++){
  cin>>data.at(i);
 }
 int res=0;
 for(int i=0;i<n;i++){
  if(isPrime(data.at(i))) res++;
 }

 cout<<res<<endl;
 return 0;
}