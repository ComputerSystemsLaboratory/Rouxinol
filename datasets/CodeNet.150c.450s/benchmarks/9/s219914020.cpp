#include<iostream>
#include<string>
using namespace std;

int main()
{

	while (1){
		int  h, m;
		string input, s1, s2, s3;

		cin >> input;
		if (input == "-") break;
		cin >> m;

		int i = 0;
		for (i = 0; i < m; i++){
			cin >> h;
			s1 = input.substr(0, h);
			s2 = input.substr(h, input.size() - h);
			s3 = s2 + s1;
			input = s3;
			
		}
		cout << s3 << endl;

	}

	return(0);
}
