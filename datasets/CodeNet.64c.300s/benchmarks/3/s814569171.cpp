#include <iostream>

int main(){
	int size;
	int *array;
	std::cin>>size;
	array=new int[size];
	for(int i=0;i<size;i++){
		std::cin>>array[i];
	}
	for(int i=size-1;i>=0;i--){
		std::cout<<array[i]<<(i?" ":"");
	}
	std::cout<<std::endl;
	delete[] array;
	return 0;
}