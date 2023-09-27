#include<iostream>

using namespace std;

int main(void){

int n,fib[45];
fib[0]=fib[1]=1;

for(int i=2;i<45;i++)fib[i]=fib[i-1]+fib[i-2];

while(cin >> n)cout << fib[n]<<endl;

return 0;
}