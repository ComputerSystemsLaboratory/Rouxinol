#include<iostream>
#include<vector>	// vectorを使うにはこれが必要
using namespace std;

int main(){
	vector< vector<int> > arr;
    vector<int> coin;
    int n, m, tmp;
    std::cin >> n >> m;
	arr.resize(m);
	for(int i=0; i<m; i++){
		arr[i].resize(n+1);
	}
    coin.resize(m);
    for(int i=0; i<m; i++){
        std::cin >> tmp;
        coin[i] = tmp;
    }
    for (int i=0; i<m; i++){
        for (int j=0; j<=n; j++){
            // arr[i][j] -> a_1, a_2, ..., a_iのコインでj+1円両替する時の最小枚数
            if (i==0 || j==0){
                arr[i][j] = j;
            }
            else {
                if (j-coin[i] >= 0){
                    arr[i][j] = min(arr[i-1][j], arr[i][j-coin[i]] + 1);
                }
                else {
                    arr[i][j] = arr[i-1][j];
                }
            }
            //std::cout << arr[i][j] << "|";
        }
        //std::cout << endl;
    }
    std::cout << arr[m-1][n] << endl;
	return 0;
}
