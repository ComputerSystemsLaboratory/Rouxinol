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
	double x[4];
	double y[4];
	double slope_AB;
	double slope_CD;
	/*****処理部*****/
	cin >> n;
	for(int loop=0;loop<n;loop++){
		for(int i=0;i<4;i++){
			cin >> x[i];
			cin >> y[i];
		}
		slope_AB = (y[0] - y[1])/(x[0] - x[1]);
		slope_CD = (y[2] - y[3])/(x[2] - x[3]);
		if(slope_AB == slope_CD)	cout << "YES" << endl;
		else						cout << "NO" << endl;
	}
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}