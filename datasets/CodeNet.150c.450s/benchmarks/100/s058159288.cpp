#include<cstring>
#include<cstdio>
#include<iostream>

using namespace std;


int main(){
long long n, ans=1;

cin >> n;

while(n>1)	ans*=n--;

cout << ans << endl;

	return 0;
}