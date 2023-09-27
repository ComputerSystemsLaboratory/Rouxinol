/*****include*****/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

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
	string word;
	int max_length;
	int max_appear;
	string max_string;
	string max_word;
	map<string,int> appear;
	/*****処理部*****/
	max_length = 0;
	max_appear = 0;
	while(1){
		cin >> word;
		if(cin.eof())	break;
		if(appear.find(word) == appear.end()){
			appear[word] = 1;
		}else
			
			appear[word]++;
		if(appear[word] > max_appear){
			//cout << word << " " << appear[word] << " " << max_appear << endl;
			max_appear = appear[word];
			max_word = word;
			//cout << max_word << " " << max_appear << " " << appear[word] << endl;
		}
		if(word.length() > max_length){
			max_length = word.length();
			max_string = word;
		}
	}
	cout << max_word << " " << max_string << endl;
	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}