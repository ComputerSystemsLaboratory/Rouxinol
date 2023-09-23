#include<iostream>
using namespace std;

#define loop(i,a,b) for(int i = a ; i< b ; i ++)

int main(void){
  int d;
  while(cin>>d){
    long long int sum =0;
    loop(i,1,600/d)
      sum+=i*i*d*d*d;
    cout<<sum<<endl;
  }
  return 0;
}