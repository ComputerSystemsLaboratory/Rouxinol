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
	long int res;
	/*****処理部*****/
	cin >> n;
	res = 1;
	if(n != 0){
		for(int i=2;i<=n;i++){
			res = res * i;
		}
	}
	cout << res << endl;
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}