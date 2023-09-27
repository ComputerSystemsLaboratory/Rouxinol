#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int dice[6];
	for(int n=0; n<6; n++)
		cin >> dice[n];

	int mae, ue;
	int k_mae, k_ue;
	int q;
	cin >> q;

	for(int n=0; n<q; n++){
		cin >> ue >> mae;
		for(int num=0; num<6;num++)
		{
			if(dice[num]==ue)
				k_ue = num;
			if(dice[num]==mae)
				k_mae = num;
		}

		if (k_ue==0)
		{
			if(k_mae==1)
				cout << dice[2] << endl;
			if(k_mae==2)
				cout << dice[4] << endl;
			if(k_mae==4)
				cout << dice[3] << endl;
			if(k_mae==3)
				cout << dice[1] << endl;
		}

		if (k_ue==1)
		{	
			if(k_mae==0)
				cout << dice[3] << endl;
			if(k_mae==3)
				cout << dice[5] << endl;
			if(k_mae==5)
				cout << dice[2] << endl;
			if(k_mae==2)
				cout << dice[0] << endl;
		}

		if (k_ue==2)
		{
			if(k_mae==0)
				cout << dice[1] << endl;
			if(k_mae==1)
				cout << dice[5] << endl;
			if(k_mae==5)
				cout << dice[4] << endl;
			if(k_mae==4)
				cout << dice[0] << endl;
		}

		if (k_ue==3)
		{
			if(k_mae==1)
				cout << dice[0] << endl;
			if(k_mae==0)
				cout << dice[4] << endl;
			if(k_mae==4)
				cout << dice[5] << endl;
			if(k_mae==5)
				cout << dice[1] << endl;
		}

		if (k_ue==4)
		{
			if(k_mae==0)
				cout << dice[2] << endl;
			if(k_mae==2)
				cout << dice[5] << endl;
			if(k_mae==5)
				cout << dice[3] << endl;
			if(k_mae==3)
				cout << dice[0] << endl;
		}

		if (k_ue==5)
		{
			if(k_mae==3)
				cout << dice[4] << endl;
			if(k_mae==4)
				cout << dice[2] << endl;
			if(k_mae==2)
				cout << dice[1] << endl;
			if(k_mae==1)
				cout << dice[3] << endl;
		}
	}
}