#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverse(std::string& str)
{
	size_t N = str.size();
	for (size_t i = 0; i < N/2; ++i)
		std::swap(str[i], str[N - 1 - i]);
}

int main() {
	int M;
	string s;
	string half1,half2,temp;
	int count,R1,R2,equal;
	vector<string> train;


	cin >> M;

	for (int i=0;i<M;i++) {
		train.clear();
		cin >> s;
		count = 0;

		for(int j=1;j<s.length();j++) { //??????????????????????±????
			half1 = "";
			half2 = "";
			for (int t=0;t<j;t++) {
				half1 += s[t]; //???????????????????????????	
			}
			for(int k=0;k<s.length()-j;k++) {
				half2 += s[j+k]; //??????????????????????????????
			}
			for (int p=0; p<2; p++) {
				if (p == 1) {
					temp = half1;
					half1 = half2;
					half2 = temp;
				}

				for(int t=0;t<4;t++) {
					equal = 0;

					if(t > 0) {
						reverse(half1);
					}
					if(t == 2) {
						reverse(half2);
					}	

					for(int l=0; l<train.size(); l++) {
						if (train[l] == half1+half2) {
							equal = 1;
						}
					}
					if (equal == 0) {
					train.push_back(half1+half2);
					}
					//cout << half1+half2 << endl;
				}

			}
			
			
			
		}
		cout << train.size() << endl;
	}
}