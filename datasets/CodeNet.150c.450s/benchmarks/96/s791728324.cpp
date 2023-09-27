#include <iostream>
#include <string>
using namespace std;

char hyo[9][5];

char moji(int char_, int count);

int main(void)
{
	int i1,i2;
	char c = 'a';
	char cc;
	string s;
	int n;
	int m;
	int count;

		/* syokika */
		for(i1=0;i1<9;i1++){	
			for(i2=0;i2<5;i2++){
				hyo[i1][i2] = '1';
			}
		}


		/* hyo sakusei */
		hyo[0][0] = '.';
		hyo[0][1] = ',';
		hyo[0][2] = '!';
		hyo[0][3] = '?';
		hyo[0][4] = ' ';


		for( i1=1; i1<9; i1++){
			for(i2=0; i2<4; i2++){
				
				if(i2 == 3) {

					if( i1 == 6 || i1 == 8) {}
					else continue;
				}

				hyo[i1][i2] = c;
				c++;
			}
		}



		cin >> n;

		for(i2=0;i2<n;i2++){


			cin >> s;

			count = 0;
			m = 0;
			for(i1=0;i1<s.size();i1++){
			

				if( s[i1]=='0'){
					if(m != 0){
						cc = moji(m,count);
						count = 0;
						m = 0;
					    cout << cc;
					}
				}
				else{

					c = s[i1];
					m = c - 48;
					count++;
				}
			}

			cout << endl;


		}

	return 0;

}


char moji(int char_, int count)
{

	int n;
	count--;
	if( char_ == 1){
		n = count%5;
	}
	else if( char_ == 7 || char_ == 9){
		n = count%4;
	}
	else {
		n = count%3;
	}

	return hyo[char_-1][n];
}