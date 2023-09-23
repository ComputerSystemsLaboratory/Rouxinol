#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int keta(int x){
	int i=0;
	while (x/pow(10,i)>=1){
		i++;
	}
	if (x==0){
		return 1;
	}
	else
	return i;
	}


int main(){
int n;
while (cin>>n){
	int count=0;
for (int i=0;i<10;i++){
    for (int j=0;j<10;j++){
	   for (int k=0;k<10;k++){
		   if (0<=n-i-j-k&&n-i-j-k<10){
			   count+=1;
		   }

		   }
	   }
	}
cout<<count<<endl;
}
	}