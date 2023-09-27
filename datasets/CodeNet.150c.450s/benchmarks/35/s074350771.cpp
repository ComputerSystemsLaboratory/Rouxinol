/*****include*****/
#include <iostream>
#include <fstream>
#include <string>

/*****デバッグ定義*****/
//#define DEBUG
/*****マクロ定義*****/

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/

/*****その他関数置き場*****/

/*****main関数*****/
int main(){
	/*****ファイルオープン*****/
#ifdef DEBUG
	ofstream fout("output.txt");
	ifstream fin("input.txt");
	if(!fout || !fin){
		cout << "Can't open the file.\n";
		return;
	}
#endif
	/*****変数置き場*****/
	int n;
	long int *numbers;
	long int sum;
	long int max_sum;
	/*****処理部*****/
	while(1){
		cin >> n;
		if(n == 0)	break;
		numbers = new long int [n];
		cin >> numbers[0];
		max_sum = numbers[0];
		for(int i=1;i<n;i++){
			cin >> numbers[i];
			sum = 0;
			for(int j=i;j>=0;j--){
				sum += numbers[j];
				if(sum > max_sum)	max_sum = sum;
			}
		}
		cout << max_sum << endl;
	}
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}