#include<iostream>
int main(){
	int n;
	int a[100];
	int i,j;
	int mini;
	int counter = 0;

	std::cin >> n;
	for(i=0;i<n;i++){
		std::cin >> a[i];
	}

	for(i=0;i<n;i++){
		mini = i;
		for(j=i;j<n;j++){
			if(a[j] < a[mini]){
				mini = j;
			}
		}
		std::swap(a[i],a[mini]);
		if(i!=mini)counter++;
	}

	for(i=0;i<n;i++){
		if(i>0){
			std::cout << " ";
		}
		std::cout << a[i];
	}
	std::cout << "\n" << counter << "\n";

	return (0);
}