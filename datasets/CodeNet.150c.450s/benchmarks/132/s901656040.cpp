#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	int n,p,max;
	int stone[51]={};
	int cup;
	bool flag;
	while(1){
		cin >> n >> p;
		max = p;
		for(int i=0;i<n;i++){
			stone[i]=0;
		}
		cup =0;
		if(n==0&&p==0)break;
		while(1){
			if(p>0){
				p-=1;
				stone[cup]+=1;
				if(cup!=n-1)cup+=1;
				else cup = 0;
			}else{
				flag =0;
				for(int i=0;i<n;i++){
					if(stone[i]!=0&&stone[i]!=max){
						flag =1;
					}
				}
				if(flag==0){
					if(cup==0){
						cout << n-1 << endl;
					}else{
						cout << cup-1 <<endl;
					}
					break;
				}else{
					if(stone[cup]>0){
						p+=stone[cup];
						stone[cup]=0;
						if(cup!=n-1)cup+=1;
						else cup = 0;
					}else{
						if(cup!=n-1)cup+=1;
						else cup = 0;
					}
				}
			}
		}
	}
	return 0;
}