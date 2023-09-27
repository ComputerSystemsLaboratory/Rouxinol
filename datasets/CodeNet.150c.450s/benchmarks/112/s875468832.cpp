#include<iostream>
#include<string>
#include<vector>
std::string r1[100],r2[100],s[1000000];
int main(){
	int n;
	int m;
	while(true){
	std::cin>>n;
	if(n==0)break;
	for(int i=0;i<n;i++)
		std::cin>>r1[i]>>r2[i];
	std::cin>>m;
	for(int i=0;i<m;i++)
		std::cin>>s[i];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(r1[j]==s[i]){
				s[i]=r2[j];
				goto p;
			}
		}
		p:;
	}
	for(int i=0;i<m;i++){
		if(i==m-1)
			std::cout<<s[i]<<std::endl;
		else{
	        std::cout<<s[i];
		}
	}
   }
}