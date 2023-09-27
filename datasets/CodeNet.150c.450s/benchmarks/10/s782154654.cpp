#include <iostream>

int main(void)
{
	using namespace std;
	
	int n;
	cin >> n;

	int num_tenant[4][3][10];
	for(int i = 0; i<4; i++){
		for(int j = 0; j<3; j++){
			for(int k = 0; k<10; k++){
				num_tenant[i][j][k] = 0; 
			}
		}
	}

	for(int i=0; i<n; i++){
		int building,floor,room, v;
		cin >> building;
		cin >> floor;
		cin >> room;
		cin >> v;

		num_tenant[building-1][floor-1][room-1] += v;
	}


	for(int i = 0; i<4; i++){
		for(int j = 0; j<3; j++){
			for(int k = 0; k<10; k++){
				if(num_tenant[i][j][k] <= 0)	cout << " 0";
				else													cout << " " << num_tenant[i][j][k];
			}
			cout << endl;
		}
		if(i <= 2)	cout << "####################" << endl;
	}

	return 0;

}