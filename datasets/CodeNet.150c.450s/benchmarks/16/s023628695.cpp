#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main() {
	string s;
	queue<int> top;
	queue<int> lake;
	int area = 0;
	cin >> s;
	int* height = new int[s.length() + 1];
	height[0] = 0;
	for (int i = 0;i < s.length();i++) {
		switch (s[i])
		{
		case '/':
			height[i + 1] = height[i] + 1;
			break;
		case '_':
			height[i + 1] = height[i];
			break;
		case '\\':
			height[i + 1] = height[i] - 1;
		default:
			break;
		}
	}
	bool flag;
	if (height[0] >= height[1])top.push(0);
	for (int i = 1;i < s.length();i++) {
		flag = true;
		if (height[i - 1] > height[i] || height[i + 1] > height[i]) {
			continue;
		}
		for (int j = i - 1;j >= 0;j--) {
			if (height[j] > height[i]) {
				flag = false;
				break;
			}
		}
		if (!flag) {
			flag = true;
			for (int j = i + 1;j <= s.length();j++) {
				if (height[j] > height[i]) {
					flag = false;
					break;
				}
			}
		}
		if (flag)top.push(i);
	}
	if (height[s.length() - 1] <= height[s.length()])top.push(s.length());


	int indexl, indexr, level;
	double lakesize;
	if (top.size() <= 1) {
		cout << "0\n0\n";
		return 0;
	}
	indexl = top.front();
	top.pop();
	while (!top.empty()) {
		indexr = top.front();
		top.pop();
		level = min(height[indexl], height[indexr]);
		lakesize = 0;
		for (int i = indexl;i < indexr;i++) {
			switch (s[i]) {
			case '/':
				lakesize += max(0.0, level - height[i] - 0.5);
				break;
			case '_':
				lakesize += max(0, level - height[i]);
				break;
			case '\\':
				lakesize += max(0.0, level - height[i] + 0.5);
				break;
			}
		}
		area += lakesize;
		if (lakesize > 0)lake.push((int)lakesize);
		indexl = indexr;
	}
	cout << area << endl << lake.size();
	while (!lake.empty()) {
		cout << " ";
		cout << lake.front();
		lake.pop();
	}
	cout << endl;


}
