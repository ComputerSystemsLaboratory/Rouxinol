#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#define INPUT_MAX (int)20000
#define INPUT_MIN (int)1



class CAREA
{
	public:
		CAREA();
		void CalcArea(string str);			//各水たまりの面積を計算する関数
		void DispArea(void);				//結果表示関数
	private:
		int indexSlash;						//slashPositionの添え字
		int indexPuddle;					//puddleAreaとpuddlePositionの添え字
		int slashPosition[INPUT_MAX];		//＼が出た位置
		int puddleCpy;						//水たまりの面積の計算用
		int puddleArea[INPUT_MAX/2];		//各水たまりの面積
		int puddlePosition[INPUT_MAX/2];	//水たまりがある左端の位置
		int sumArea;						//水たまりの面積の合計
};

CAREA::CAREA()
{
	indexSlash = 0;
	indexPuddle = 0;
	memset(slashPosition, 0, sizeof(slashPosition));
	puddleCpy = 0;
	memset(puddleArea, 0, sizeof(puddleArea));
	memset(puddlePosition, 0, sizeof(puddlePosition));
	sumArea = 0;
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
			slashPosition[indexSlash] = i;
			indexSlash++;
		}
		else if(str[i] == '_'){
			//処理なし
		}
		else if(str[i] == '/'){
			if(indexSlash == 0){
				//対になる＼がなければ処理なし
			}
			else{
				puddleCpy = i - slashPosition[indexSlash - 1];
				
				if(indexPuddle == 0){
					//水たまりの面積が1つも格納されていなければ面積と位置をそのまま格納
					puddlePosition[indexPuddle] = slashPosition[indexSlash - 1];
					puddleArea[indexPuddle] = puddleCpy;
					indexPuddle++;
				}
				else{
					//すでに格納されている水たまりと合わせて1つの場合、水たまりを足し合わせる
					while(slashPosition[indexSlash - 1] < puddlePosition[indexPuddle - 1]){
						indexPuddle--;
						puddleCpy += puddleArea[indexPuddle];
						puddleArea[indexPuddle] = 0;
						puddlePosition[indexPuddle] = 0;
						
						if(indexPuddle == 0){
							break;
						}
					}
					
					puddleArea[indexPuddle] = puddleCpy;
					puddlePosition[indexPuddle] = slashPosition[indexSlash - 1];
					indexPuddle++;
				}
				
				indexSlash--;
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
		sumArea += puddleArea[i];
	}
	//水たまりの面積の合計を表示
	cout << sumArea << endl;
	//水たまりの数を表示
	cout << indexPuddle;
	
	//各水たまりの面積を表示
	for(int i = 0; i < indexPuddle; i++){
		cout << ' ' << puddleArea[i];
	}
	cout << endl;
}


int main(void)
{
	CAREA area;
	
	string str;
	cin >> str;
	
	area.CalcArea(str);
	area.DispArea();
	
	
	return 0;
}


