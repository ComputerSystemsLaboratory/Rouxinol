#include <bits/stdc++.h>
//#include <iostream>
//#include <Windows.h>
using namespace std;

int main(){
int n;
int a=100000;
cin>>n;
while (n--){
	a*=1.05;
	int l=a%1000;
	if(l>0)a+=1000-l;
	
}
cout<<a<<endl;
return 0;
}