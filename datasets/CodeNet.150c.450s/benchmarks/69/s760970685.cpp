#include <iostream>
#include <deque>

using namespace std;

bool yes;
int ball[10];

void print(deque <int> a){
	for (int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void rec(deque <int> b, deque <int> c, int num)
{
	if (num >= 10){
		yes = true;
		return;
	}

	if (b.back() < ball[num]){
		b.push_back(ball[num]);
		rec(b, c, num + 1);
		b.pop_back();
	}
	if (c.back() < ball[num]){
		c.push_back(ball[num]);
		rec(b, c, num + 1);
		c.pop_back();
	}

	return;
}

int main(void)
{
	int n;
	cin >> n;
	while (n--){
		for (int i = 0; i < 10; i++){
			cin >> ball[i];
		}

		yes = false;
		deque <int> b, c;
		b.push_back(-1);
		c.push_back(-1);
		rec(b, c, 0);
		if (yes){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}