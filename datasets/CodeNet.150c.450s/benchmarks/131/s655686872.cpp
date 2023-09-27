#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
#include<random>
#include<ctime>
using namespace std;

long long int maxmin(long long int num,long long int l){
	long long int tmp[10]={},ma=0,mi=0;
	for(int i=0;i<l;i++){
		tmp[i]=num%10;
		num/=10;
	}	
	sort(tmp,tmp+l);
	for(int i=0;i<l;i++){
		mi=mi*10+tmp[i];
		ma=ma*10+tmp[l-i-1];	
	}
	return ma-mi;
}

int main() {
	cout << fixed << setprecision(5);
	long long int a,l;
	cin>>a>>l;
	while(l!=0){
		long long int tmp[50]={};
		bool key=false;
		tmp[0]=a;
		for(int i=1;i<=25;i++){
			tmp[i]=maxmin(tmp[i-1],l);
			for(int j=0;j<i;j++){
				if(tmp[i]==tmp[j]){cout<<j<<" "<<tmp[i]<<" "<<i-j<<endl;key=true;break;}	
			}	
			if(key){break;}
		}
		cin>>a>>l;
	}
}

