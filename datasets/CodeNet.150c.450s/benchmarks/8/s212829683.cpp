#include<iostream>
using namespace std;

int main()
{
  int a=0,b=0,n;
  string A,B;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A>>B;
    if(A==B){
      a++;
      b++;
    }
    else if(A>B)a+=3;
    else b+=3;
  }
  cout<<a<<" "<<b<<endl;
  return 0;
}
  