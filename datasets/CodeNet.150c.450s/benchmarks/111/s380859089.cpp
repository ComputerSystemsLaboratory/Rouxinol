#include <iostream>
#include <vector>

int main(){

	int n, answer, a;
	std::cin >> n;
	std::vector<int> number(n-1);
	std::vector<long int> move(21,0),moving(21,0);

	for(int i=0;i<n-1;++i){
		std::cin >> number[i];
	}
	std::cin >> answer;

	move[number[0]]=1;

	for(int i=1;i<n-1;i++){
		for(int j=0;j<21;j++){
			if(move[j]!=0){
				if((a=j+number[i])<=20){
					moving[a]+=move[j];
				}
				if((a=j-number[i])>=0){
					moving[a]+=move[j];
				}
				move[j]=0;
			}
		}
		for(int j=0;j<21;j++){
			move[j] = moving[j];
			moving[j]=0;
		}
	}
	std::cout << move[answer] << std::endl;

	return 0;
}
