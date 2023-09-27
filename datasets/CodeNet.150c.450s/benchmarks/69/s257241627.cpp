#include <iostream>
#include <vector>
int ball[10];
int left = 0,right = 0;
bool dfs(int de,int left, int right){//??????????????§???????????????
	if(de == 10)return true;
	if(left < ball[de] ){
		left = ball[de];
		return dfs(de + 1,left,right);
	}
	if(right < ball[de]){
		right = ball[de];
		return dfs(de + 1,left,right);
	}
	return false;
}

int main(){
	int n;
	std::cin >> n;
	while(n--){
		for(int i = 0; i < 10; ++i){
			std::cin >> ball[i];
		}
		left = 0, right = 0;
		if(dfs(0,0,0))std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
}