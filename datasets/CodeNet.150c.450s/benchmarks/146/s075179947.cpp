#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	vector<string> result;
	double x1,y1,x2,y2,x3,y3,x4,y4;
	int N = 0;
	cin >> N;
	for (int i=0; i<N; ++i){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double inc1,inc2;
		inc1 = (y1 - y2) / (x1 - x2);
		inc2 = (y3 - y4) / (x3 - x4);
		if (inc1 == inc2){
			result.push_back("YES");
		}
		else{
			result.push_back("NO");
		}
	}
	vector<string>::iterator it = result.begin();
	while (it != result.end()){
		cout << *it << endl;
		++it;
	}
	return 0;
}