#include<iostream>
#include<string>

#define rep(i,n) for(int i=0; i<n; i++)

int m[4] = {1000,100,10,1};
char c[4]= {'m','c','x','i'};

int toint(std::string str){
	int d=1;
	int sum = 0;
	rep(i,(int)str.size()){
		if('0' <=str[i] && str[i] <= '9'){
			d=str[i] - '0';
		}else{
			rep(j,4){
				if(c[j] == str[i]){
					sum += m[j] * d;
					d=1;
				}
			}
		}
	}
	return sum;
}

int main(){


	int N;
	int d;
	std::string str1, str2;
	std::cin >> N;
	while(N--){
		std::cin >> str1 >> str2;
		int sum = toint(str1) + toint(str2);
		rep(i,4){
			d = 0;
			while(sum >= m[i]){
				sum -= m[i];
				d++;
			}
			if(d>1)std::cout << d << std::flush;
			if(d>0)std::cout << c[i] << std::flush;
		}
		std::cout << std::endl;
	}
	return 0;
}