#include<iostream>
#include<vector>

int main(){
	std::vector<int> A(4);
	std::vector<int> B(4);
	int a,b,c,d;
	while(std::cin>>a){
		A[0]=a;
		for(int i=1;i<4;++i)std::cin>>A[i];
		for(int i=0;i<4;++i)std::cin>>B[i];
		int hit=0,blow=0;
		for(int i=0;i<4;++i){
			for(int j=0;j<4;++j){
				if(A[i]==B[j]&&i==j)hit++;
				if(A[i]==B[j]&&i!=j)blow++;
			}
		}
		std::cout<<hit << " " << blow <<std::endl;
	}
	return 0;
}