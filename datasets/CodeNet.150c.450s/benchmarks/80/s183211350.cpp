#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct subject{
	int math;
	int info;
	int science;
	int eng;
};

int main(){
	
	subject A,B;
	cin >> A.info >> A.math >> A.science >> A.eng;
	cin >> B.info >> B.math >> B.science >> B.eng;
	cout << max(A.info+A.math+A.science+A.eng,B.info+B.math+B.science+B.eng) << endl;

	return 0;
}