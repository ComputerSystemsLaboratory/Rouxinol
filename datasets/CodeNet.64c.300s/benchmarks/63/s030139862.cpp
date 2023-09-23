#include <iostream>
using namespace std;
int main(){
long long int a,b,gcd,lcm,tmp,r,num_a,num_b;
while(cin>>num_a>>num_b){
a=num_a;
b=num_b;
if(a<b){
tmp = a;
a = b;
b = tmp;
}
r=a%b;
while(r!=0){
a = b;
b = r;
r = a % b;
}
gcd = b;
lcm = (num_a*num_b)/gcd;
cout<<gcd<<" "<<lcm<<endl;
}
return 0;
}