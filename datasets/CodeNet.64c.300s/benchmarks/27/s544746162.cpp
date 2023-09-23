
#include <iostream>
using namespace std;

int comb(int max,int target){
	int comb = 0;
	for(int i = 3; i <= max; i++){
		for(int j = 2; j < i; j++){
			for(int k = 1; k < j ; k++){
				if( i + j + k == target){
					comb++;
				}
			}
		}
	}
	return comb;
}


int main()
{
	int n,x;
	cin>>n>>x;
	while((n!=0)||(x!=0)){
		int result = comb(n,x);
		cout<<result<<endl;
		cin>>n>>x;
	}
	return 0;
}