#include <iostream>
#include <string>

using namespace std;

int N = 0;
int map[21][21] = { 0 }; //map[w][h]
int w, h;

int check(int cw, int ch){
//	cout << cw << "cheching" << ch << endl;
	if (  (cw >= 1) && (cw <= w) && (1 <= ch) && (ch <= h) ){
		if (map[cw][ch] == 0){
			map[cw][ch] = 2;
			N++;
			check(cw + 1, ch);
			check(cw, ch + 1);
			check(cw - 1, ch);
			check(cw, ch - 1);
		}
	}
	return(0);
}


int main(void){
	int i, j;
	int sw, sh;

	string input;
	cin >> w >> h;

	while (w != 0 && h != 0){
	
		for (i = 0; i < h; i++){
			cin >> input;
			for (j = 0; j < w; j++){
				if (input[j] == '.') map[j + 1][i + 1] = 0;
				else{	if(input[j] == '#') map[j + 1][i + 1] = 1;
						else{
							map[j + 1][i + 1] = 2;
							sw = j + 1; sh = i + 1;
						}
				}
			}
		}



		map[sw][sh] = 0;

/*		for (i = 0; i < h; i++){
			for (j = 0; j < w; j++){
				cout << map[j + 1][i + 1];
			}
			putchar('\n');
		}
		*/
		N = 0;
		check(sw,sh);

/*		for (i = 0; i < h; i++){
		for (j = 0; j < w; j++){
		cout << map[j + 1][i + 1];
		}
		putchar('\n');
		}
*/
		cout << N << endl;
		cin >> w >> h;
	}



	return(0);
}