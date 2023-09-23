#include<iostream>
#include<math.h>
using namespace std;


bool is_sosu(long int x){
	int i;
	if(x<2) return false;
	for(i=2;i<=sqrt((float)x);i++){
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	long int a,d,n,i;	//a初項 d公差 n求める素数の順番

	cin>>a>>d>>n;
	while(a!=0 || d!=0 || n!=0){
		i=0;
		while(i!=n){
			if(is_sosu(a)==true) i++;
			a+=d;
		}
		cout<<a-d<<endl;
		cin>>a>>d>>n;
	}
}