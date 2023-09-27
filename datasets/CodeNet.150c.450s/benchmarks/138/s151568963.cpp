//ALDS1_1B
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x,int y){
 if(y==0) return x;
 if(x<y) swap(x,y);
 int temp=x%y;
 x=y;
 y=temp;

 return gcd(x,y);
}

int main(){
 int x,y;
 cin>>x>>y;
 int n=gcd(x,y);
 cout<<n<<endl;
 
 return 0;
}