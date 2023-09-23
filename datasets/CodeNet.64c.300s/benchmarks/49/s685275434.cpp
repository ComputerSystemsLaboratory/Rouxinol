#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int a,b;
while(cin>>a>>b){
int sum=a+b;
int c=0;
for(;sum!=0;){
sum/=10;
c++;
}
cout << c << endl;
c=0;
}
}