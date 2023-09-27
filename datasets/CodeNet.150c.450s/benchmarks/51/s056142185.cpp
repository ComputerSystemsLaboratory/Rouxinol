#include<iostream>
bool count=false;
int student;
bool sdnt[30]={false};
int main(){
for(int i=0;i<28;i++){
		std::cin>>student;
		for(int j=1;j<=30;j++){
			if(student==j)
				sdnt[j]=true;
		}
	}
	for(int i=1;i<31;i++){
		if(sdnt[i]==false)
			std::cout<<i<<std::endl;
	}
}