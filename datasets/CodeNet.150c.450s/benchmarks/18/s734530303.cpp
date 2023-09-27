#include<iostream>
using namespace std;
int main() {
double n=100000;
int i,b;
cin>>b;
for(i=0;i<b;i++){
n*=1.05;
n=(int)(n+999)/1000*1000;
}
cout<<(int)n<<endl;
  return 0;
}