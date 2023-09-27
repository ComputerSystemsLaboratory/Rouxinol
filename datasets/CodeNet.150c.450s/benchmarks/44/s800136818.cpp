#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int a[4],b[4];

	while( cin >> a[0] >> a[1] >> a[2] >> a[3] && cin >> b[0] >> b[1] >> b[2] >> b[3] ){
		int count = 0;
		for( int i = 0;i < 4;i++ ){
			if( a[i] == b[i] ){ count++; a[i] = b[i] = -1; }
		}
		cout << count;

		count = 0;
		for( int i = 0;i < 4;i++ ){
			if( a[i] == -1 ) continue;
			for( int j = 0;j < 4;j++ ){
				if( a[i] == b[j] ) count++;
			}
		}

		cout << " " << count << endl;
	}



	return 0;
}