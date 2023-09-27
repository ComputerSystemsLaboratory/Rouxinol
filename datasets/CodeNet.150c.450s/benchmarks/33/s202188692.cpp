#include <iostream>
using namespace std;

int main() {
int x ,y ,p;
while(1){
	cin>>x>>y>>p;
if(x==0){
	break;
}
int sum=0,j,l,jmax,lmax;
for(int k=1;k<=p/2;k++){
	jmax=0;
	lmax=0;
	int amin=k*100/(100+x);
	int amax=(k+1)*100/(100+x);
	if((k*100)%(100+x)!=0){
	amin=amin+1;
	}
	if(((k+1)*100)%(100+x)==0){
	amax=amax-1;
	}
	for(int a=amin;a<=amax;a++){
		j=a*(100+y)/100;
		if(jmax<j){
			jmax=j;
		}
	}
	int bmin=(p-k)*100/(100+x);
	int bmax=(p-k+1)*100/(100+x);
	if(((p-k)*100)%(100+x)!=0){
	bmin=bmin+1;
	}
	if((((p-k)+1)*100)%(100+x)==0){
	bmax=bmax-1;
	}
	for(int b=bmin;b<=bmax;b++){
		l=b*(100+y)/100;
		if(lmax<l){
			lmax=l;
		}
	}
	if(sum<(jmax+lmax)){
		sum=jmax+lmax;
	}
}
cout<<sum<<endl;
}

	return 0;
}