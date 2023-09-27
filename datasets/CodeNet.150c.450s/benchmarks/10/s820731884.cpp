#include <iostream>
#define RESIDENCE	4
#define FLOOR		3
#define ROOM		10

int main(){
	int array[RESIDENCE][FLOOR][ROOM]={};
	int n;
	std::cin>>n;

	for(int i=0;i<n;i++){
		int data[4];
		for(int j=0;j<4;j++){
			std::cin>>data[j];
		}
		array[data[0]-1][data[1]-1][data[2]-1]+=data[3];
	}
	for(int i=0;i<RESIDENCE;i++){
		if(i!=0){
			std::cout<<"####################"<<std::endl;
		}
		for(int j=0;j<FLOOR;j++){
			for(int k=0;k<ROOM;k++){
				std::cout<<" "<<array[i][j][k];
			}
			std::cout<<std::endl;
		}
	}
}