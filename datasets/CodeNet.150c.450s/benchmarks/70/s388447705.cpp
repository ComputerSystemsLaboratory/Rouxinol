#include <iostream>
int main(){
	int m[12];
	char q;
	m[1]=31,m[2]=29,m[3]=31,m[4]=30,m[5]=31,m[6]=30,m[7]=31,m[8]=31,m[9]=30,m[10]=31,m[11]=30,m[12]=31;
	int mm,d;
	while(std::cin>>mm>>d&&mm!=0&&d!=0){
		int y=0;
		for(int a=1;a<mm;a++){
			y=y+m[a];
		}
		
		if((y+d)%7==1){
			std::cout<<"Thursday"<<std::endl;
		}if((y+d)%7==2){
		std::cout<<"Friday"<<std::endl;
		}
		if((y+d)%7==3){
		std::cout<<"Saturday"<<std::endl;
		}
		if((y+d)%7==4){
		std::cout<<"Sunday"<<std::endl;
		}
		if((y+d)%7==5){
		std::cout<<"Monday"<<std::endl;
		}
		if((y+d)%7==6){
		std::cout<<"Tuesday"<<std::endl;
		}
		if((y+d)%7==0){
			std::cout<<"Wednesday"<<std::endl;
		}
		
	}
	return 0;
}