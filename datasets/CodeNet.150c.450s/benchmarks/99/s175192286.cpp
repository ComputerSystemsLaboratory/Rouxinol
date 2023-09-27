#include<iostream>
#include<cstring>

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	int n;
	char m[5] = {'m','c','x','i'};
	int num[4] = {1000,100,10,1};

	std::cin >> n;

	rep(h,n){
		char str[2][9];
		int ans[2] = {0,0}, answer;

		rep(i,2){
			memset(str[i],'0',8);
			std::cin >> str[i];
			char mjk;
			rep(j,8){
				mjk = str[i][j];
				if(mjk == '\0')break;
				rep(k,4){
					if(mjk == m[0] || mjk == m[1] ||mjk == m[2] ||mjk == m[3]){
						if (j > 0 && mjk == m[k] && str[i][j - 1] - '0' > 1 && str[i][j - 1] - '0' < 10) {
							ans[i] += (str[i][j - 1]-'0') * num[k];
							break;
						}else if(mjk == m[k]){
							ans[i] += num[k];
							break;
						}
					}
				}
			}
		}
		answer = ans[0] + ans[1];
		rep(i,4){
			if(answer / num[i] > 1){
				std::cout << answer/num[i] << m[i] << std::flush;
				answer %= num[i];
			}else if(answer / num[i] == 1){
				std::cout << m[i] << std::flush;
				answer %= num[i];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}