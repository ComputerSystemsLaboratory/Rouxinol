#include<iostream>

int main(void)
{
	int i,j,max,tmp,high[10];

	for(i=0;i<10;i++){
		std::cin >> high[i];
	}

	for(i=0;i<3;i++){
		for(j=1,tmp=0,max=high[0];j<10;j++){
			if(max<high[j]){
				max=high[j];
				tmp=j;
			}
		}
		high[tmp]=0;
		std::cout << max << std::endl;
	}
	return 0;
}