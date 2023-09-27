#include <bits/stdc++.h>
using namespace std;

int main(){
int n;cin>>n;
for (int i=1;i<=n;i++){
	if (i%3==0){
    	cout << " " << i;//test if 3 is factor of i
		}
	else if (i%10==3){
		cout <<" "<<i;//test if integer contains 3
		}
	else if (i>10 && i<100){
		int j=i/10;
		if (j%10==3){
			cout <<" "<<i;
		   }
   	}
	   	   	else if (i>100 && i<1000){
		int k=i/100;
   int j=i/10;
		if (k%10==3){
			cout <<" "<<i;
		   }
		else if (j%10==3){
			cout <<" "<<i;
		   }
   		  }
   		  	   	   	else if (i>1000){
		int l=i/1000;
				int k=i/100;
   int j=i/10;
		if (k%10==3){
			cout <<" "<<i;
		   }
		else if (j%10==3){
			cout <<" "<<i;
		   }
		else if (l%10==3){
			cout <<" "<<i;
		   }
   		  }
	}
	cout<<endl;
}
