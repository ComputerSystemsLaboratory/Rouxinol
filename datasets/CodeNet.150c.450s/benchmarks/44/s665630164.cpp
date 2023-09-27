#include <iostream>
#include <array>

int main(){
	int num1,num2,num3,num4;
	while(std::cin >> num1 >> num2 >> num3 >> num4){
		//player A number
		std::array<int, 4> a_num = {{num1, num2, num3, num4}};
		std::cin >> num1 >> num2 >> num3 >> num4;
		//player B number
		std::array<int, 4> b_num = {{num1, num2, num3, num4}};
		
		int hit=0,blow=0;
		for(int i=0; i<4; ++i){
			for(int j=0; j<4; ++j){
				//equal numbers
				if(a_num[i] == b_num[j]){
					//same place number
					if(i == j){
						++hit;
					}
					//different place number
					else{
						++blow;
					}
				}
			}
		}
		//hit and blow output
		std::cout << hit << " " << blow << std::endl;
	}
}