#include<iostream>
int main(){
	using namespace std;
	int a;
	int height[10];
	int i = 10;
	int tmp;

	while(i){
		cin>>a;
		height[10-(i--)]=a;
	}

	for(int j=0;j<9;j++){
		for(int k=j+1;k<10;k++){
			if(height[j]<height[k]){
				tmp = height[j];
				height[j] = height[k];
				height[k] = tmp;
			}

		}
	}

	cout<<height[0]<<endl;
	cout<<height[1]<<endl;
	cout<<height[2]<<endl;

    return 0;
}