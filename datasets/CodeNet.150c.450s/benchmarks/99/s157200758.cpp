#include<iostream>
#include<string>
using namespace std;
string mcxi="ixcm";

int mcxi_to_int(string sa){
	int a,b;
	b=0;
	for(int i=0;i<sa.size();i++){
		if('1'<=sa[i] && sa[i]<='9')a=(int)sa[i]-(int)'0',i++;
		else a=1;
		for(int j=0;j<4;j++){
			if(sa[i]==mcxi[j])break;
			a*=10;
		}
		b+=a;
	}
	return b;
}

string int_to_mcxi(int t){
	int a,b;
	int i,j,k;
	string sa="";
	for(i=0;t>0;i++,t/=10){
		a=t%10;
		if(a>0)sa=mcxi[i]+sa;
		if(a>1)sa=(char)(a+'0')+sa;
	}
	return sa;
}

int main(){
	int n;
	int a,b,c;
	string sa,sb;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>sa>>sb;
		cout<<int_to_mcxi(mcxi_to_int(sa)+mcxi_to_int(sb))<<endl;
	}
}

