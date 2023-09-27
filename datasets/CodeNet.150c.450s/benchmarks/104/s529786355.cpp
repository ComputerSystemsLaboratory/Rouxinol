#include <iostream>
#include <vector>
using namespace std;

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
		int HorizonalLineLeft;
		int HorizonalLineRight;
		char Dummy;
		cin >> HorizonalLineLeft >> Dummy >> HorizonalLineRight;
		swap(StartingPoint[HorizonalLineLeft-1], StartingPoint[HorizonalLineRight-1]);
	}
	for(int i = 0; i < w; i++){
		cout << StartingPoint[i] << endl;
	}
	return 0;
}