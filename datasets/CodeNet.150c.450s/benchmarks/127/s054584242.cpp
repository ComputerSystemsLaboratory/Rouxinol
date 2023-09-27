#include<iostream>

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	int n;
	char str[500][73];
	std::cin >> n;
	int strsize;
	int moji;
	int ans;
	rep(h,n){
		std::cin >> str[0];
		strsize = 0;
		rep(i,73){
			if(str[0][i] == '\0'){
				strsize = i;
				break;
			}
		}
		rep(i,strsize-1){
			rep(j,7){
				switch(j){
				case 0:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][k] = str[0][k];
						else str[1 + j + 7 * i][k] = str[0][strsize + i - k];
					}
					break;
				case 1:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][k] = str[0][i - k];
						else str[1 + j + 7 * i][k] = str[0][k];
					}
					break;
				case 2:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][k] = str[0][i - k];
						else str[1 + j + 7 * i][k] = str[0][strsize+i-k];
					}
					break;
				case 3:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][strsize-1-i+k] = str[0][k];
						else str[1 + j + 7 * i][k-i-1] = str[0][k];
					}
					break;
				case 4:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][strsize - 1 - i + k] = str[0][k];
						else str[1 + j + 7 * i][strsize-k-1] = str[0][k];
					}
					break;
				case 5:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][strsize-k-1] = str[0][k];
						else str[1 + j + 7 * i][k-i-1] = str[0][k];
					}
					break;
				case 6:rep(k,strsize) {
						if (k <= i) str[1 + j + 7 * i][strsize - k - 1] = str[0][k];
						else str[1 + j + 7 * i][strsize-k-1] = str[0][k];
					}
					break;
				}
			}
		}
		rep(k,7*(strsize-1)+1) {
			if(str[k][0] == '0')continue;
			rep(i,7*(strsize-1)+1) {
				if(i == k || str[i][0] == '0')continue;
				moji = 0;
				rep(j,strsize) {
					if (str[i][j] != str[k][j])
						break;
					else
						moji++;
				}
				if (moji == strsize)
					str[i][0] = '0';
			}
		}
		ans=0;
		rep(i,(strsize-1)*7+1){
			if(str[i][0] != '0')ans++;
		}
		std::cout << ans << std::endl;
	}
	return 0;
}