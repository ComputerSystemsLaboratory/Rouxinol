#include<iostream>
#include<fstream>

using namespace std;

	ifstream fin;
	ofstream fout;

	//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp

	int gomi = 0;

	int a[52][52] = {};
	int check(int, int);

	int main(){

		fin.open("input.txt");
		fout.open("output.txt");

		//		int w = 0, h = 0;
		int width = 0, height = 0;
		int count = 0;


		while (1){
			for (int i = 0; i < 50; i++)
				for (int j = 0; j < 50; j++)
					a[i + 1][j + 1] = 0;

			cin >> width >> height;
			if (width == 0 && height == 0)break;

			for (int i = 0; i < height; i++){
				for (int j = 0; j < width; j++){
					//初期化
					gomi = a[i + 1][j + 1] = 0;

					cin >> a[i + 1][j + 1];
				}
			}

			for (int i = 0; i < height; i++){
				for (int j = 0; j < width; j++){
					if (a[i + 1][j + 1] == 1){
						check(i + 1, j + 1);
						a[i + 1][j + 1] = 1;
						count++;
					}
				}
			}
			cout << count << endl;
			fout << count << endl;

			//初期化
			count = 0;
			for (int i = 0; i < height; i++){
				for (int j = 0; j < width; j++){
					a[i + 1][j + 1] = 0;
				}
			}
		}
	}

	int check(int y, int x){
		for (int i = -1; i <= 1; i++){
			for (int j = -1; j <= 1; j++){
				if (i + j != 0 || i - j != 0){
					if (a[y + i][x + j] == 1){
						a[y + i][x + j] = 0;
						check(y + i, x + j);
					}
				}
			}
		}
		return 0;
	}

/*	int check(int y, int x){
		if (a[y + 1][x] == 1){
			a[y + 1][x] = 0;
			check(y + 1, x);
		}
		//-----------------------------
		if (a[y][x + 1] == 1){
			a[y][x + 1] = 0;
			check(y, x + 1);
		}
		//-----------------------------
		if (a[y - 1][x] == 1){
			a[y - 1][x] = 0;
			check(y - 1, x);
		}
		//-----------------------------
		if (a[y][x - 1] == 1){
			a[y][x - 1] = 0;
			check(y, x - 1);
		}
		//-----------------------------
		if (a[y + 1][x + 1] == 1){
			a[y + 1][x + 1] = 0;
			check(y + 1, x + 1);
		}
		//-----------------------------
		if (a[y + 1][x - 1] == 1){
			a[y + 1][x - 1] = 0;
			check(y + 1, x - 1);
		}
		//-----------------------------
		if (a[y - 1][x + 1] == 1){
			a[y - 1][x + 1] = 0;
			check(y - 1, x + 1);
		}
		//-----------------------------
		if (a[y - 1][x - 1] == 1){
			a[y - 1][x - 1] = 0;
			check(y - 1, x - 1);
		}
		//-----------------------------
		return 0;
	}*/