#include<map>
#include<iostream>
#include<string>

int main(){
	int num;
	std::cin >> num;
	
	std::map<std::string,int> dic;
	
	for(int i=0;i<num;i++){
		std::string process,key;
		
		std::cin >> process >> key;
		
		if(process[0]=='i'){
			dic[key]=1;
		}else{
			if(dic[key]==0){
				std::cout << "no" << std::endl;
			}else{
				std::cout << "yes" << std::endl;
			}
		}
	}
	
	return 0;
}