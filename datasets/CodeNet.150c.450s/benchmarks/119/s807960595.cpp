#include<iostream>
using namespace std;

/*bool check(const int x, const int y, const int LandNum, const int aNodeCol[50][50], const int aXMax, const int aYMax){
	if ((x<0 || x >= aXMax) || (y<0 || y >= aYMax) || (aNodeCol[x][y] != 1)){
		return false;
	}
	return true;
}*/

bool LandConfirmedAndMawariCheck(const int x, const int y, const int LandNum, int aNodeCol[50][50], const int aXMax, const int aYMax){
	if (aNodeCol[x][y] == 1){
		aNodeCol[x][y] = LandNum;
		/*if (check(x - 1, y, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x - 1, y, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x - 1, y - 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x - 1, y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x - 1, y + 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x - 1, y + 1, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x + 1, y - 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x + 1, y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x + 1, y, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x + 1, y, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x + 1, y + 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x + 1, y + 1, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x, y - 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x, y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (check(x, y + 1, LandNum, aNodeCol, aXMax, aYMax))LandConfirmedAndMawariCheck(x, y + 1, LandNum, aNodeCol, aXMax, aYMax);*/
		if (!((x - 1<0 || x - 1 >= aXMax) || (y    <0 || y     >= aYMax) || (aNodeCol[x-1][y    ] != 1)))LandConfirmedAndMawariCheck(x - 1, y    , LandNum, aNodeCol, aXMax, aYMax);
		if (!((x - 1<0 || x - 1 >= aXMax) || (y - 1<0 || y - 1 >= aYMax) || (aNodeCol[x-1][y - 1] != 1)))LandConfirmedAndMawariCheck(x - 1, y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (!((x - 1 < 0 || x - 1 >= aXMax) || (y + 1 < 0 || y + 1 >= aYMax) || (aNodeCol[x - 1][y + 1] != 1))){
			LandConfirmedAndMawariCheck(x - 1, y + 1, LandNum, aNodeCol, aXMax, aYMax);
		}
		if (!((x + 1<0 || x + 1 >= aXMax) || (y - 1<0 || y - 1 >= aYMax) || (aNodeCol[x+1][y - 1] != 1)))LandConfirmedAndMawariCheck(x + 1, y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (!((x + 1<0 || x + 1 >= aXMax) || (y    <0 || y     >= aYMax) || (aNodeCol[x+1][y    ] != 1)))LandConfirmedAndMawariCheck(x + 1, y    , LandNum, aNodeCol, aXMax, aYMax);
		if (!((x + 1<0 || x + 1 >= aXMax) || (y + 1<0 || y + 1 >= aYMax) || (aNodeCol[x+1][y + 1] != 1)))LandConfirmedAndMawariCheck(x + 1, y + 1, LandNum, aNodeCol, aXMax, aYMax);
		if (!((x    <0 || x     >= aXMax) || (y - 1<0 || y - 1 >= aYMax) || (aNodeCol[x  ][y - 1] != 1)))LandConfirmedAndMawariCheck(x    , y - 1, LandNum, aNodeCol, aXMax, aYMax);
		if (!((x    <0 || x     >= aXMax) || (y + 1<0 || y + 1 >= aYMax) || (aNodeCol[x  ][y + 1] != 1)))LandConfirmedAndMawariCheck(x    , y + 1, LandNum, aNodeCol, aXMax, aYMax);
		return true;
	}
	return false;
}



int main(void){
	int NodeCol[50][50];
	int a, b, c;
	int XMax, YMax;
	while(1){
		cin >> a >> b;
		if (a == 0&&b == 0)break;
		XMax = a; YMax = b;

		for (int Lone = 0;  Lone < YMax; ++Lone){
			for (int Ltwo = 0; Ltwo < XMax; ++Ltwo){
				cin >> c;
				NodeCol[Ltwo][Lone] = c;
			}
		}
		int t = 2;
		for (int Lone = 0;  Lone < XMax; ++Lone){
			for (int Ltwo= 0; Ltwo < YMax; ++Ltwo){
				if (NodeCol[Lone][Ltwo]==1)
				{
					if (LandConfirmedAndMawariCheck(Lone, Ltwo, t, NodeCol, XMax, YMax))t++;
				}
			}
		}
		cout << t-2<<endl;
	}
	return 0;
}