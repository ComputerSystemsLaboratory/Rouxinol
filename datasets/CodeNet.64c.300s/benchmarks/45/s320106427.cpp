#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while(1){
		int n,m,p,x;
		int sum=0;
		int memo;
		cin >>n>>m>>p;
		if(n==0&&m==0&&p==0) break;
		for(int i =1;i<=n;i++){
			cin>>x;
			sum+=x;
			if(i==m) memo =x;
		}
		if(memo !=0)sum = sum*(100-p)/memo;
		else sum =0;
		cout <<sum <<endl;
	}


	return 0;
}