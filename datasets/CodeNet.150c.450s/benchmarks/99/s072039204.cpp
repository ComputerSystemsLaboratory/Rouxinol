#include <iostream>
using namespace std;
int main(){
	int N;
	while( cin >> N && N ){
		while( N-- > 0 ){
			int num1 = 0, num2 = 0;
			unsigned char mcxi1[9], mcxi2[9];
			cin >> mcxi1 >> mcxi2;
			for( size_t i = 0; mcxi1[i] != '\0'; i++ ){
				if( '2' <= mcxi1[i] && mcxi1[i] <= '9' ){
					if( mcxi1[i+1] == 'm' ){ num1 += 1000 * (int)( mcxi1[i] - '0' ); }
					else if( mcxi1[i+1] == 'c' ){ num1 += 100 * (int)( mcxi1[i] - '0' ); }
					else if( mcxi1[i+1] == 'x' ){ num1 += 10 * (int)( mcxi1[i] - '0' ); }
					else if( mcxi1[i+1] == 'i' ){ num1 += 1 * (int)( mcxi1[i] - '0' ); }
					i++;
				}else{
					if( mcxi1[i] == 'm' ){ num1 += 1000; }
					else if( mcxi1[i] == 'c' ){ num1 += 100; }
					else if( mcxi1[i] == 'x' ){ num1 += 10; }
					else if( mcxi1[i] == 'i' ){ num1 += 1; }
				}
			}
			for( size_t i = 0; mcxi2[i] != '\0'; i++ ){
				if( '2' <= mcxi2[i] && mcxi2[i] <= '9' ){
					if( mcxi2[i+1] == 'm' ){ num2 += 1000 * (int)( mcxi2[i] - '0' ); }
					else if( mcxi2[i+1] == 'c' ){ num2 += 100 * (int)( mcxi2[i] - '0' ); }
					else if( mcxi2[i+1] == 'x' ){ num2 += 10 * (int)( mcxi2[i] - '0' ); }
					else if( mcxi2[i+1] == 'i' ){ num2 += 1 * (int)( mcxi2[i] - '0' ); }
					i++;
				}else{
					if( mcxi2[i] == 'm' ){ num2 += 1000; }
					else if( mcxi2[i] == 'c' ){ num2 += 100; }
					else if( mcxi2[i] == 'x' ){ num2 += 10; }
					else if( mcxi2[i] == 'i' ){ num2 += 1; }
				}
			}
			int a = num1 + num2;
			char ans[8];
			int i = 0;
			if( a / 1000 > 1 ){
				ans[i++] = a/1000 + '0';
				ans[i++] = 'm';
			}
			if( a / 1000 == 1 ){ ans[i++] = 'm'; }
			a %= 1000;

			if( a / 100 > 1 ){
				ans[i++] = a/100 + '0';
				ans[i++] = 'c';
			}
			if( a / 100 == 1 ){ ans[i++] = 'c'; }
			a %= 100;

			if( a / 10 > 1 ){
				ans[i++] = a/10 + '0';
				ans[i++] = 'x';
			}
			if( a / 10 == 1 ){ ans[i++] = 'x'; }
			a %= 10;

			if( a > 1 ){
				ans[i++] = a + '0';
				ans[i++] = 'i';
			}
			if( a == 1 ){ ans[i++] = 'i'; }
			ans[i] = '\0';
			cout << ans << endl;
		}
	}
}