#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
	int n,m,p;
	while(cin>>n>>m>>p,n||m||p){
		int num,sum=0;;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
			if(i==m-1){
				num=x;
			}
			
		}
		sum*=100;
		sum=sum*(100-p)/100;
		
		if(num==0){
			cout<<0<<endl;
		}else{
			cout<<sum/num<<endl;
		}
	}
	return 0;
}