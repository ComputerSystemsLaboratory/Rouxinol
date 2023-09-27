#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <array>

using namespace std;
int INF = 100000000;

struct Matrix { int row, col; };

int getMinMCM(const vector<Matrix>& matVec) {
	const size_t n = matVec.size();
	//table(i,num)は、与えられた行列積のindex=i(0始まり）の行列から、num個先の行列までの積についてのMCM最小値を記録する
	//（ table.at(0).at(n - 1) が求まると、与えられた行列積全体のMCMが求まる ）
	vector< vector<int> > table(n, vector<int>(n, 0));
	for (size_t num = 1; num != n; ++num) {
		const size_t end = n - num;
		for (size_t i = 0; i != end; ++i) {
			const Matrix& matI = matVec.at(i);
			const Matrix& matNum = matVec.at(i+num);
			int& target = table.at(i).at(num);
			target = INF;
			int end2 = i + num;
			for (int j = i; j != end2; ++j) {
				const Matrix& matJ = matVec.at(j);
				target = min(target, matI.row * matJ.col * matNum.col + table.at(i).at(j - i) + table.at(j + 1).at(num+i-j-1));
			}

		}
	}
	return table.at(0).at(n - 1);
}

template<typename T>
void execute(T& cin) {
	int n;
	cin >> n;
	vector<Matrix> m(n);
	for (auto& matrix : m)cin >> matrix.row >> matrix.col;
	cout << getMinMCM(m) << endl;

}

int main()
{
	execute(cin);

	return 0;
}
