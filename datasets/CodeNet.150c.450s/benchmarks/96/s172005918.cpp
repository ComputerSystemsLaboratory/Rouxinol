#include <iostream>
#include <string>

#define rep(i,n) for(unsigned int i=0; i<n; i++)

void solve(void){

	int m;					//文字列の行数
	std::string sl;		//文字列格納用ストリング型変数

	char c[10][5] = {
		{},
		{'.',',','!','?',' '},
		{'a','b','c'},
		{'d','e','f'},
		{'g','h','i'},
		{'j','k','l'},
		{'m','n','o'},
		{'p','q','r','s'},
		{'t','u','v'},
		{'w','x','y','z'},
	};

	std::cin >> m;
	while(m--){

		int t = 0;

		std::cin >> sl;

		rep(i,sl.size()-1){
			if(sl[i] == sl[i+1]){
				t++;
			}else{
				if(sl[i]=='7' || sl[i]=='9'){
					t %= 4;
				}
				else if(sl[i]=='1'){
					t %= 5;
				}else{
					t %= 3;
				}
				if(sl[i] != '0'){
					std::cout << c[sl[i]-'0'][t];
				}
				t = 0;
			}
		}
		std::cout << std::endl;
	}
}

int main(void){

	solve();

	return 0;
}