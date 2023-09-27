#include<iostream>

using namespace std;


int main(){

while(1){
 int m,min,max;
 cin>>m>>min>>max;

 if(m==0&&max==0&&min==0){break;}

 int p[200];
 for(int i=0;i<m;i++){
	cin>>p[i];
 }

 int gap=-1;
 int n=-1;

 
 for(int i=min;i<max+1;i++){
	int g=p[i-1]-p[i];

	if(gap<=g){
		gap=g;
		n=i;
	}
 }
 cout<<n<<endl;
}
return 0;
}
 
