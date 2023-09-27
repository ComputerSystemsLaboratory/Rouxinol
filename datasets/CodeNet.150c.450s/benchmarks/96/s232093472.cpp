#include <iostream>
#include <vector>
using namespace std;

#define INF 1001001

char data[][5] = { 	{'.', ',', '!', '?', ' '},
					{'a', 'b', 'c'},
					{'d', 'e', 'f'},
					{'g', 'h', 'i'},
					{'j', 'k', 'l'},
					{'m', 'n', 'o'},
					{'p', 'q', 'r', 's'},
					{'t', 'u', 'v'},
					{'w', 'x', 'y', 'z'} };
int num[] = {5, 3, 3, 3, 3, 3, 4 ,3, 4};

int main(void)
{
	int n;
	cin >> n;
	while (n--){
		string str, ret = "";
		bool flag = false;
		cin >> str;
		int cnt = -1, now = -1;
		for (int i = 0; i < (int)str.length(); i++){
			if (str[i] == '0' && flag){
				ret += data[now-1][cnt % num[now-1]];
				cnt = -1;
				now = -1;
				flag = false;
			}
			else if (str[i] != '0'){
				now = str[i] - '0';
				cnt++;
				flag = true;
			}
		}
		cout << ret << endl;
	}

	return 0;
}