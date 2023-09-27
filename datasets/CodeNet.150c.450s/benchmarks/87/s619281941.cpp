#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<string>
#include<cmath>
#include<set>
#include<queue>
#include<bitset>
#include<iomanip>
#include<cctype>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep2(i,a,b) for (int (i)=a;(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()

using namespace std;
const int inf = 1001001000;

void print(vector<vector<int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<vector<long long int>> a){
	for (int i=0;i<a.size();i++){
		for (int j=0;j<a[i].size();j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void print(vector<int> a){
    int n = a.size();
    for (int j=0;j<n;j++) {
        if (j != n-1) cout << a[j] << " ";
        else cout << a[j] << endl;
    }
}




void func(int H){
	int table[H][5];

	for(int i = 0; i < H; i++){
		for(int k = 0; k < 5; k++)scanf("%d",&table[i][k]);
	}

	bool FLG;
	int count = 0;

	while(true){

		FLG = false;

		for(int i = 0; i < H; i++){
			for(int k = 0,p = 0; k <= 2; k++){
				if(table[i][k] == -1)continue;
				for(p = 1; k+p < 5 && table[i][k+p] == table[i][k]; p++);
				if(p >= 3){
					for(int a = k; a < k+p; a++){
						count += table[i][a];
						table[i][a] = -1;
						FLG = true;
					}
					break;
				}
			}
		}

		for(int col = 0; col < 5; col++){
			for(int row = H-2,i = 0; row >= 0; row--){
				if(table[row][col] != -1){
					for(i = row+1; i < H && table[i][col] == -1; i++);
					if(i > row+1){
						table[i-1][col] = table[row][col];
						table[row][col] = -1;
					}
				}
			}
		}

		if(!FLG)break;
	}

	printf("%d\n",count);
}


int main(){

	int H;

	while(true){
		scanf("%d",&H);
		if(H == 0)break;

		func(H);
	}

    return 0;
}
