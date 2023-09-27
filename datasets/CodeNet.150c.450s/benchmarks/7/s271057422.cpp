#include<iostream>

int main(){
	int a[10],i,n,j;

	for(i=0;i<10;i++){
		std::cin >> a[i];
		}

	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				n = a[i];
				a[i] = a[j];
				a[j] = n;
				}
			}
		}
	for(i=0;i<3;i++){
		std::cout << a[i] << std::endl;;
		}
	
	return 0;
}