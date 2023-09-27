#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main(void)
{
	int n;
	string s1,s2;
	string kurai = "mcxi";
	vector<int> v1(4),v2(4);
	vector<int> sum(4);
	int temp;
	char c;

	int i,i1,i2;

	cin >> n;

	for(i=0; i<n; i++){

		cin >> s1 >> s2;

	//	cout << s1 << " " << s2;

		/* syoki */
		for(i1=0; i1<4; i1++){
			v1[i1] = 0;
			v2[i1] = 0;
			sum[i1] = 0;
		}


		/* v1 */
		temp = 1;
		for(i1=0; i1<s1.length(); i1++){

			if ('2' <= s1[i1] && s1[i1] <= '9'){
				temp = s1[i1] - 48;
				continue;
			}
	//		cout << temp << endl;
			for(i2=0; i2<4; i2++){

				if (s1[i1] == kurai[i2]){
					v1[i2] = temp;
					temp = 1;
					break;
				}

			}
		}

		
		/* v2 */
		temp = 1;
		for(i1=0; i1<s2.length(); i1++){

			if ('2' <= s2[i1] && s2[i1] <= '9'){



				temp = s2[i1] - 48;
				
				continue;
			}


			for(i2=0; i2<4; i2++){

				if (s2[i1] == kurai[i2]){
					v2[i2] = temp;
					temp = 1;
					break;
				}

			}
		}



		/* plus */
		for(i1=3; i1>=0; i1--){
			sum[i1] = sum[i1] + v1[i1] + v2[i1];

			if (sum[i1]>=10){
				sum[i1] = sum[i1] % 10;
				sum[i1-1]++;
			}

		}



		/* print */
		for(i1=0; i1<4; i1++){

			if (sum[i1] == 0) continue;
			else if (sum[i1] == 1){
				cout << kurai[i1];
			}
			else {
				c = sum[i1] + 48; 
				cout << c << kurai[i1];
			}
		}

		cout << endl;
	}

/*	for(i1=0; i1<4; i1++){
		cout << sum[i1] << " ";
	}
*/
	return 0;
}