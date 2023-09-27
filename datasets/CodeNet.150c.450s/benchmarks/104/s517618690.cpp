#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

struct THorizonalLine
{
	int Left;
	int Right;
};

int main()
{
	int w;
	cin >> w;
	int n;
	cin >> n;
	vector<int> StartingPoint(w);
	for(int i = 0; i < w; i++){
		StartingPoint[i] = i+1;
	}
	for(int i = 0; i < n; i++){
		THorizonalLine HorizonalLine;
		scanf("%d,%d",&HorizonalLine.Left,&HorizonalLine.Right);
		swap(StartingPoint[HorizonalLine.Left-1], StartingPoint[HorizonalLine.Right-1]);
	}
	for(int i = 0; i < w; i++){
		cout << StartingPoint[i] << endl;
	}
	return 0;
}