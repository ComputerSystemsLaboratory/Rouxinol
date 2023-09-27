#include <iostream>

int hit(int x[],int y[]){
	int num = 0;
	for(int i = 0; i < 4; ++i){
		if(x[i] == y[i])
			++num;
	}
	return num;
}

int blow(int x[],int y[]){
	int num = 0;
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4;++j){
			if(x[i] == y[j])
				++num;
		}
	}
	return num - hit(x,y);
}

int checkDomain(int x[],int y[]){
	for(int i = 0; i < 4; ++i)
		if((x[i] / 10) != 0 || (y[i] / 10) != 0) return 0;
		
	return 1;
}

int checkNumber(int x[],int y[]){
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			if(i != j && (x[i] == x[j] || y[i] == y[j])) return 0;
		}
	}
	return 1;
}

int main(){
	int a[4];
	int b[4];
	
	while(std::cin >> a[0] >> a[1] >> a[2] >> a[3] ){
		std::cin >>b[0] >> b[1] >> b[2] >> b[3];
		if(checkDomain(a,b) && checkNumber(a,b)){
					std::cout << hit(a,b) << " " << blow(a,b) << std::endl;
		}
	}
	
}