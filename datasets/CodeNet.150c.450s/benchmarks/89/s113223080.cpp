#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1000000

int suretsu(int a,int d,int i){
     return a+d*(i-1);
}

int main(){
     bool sosu[MAX+1];
     for(int i=0;i<MAX;i++)sosu[i]=true;
     for(int i=2;i<sqrt(MAX)+1;i++){
	  if(sosu[i]){
	       for(int j=2;j<MAX/i+1;j++)
			sosu[i*j]=false;
	  }
     }
     sosu[1]=false;
     int a,d,n;
     while(cin>>a>>d>>n,a||d||n){
	  int count=0;
	  int i=1;
	  while(count!=n){
	       if(sosu[suretsu(a,d,i)])count++;
	       i++;
	  }
	  cout<<suretsu(a,d,i-1)<<endl;
     }
}