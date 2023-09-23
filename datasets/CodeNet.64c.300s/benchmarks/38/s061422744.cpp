#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include "iostream"
#include "cstdio"
using namespace std;

#define TEST 0
#if TEST
FILE *in = freopen("./Q/quest.txt", "r", stdin);
FILE *out = freopen("./A/ans.txt", "w", stdout);
#endif

int hantei(int left,int right,int *ball,int i){
	if (i == 10)return 1;
	int OK = 0;
	if (left < ball[i])OK=hantei(ball[i], right, ball, i + 1);
	if (right < ball[i])OK=hantei(left, ball[i], ball, i + 1);
	return OK;
}

int main(){

	int n,ball[10],left=0,right=0,FLAG=2;
	cin >> n;
	while (n--){
		int i = 0;
		for (auto&& x : ball)cin >> x;
		if (hantei(left, right, ball, i))cout << "YES" << endl;
		else cout << "NO" << endl;

	}

#if TEST
	fclose(in);
	fclose(out);
#endif
	return 0;

}