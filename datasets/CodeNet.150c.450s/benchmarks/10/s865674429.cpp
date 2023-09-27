#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

const int iNumberOfRooms = 10;
const int iNumberOfFloors = 3;
const int iNumberOfBuildings = 4;

class info {
public:
	int mb, mf, mr, mv;
	info(int b, int f, int r, int v)
	{
		mb = b;
		mf = f;
		mr = r;
		mv = v;
	}
};

class house {
private:
	int npeople[iNumberOfBuildings][iNumberOfFloors][iNumberOfRooms];
public:

	house()
	{
		memset(npeople, 0, sizeof(npeople));
	}

	void regInout(int b, int f, int r, int v)
	{
		npeople[b - 1][f -1][r - 1] += v;
	}

	void regInout(info &inf)
	{
		npeople[inf.mb - 1][inf.mf - 1][inf.mr - 1] += inf.mv;
	}

	int getPplInARoom(int b, int f, int r)
	{
		return npeople[b][f][r];
	}
};



int main()
{
	int n;
	cin >> n;

	house h;

	vector<info> vInfo;

	for (int i = 0; i < n; i++)
	{
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		info inf(b, f, r, v);
		vInfo.push_back(inf);
	}

	for (int i = 0; i < vInfo.size(); i++)
	{
		h.regInout(vInfo.at(i));
	}

	for (int i = 0; i < iNumberOfBuildings; i++)
	{
		for (int j = 0; j < iNumberOfFloors; j++)
		{
			for (int k = 0; k < iNumberOfRooms; k++)
			{
				cout << " " << h.getPplInARoom(i, j, k);
			}
			cout << endl;
		}
		if ( i != iNumberOfBuildings - 1)
			cout << "####################" << endl;
	}

	return 0;
}