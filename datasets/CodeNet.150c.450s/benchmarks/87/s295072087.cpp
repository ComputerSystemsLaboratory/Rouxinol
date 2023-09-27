#include <iostream>
using namespace std;

int a[10][5];
int check(int i,int j,int res){
	if(a[i][j] == 0)return 0;
	if(j == 4)return res;
	if(a[i][j] != a[i][j+1])return res;
	if(a[i][j] == a[i][j+1])return check(i,j+1,res+1);
}

int main(){
	int n,x,m;
	int count;
	int score;
	while(1){
		cin >> n;
		if(n == 0)break;
		for(int i = 0;i < 10;i++){
			for(int j = 0;j < 5;j++){
				a[i][j] = 0;
			}
		}
		m = 0;
		for(int i = 10 - n;i < 10;i++){
			for(int j = 0;j < 5;j++){
				cin >> a[i][j];
			}
			m++;
		}

		score = 0;
		while(1){
			/*
		for(int i = 0;i < 10;i++){
			for(int j = 0;j < 5;j++){
				cout << a[i][j] <<" ";
			}
			cout << endl;
		}
			*/
			count = 0;
			m = 0;
			for(int i = 9;m < n;i--){
				for(int j = 0;j < 5;j++){
					x = check(i,j,1);
					if(x > 2){
						count++;
						score += a[i][j] * x; 
						for(int k = j;k < j + x;k++){
							a[i][k] = 0;
						}
						break;
					}
				}
				m++;
			}
			//cout << count <<endl;
			if(count == 0)break;
			for(int k = 0;k < count;k++){
				for(int j = 0;j < 5;j++){
					m = 0;
					for(int i = 9;m < n;i--){
						if(a[i][j] == 0)swap(a[i][j],a[i-1][j]);
						m++;
					}
				}
			}
		}

		cout << score <<endl;
	}
	return 0;
}