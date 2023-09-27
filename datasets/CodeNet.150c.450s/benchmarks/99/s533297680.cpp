#include<iostream>
#include<string>

#define rep(i,n) for(int i=0; i<n; i++)

int m[4] = {1000,100,10,1};
std::string c("mcxi");


int toint(std::string str){
	int sum = 0;
	int d = 1;
	rep(i,(int)str.size()){
		if('1'<str[i] && str[i]<='9'){
			d = str[i] - '0';
		}else{
			rep(j,4){
				if(c[j] == str[i]){
					sum += d * m[j];
					d=1;
					break;
				}
			}
		}
	}
	return sum;
}


int main(){


	int d;
	std::string str1,str2;
	int N;
	std::cin >> N;
	while(N--){
		std::cin >> str1 >> str2;
		int sum;
		sum = toint(str1) + toint(str2);
		rep(i,4){
			d=0;
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