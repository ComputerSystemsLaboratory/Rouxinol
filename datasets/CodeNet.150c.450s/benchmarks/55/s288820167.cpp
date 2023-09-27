#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string a;
	while(cin>>a,a!="0"){
	int b=0;
	for(int c=0;c<a.length();c++)b+=a[c]-48;
	cout<<b<<endl;
	}
}