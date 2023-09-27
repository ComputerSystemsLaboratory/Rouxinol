#include<iostream>
using namespace std;

int main(){

long long int ans=1,n;

 cin >> n;

 for(int i=1;i<=n;i++) ans = ans * i;

 cout << ans << endl;
}