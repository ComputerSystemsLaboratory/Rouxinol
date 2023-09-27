#include <iostream>
using namespace std;

int u;
int uni[100010];




int oya(int a){
if (uni[a]<0){
    return a;
}
else{
    uni[a]=oya(uni[a]);
    return oya(uni[a]);
}
}
 
bool ren(int a,int b){
    a=oya(a);
    b=oya(b);
    if(a==b){
    return  false;//renketu
    }
    else{
    return true;   //not renketu
    }
}

void con(int a,int b){
	if(ren(a,b)){
		a=oya(a);
		uni[a]=b;
	}
	
}



int main() {
	int n,q;
cin>>n>>q;
	for(u=0;u<n;u++){
	uni[u]=-1;
	}

for(int u=0;u<q;u++){
	int j,a,b;
cin>>j>>a>>b;
if(j==0){
	con(a,b);
}
else{
	if(ren(a,b)==true){
		cout<<0<<endl;
	}
	else{
		cout<<1<<endl;
	}
	
}
	
	
}


	return 0;
}