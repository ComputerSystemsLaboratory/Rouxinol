//fBNÌZpè
//Dirichlet's Theorem on Arithmetic Progressions
#include<iostream>
#include<cmath>
#define NUM 1000000
using namespace std;
int p[NUM];
int main(){
	int a,d,n;
	int i,j;
	int cnt;

	/*fe[uì¬*/
	p[0]=0;
	p[1]=0;
	for(i=2;i<NUM;i++)p[i]=1;

	for(i=2;i<sqrt(NUM)+1;i++){
		if(p[i]){
			for(j=i*2;j<NUM;j+=i){
				p[j]=0;//{Í­
			}
		}
	}
	while(cin>>a>>d>>n,(a||d||n)){
		cnt=0;
		for(i=a;;i+=d){
			if(p[i]==1)cnt++;
			if(cnt==n)break;
		}
		cout<<i<<endl;
	}
	return 0;
}