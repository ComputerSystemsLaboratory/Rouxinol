#include <iostream>

int main(){
	using namespace std;
	int build, floor, room, resident, data;
	int room_data[15][10] = {};

	cin >> data;

	while (data>0){
		cin >> build >> floor >> room >> resident;
		switch (build){
		case 1:
			room_data[floor-1][room-1] += resident;
			break;
		case 2:
			room_data[3 + floor][room-1] += resident;
			break;
		case 3:
			room_data[7 + floor][room-1] += resident;
			break;
		case 4:
			room_data[11 + floor][room-1] += resident;
			break;
		}
		data--;
	}
	for (int i = 0; i<15; i++)
	{
		if (i == 3 || i == 7 || i == 11)
			cout << "####################" << endl;
		else{
			for (int j = 0; j<10; j++)
			{
				if (room_data[i][j]<0)
					room_data[i][j] = -room_data[i][j];
				cout << ' ' << room_data[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}