#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){

	int n;
	cin>>n;
	if(n==0)break;

	string f[n];
	int u=0,subu=0,d=0,subd=0,sum=0;
	
	for(int i=0;i<n;i++){

	cin>>f[i];

}

	for(int i=0;i<n;i++){
	
	if(f[i]=="lu"&&subu==0&&subd==0){
	subu++;
	}
	else if(f[i]=="ru"&&subu==0&&subd==0){
	subu--;
	}
	else if(f[i]=="ru"&&subu==1&&subd==0){
	u++;
	subu=0;
	}
	else if(f[i]=="lu"&&subu==-1&&subd==0){
	u++;
	subu=0;
	}

	else if(f[i]=="ld"&&subd==0&&subu==0){
	subd++;
	}
	
	else if(f[i]=="rd"&&subd==0&&subu==0){
	subd--;
	}
	
	else if(f[i]=="rd"&&subd==1&&subu==0){
	d++;
	subd=0;
	}
	else if(f[i]=="ld"&&subd==-1&&subu==0){
	d++;
	subd=0;
	}
	
	else{
	subd=0;
	subu=0;
	}
	}
	cout<<u+d<<endl;



}
	
}

