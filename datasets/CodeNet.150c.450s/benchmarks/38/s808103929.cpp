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
	 int length[3];
	 int n;
	 cin>>n;
	while(n>0){
		cin>>length[0]>>length[1]>>length[2];
		sort(length,length+3);
		if (length[2]*length[2]==length[1]*length[1]+length[0]*length[0]){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		n--;
	}
	return 0;
}