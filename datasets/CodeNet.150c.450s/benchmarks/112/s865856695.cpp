#include<iostream>
#include<vector>
#include<string>

int main(){
	while(1){
		int a=0;
		std::cin >> a;
		if(a==0)break;
		std::string str;
		for (int i=0 ; i<2*a ; i++){
			str.push_back (' ');
		}

		char c;
		for (int i=0 ; i<2*a ; i++){
			std::cin>> c;
			str[i]=c;
			c=' ';
		}
		int b=0;
		std::cin >>b;
		std::string str1;
		for(int i=0 ; i<b ; i++){
			str1.push_back (' ');
		}
		char d;
		for (int i=0 ; i<b ; i++){
			std::cin>> d;
			str1[i]=d;
			d=' ';
		}
		int x=0;
		for(int j=0 ; j<b; j++){
			for(int i=0 ; i<2*a ; i=i+2){
				if(str1[j]==str[i]){
					std::cout<<str[i+1];
					x++;
				}
			}
			if(x==0)std::cout<<str1[j];
			x=0;
		}
		std::cout<<std::endl;
	}
return 0;
}