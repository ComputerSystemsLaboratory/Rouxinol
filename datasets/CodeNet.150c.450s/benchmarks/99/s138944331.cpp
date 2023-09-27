#include <iostream>

using namespace std;

int pow(int r){
	int result=1;
	for(int i=0;i<r;i++){
		result *= 10;
	}
	return result;
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char inp[20]={0},out[10]={0};
		int a=0,b=0,t;
		bool num=true;
		cin >> inp;
		for(int j=0;j<10;j++){
			if(inp[j]==0){ break; }
			if(inp[j]=='m'||inp[j]=='c'||inp[j]=='x'||inp[j]=='i'){
				if(num==true){
					t=1;
				}
				num=true;
				a+=t*((inp[j]=='m')?1000:((inp[j]=='c')?100:((inp[j]=='x')?10:1)));
			}
			else{
				t=inp[j]-48;
				num=false;
			}
		}
		cin >> inp;
		num=true;
		for(int j=0;j<10;j++){
			if(inp[j]==0){ break; }
			if(inp[j]=='m'||inp[j]=='c'||inp[j]=='x'||inp[j]=='i'){
				if(num==true){
					t=1;
				}
				num=true;
				b+=t*((inp[j]=='m')?1000:((inp[j]=='c')?100:((inp[j]=='x')?10:1)));
			}
			else{
				t=inp[j]-48;
				num=false;
			}
		}
		int k=0,l=3,m;
		t=a+b;
		//cout <<a<<"+"<<b<<"="<<t <<endl;
		while(t>0){
			m=(int)(t/pow(l));
			if(m==1){
				out[k]=((l==3)?'m':((l==2)?'c':((l==1)?'x':'i')));
				k++;
			}
			else if(m!=0){
				out[k]=m+48;
				out[k+1]=((l==3)?'m':((l==2)?'c':((l==1)?'x':'i')));
				k+=2;
			}
			t=t-m*pow(l);
			l--;
		}
		cout << out <<endl;
	}
}