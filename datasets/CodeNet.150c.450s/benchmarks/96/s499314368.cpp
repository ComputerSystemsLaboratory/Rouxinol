#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){

	string data[] = { ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	char inp;
	int n, cnt, num;
	string ans;

	cin >> n;

	getchar();

	for (int i = 0; i < n; i++){

		cnt = 0;
		ans = ("");

		while (1){

			inp = getchar();

			if (inp == '\n') break;
			if (inp != '0'){
				num = inp - '0';
				cnt++;
			}
			else{
				if (cnt > 0){
					ans += data[num-1][(cnt-1)%data[num-1].size()];
					cnt = 0;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}