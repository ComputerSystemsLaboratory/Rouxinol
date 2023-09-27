#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string in;
		cin >> in;

		bool iflag = false;
		char ch;
		int cnt = 0;
		for(int j=0; j<in.size(); j++){
			if(in[j] == '0'){
				if(ch == '-') continue;
				cout << ch;
				cnt = 0;
				ch = '-';
				iflag = false;

			}else if(in[j] == '1'){
				switch(cnt){
					case 0:
						ch = '.';
						break;
					case 1:
						ch = ',';
						break;
					case 2:
						ch = '!';
						break;
					case 3:
						ch = '?';
						break;
					case 4:
						ch = ' ';
						break;
				}
				cnt++;
				if(cnt >= 5) cnt = 0;

			}else{
				ch = 'a' + (in[j] - '2') * 3 + cnt;
				if(in[j] >= '8') ch++;
				cnt++;
				if(in[j] == '7' || in[j] == '9'){
					if(cnt >= 4) cnt = 0;
				}else if(cnt >= 3) cnt = 0;
				iflag = true;
				//cout << cnt << ":" << ch << endl;
			}
		}
		cout << endl;
	}

	
	return 0;
}