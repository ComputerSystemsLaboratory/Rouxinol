// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D&lang=jp
#include<iostream>
#include<string>
#include<cstring>
using namespace std;



class CAREA
{
	public:
		CAREA();
		void CalcArea(string str);			//各水たまりの面積を計算する関数
		void DispArea(void);				//結果表示関数
		static const int INPUT_MAX = 20000;
		static const int INPUT_MIN = 1;
	private:
		int indexbackSlash;
		int indexPuddle;
		int backSlash[INPUT_MAX];			//＼が出た位置
		int cpy;							//水たまりの面積の計算用
		int area[INPUT_MAX/2];		//各水たまりの面積
		int areaPosition[INPUT_MAX/2];		//水たまりがある左端の位置
		int sumArea;						//水たまりの面積の合計
};

CAREA::CAREA() : indexbackSlash(0), indexPuddle(0), backSlash(), cpy(0),
				 area(), areaPosition(), sumArea(0){
}

/*
-------------------------------------
関数名：CalcArea
	入力：str(地域の断面図)
	return：なし
-------------------------------------
*/
void CAREA::CalcArea(string str){
	for(int i = 0; i < (int)str.size(); i++){
		if(str[i] == '\0'){
			break;
		}
		else if(str[i] == '\\'){
			//＼の位置を格納
			backSlash[indexbackSlash] = i;
			indexbackSlash++;
		}
		else if(str[i] == '_'){
			//処理なし
		}
		else if(str[i] == '/'){
			if(indexbackSlash == 0){
				//対になる＼がなければ処理なし
			}
			else{
				cpy = i - backSlash[indexbackSlash - 1];
				
				if(indexPuddle == 0){
					//水たまりの面積が1つも格納されていなければ面積と位置をそのまま格納
					areaPosition[indexPuddle] = backSlash[indexbackSlash - 1];
					area[indexPuddle] = cpy;
					indexPuddle++;
				}
				else{
					//すでに格納されている水たまりと合わせて1つの場合、水たまりを足し合わせる
					while(backSlash[indexbackSlash - 1] < areaPosition[indexPuddle - 1]){
						indexPuddle--;
						cpy += area[indexPuddle];
						area[indexPuddle] = 0;
						areaPosition[indexPuddle] = 0;
						
						if(indexPuddle == 0){
							break;
						}
					}
					
					area[indexPuddle] = cpy;
					areaPosition[indexPuddle] = backSlash[indexbackSlash - 1];
					indexPuddle++;
				}
				
				indexbackSlash--;
			}
		}
		else{
			//入ってくることはない
		}
	}
}


/*
-------------------------------------
関数名：DispArea
	入力：なし
	return：なし
-------------------------------------
*/
void CAREA::DispArea(void)
{
	for(int i = 0; i < indexPuddle; i++){
		sumArea += area[i];
	}
	//水たまりの面積の合計を表示
	cout << sumArea << endl;
	//水たまりの数を表示
	cout << indexPuddle;
	
	//各水たまりの面積を表示
	for(int i = 0; i < indexPuddle; i++){
		cout << ' ' << area[i];
	}
	cout << endl;
}


int main(void)
{
	CAREA* pArea = new CAREA;
	
	string str;
	cin >> str;
	
	pArea->CalcArea(str);
	pArea->DispArea();
	
	delete pArea;
	
	return 0;
}


