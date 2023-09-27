#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
     int n,a;
     cin>>n;
     for(a=1;a<=n;a++){
		 if(a%3==0||a%10==3||(a/10)%10==3||(a/100)%10==3||(a/1000)%10==3){
			 cout<<" "<<a ;
		 }
	 }
	 cout<< endl;
}

