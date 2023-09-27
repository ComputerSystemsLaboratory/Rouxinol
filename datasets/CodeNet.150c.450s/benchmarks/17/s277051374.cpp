/*****include*****/
#include <iostream>
#include <fstream>

/*****デバッグ定義*****/
//#define DEBUG
/*****マクロ定義*****/

/*****名前空間*****/
using namespace std;

/*****グローバル変数置き場*****/
int number[5];

/*****その他関数置き場*****/
void Q_sort(int left,int right){
	int threshold = (number[left] + number[right])/2;
	int i;
	int j;
	i = left;
	j = right;
	do{
		while(number[i] < threshold)	i++;
		while(number[j] > threshold)	j--;
		if(i <= j){
			int swap = number[i];
			number[i] = number[j];
			number[j] = swap;
			i++;
			j--;
		}
	}while(i <= j);
	if(j > left)	Q_sort(left,j);
	if(i < right)	Q_sort(i,right);
}
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
	for(int i=0;i<5;i++)	cin >> number[i];
	Q_sort(0,4);
	for(int i=0;i<5;i++){
		cout << number[4-i];
		if(i==4)	cout << endl;
		else		cout << " ";
	}
	/*****処理部*****/

	/*****処理終了後*****/
#ifdef DEBUG
	fout.close();
	fin.close();
#endif
	return 0;
}