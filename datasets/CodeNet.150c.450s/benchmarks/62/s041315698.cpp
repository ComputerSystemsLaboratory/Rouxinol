#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
using namespace std;
int main(){
	int buf[3];
	for (int &a : buf)cin >> a;
	sort(buf, buf + 3);
	cout << buf[0] << " " << buf[1] << " " << buf[2]<<endl;
	return 0;
}