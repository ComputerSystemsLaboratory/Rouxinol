#include<iostream>
#include<vector>
int main(){
	while(1){
		int hit=0,blow=0;
		std::vector<int> a(4);
		std::vector<int> b(4);
		for(int i=0;i<4;i++)std::cin>>a[i];
		for(int i=0;i<4;i++)std::cin>>b[i];
		if(std::cin.eof())break;
		for(int i=0;i<4;i++){
			if(a[i]==b[i])hit++;
			else{
				for(int j=0;j<4;j++){
					if(a[i]==b[j])blow++;
				}
			}
		}
		std::cout<<hit<<" "<<blow<<std::endl;
	}
	return 0;
}