#include <iostream>

using namespace std;

int n;
int f,r;
int B ,F,R,V;
int array[4][10][10];

void Array(int b,int f,int r)
{
	array[b-1][f-1][r-1] += V;
}

void input()
{
	for(int i=0; i<n; i++)
	{
			cin >> B >> F >> R >> V;
			Array(B,F,R);
	}
}


int main()
{
	cin >> n;

	for(int z=0; z<4; z++){
		for(int i=0; i<3; i++){
			for(int j=0; j<10; j++)
			{
				array[z][i][j] = 0;
			}
		}
	}

	input();

	for(int z = 0; z < 3; z++){
		for(int i=0; i<3; i++){
			for(int j=0; j<10; j++)
			{
				cout << " " << array[z][i][j];
			}
			cout << endl;
		}

		cout << "####################\n";
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++)
		{
			cout << " " << array[3][i][j];
		}
		cout << endl;
	}

	return 0;
}