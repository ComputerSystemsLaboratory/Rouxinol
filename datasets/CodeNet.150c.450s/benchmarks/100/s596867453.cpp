#include<bits/stdc++.h>
using namespace std;


int main(){
int a;
long long sum=1;
	cin>>a;
	for (int i = a; i > 0; --i) {
		sum*=i;
	}
cout<<sum<<endl;
}