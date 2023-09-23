#include<iostream>
using namespace std;
int main(){
long long int x=1,s;
cin>>s;
while(s!=1){
x*=s;
s--;
}
cout<<x<<endl;
return 0;
}