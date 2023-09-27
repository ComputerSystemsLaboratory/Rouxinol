#include<iostream>
using namespace std;

int main(){
 int a,b,c,i,x,n;
cin >>a>>b>>c;
for(i=a; i<=b; i++){
 x=c%i;
  if (x==0) n++;
}
cout << n<<endl;
    return 0;
}