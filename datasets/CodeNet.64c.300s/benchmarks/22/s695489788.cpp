#include <iostream>
#include <cmath>
using namespace std;


int main(){

	int size;
	cin >> size;

	struct triangle{
		int elm[3];

		bool isRightTriangle(){
			for (int x = 0; x < 3; x++){
				for (int y = 0; y < 3; y++){
					for (int z = 0; z < 3; z++){
						if (x == z)continue;
						if (y == z)continue;
						if (elm[x] * elm[x] + elm[y] * elm[y] == elm[z] * elm[z])return true;
					}
				}
			}
			return false;
		}
	};

	triangle *ary = new triangle[size];

	for (int i = 0; i < size; i++){
		cin >> ary[i].elm[0] >> ary[i].elm[1] >> ary[i].elm[2];
	}

	for (int i = 0; i < size; i++){
		cout << (ary[i].isRightTriangle() ? "YES" : "NO") << endl;
	}

	delete[] ary;

	return 0;
}