#include <bits/stdc++.h>
using namespace std;
 map<long long , long long>m;

void fun(long long n=10000){
     for(int x=1;x<=100;x++){
     for(int y=1;y<=100;y++){
     for(int z=1;z<=100;z++){
     m[(pow(x,2)+pow(y,2)+pow(z,2)+x*y + y*z + x*z)]++;

     }}}
}

int main(){
   fun();
  long long n;
  cin >>n;
 for(long long i=1;i<=n;i++)cout << m[i] << endl;




}
