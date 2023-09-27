#include<iostream>
#include<vector>

int main(){
	int n,m;
	while(std::cin>>n){
		if(n==0)break;
		std::vector<char>table_a(n);std::vector<char>table_b(n);
		for(int i=0;i<n;i++)std::cin>>table_a[i]>>table_b[i];
		std::cin>>m;
		std::vector<char>data(m);
		for(int i=0;i<m;i++)std::cin>>data[i];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(table_a[j]==data[i]){
					data[i]=table_b[j];
					break;
				}
			}
		}
		for(int i=0;i<m;i++)std::cout<<data[i];
		std::cout<<std::endl;
	}	
	return 0;
}