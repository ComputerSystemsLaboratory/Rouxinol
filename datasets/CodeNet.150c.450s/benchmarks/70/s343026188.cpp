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
	int month_table[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int month;
	int date;
	int date_num;
	/*****処理部*****/
	while(1){
		cin >> month >> date;
		if(month == 0)	break;
		month--;	//配列の番号に合わせる
		date_num = 0;
		for(int i=0;i<month;i++)
			date_num += month_table[i];
		date_num += date;
		date_num = date_num % 7;
		switch(date_num){
		case 0:
			cout << "Wednesday" << endl;
			break;
		case 1:
			cout << "Thursday" << endl;
			break;
		case 2:
			cout << "Friday" << endl;
			break;
		case 3:
			cout << "Saturday" << endl;
			break;
		case 4:
			cout << "Sunday" << endl;
			break;
		case 5:
			cout << "Monday" << endl;
			break;
		case 6:
			cout << "Tuesday" << endl;
			break;
		}
	}
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}