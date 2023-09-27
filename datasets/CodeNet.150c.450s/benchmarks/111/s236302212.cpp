#include <iostream>
using namespace std;

class FirstGrader{
public:
	FirstGrader(int _N);
	~FirstGrader();
	long long int Execute();

private:
	int N;
	int num[100];
	long long int memo[101][21];
	enum PM{Plus, Minus};
	long long int correctEq(int index, int sum);
};

FirstGrader::FirstGrader(int _N) : N(_N){
	for (int i = 0; i < _N; i++){
		cin >> num[i];
	}
	// memoを-1で初期化
	for (int i = 0; i < 101; i++){
		for (int j = 0; j < 21; j++){
			memo[i][j] = -1;
		}
	}
}
FirstGrader::~FirstGrader(){};

long long int FirstGrader::correctEq(int index, int sum){
	if (index == N-2) {
		if (sum == num[N-1]) return 1;
		else return 0;
	}
	if (memo[index][sum] >=0) return memo[index][sum];

	memo[index][sum] = 0;
	if (sum + num[index + 1] <= 20) memo[index][sum] += correctEq(index+1, sum+num[index+1]);
	if (sum - num[index + 1] >= 0) memo[index][sum] += correctEq(index+1, sum-num[index+1]);

	return memo[index][sum];
}

long long int FirstGrader::Execute(){
	return correctEq(0, num[0]);
}

int main(){
	int N;
	cin >> N;
	
	FirstGrader* fg = new FirstGrader(N);
	cout << fg->Execute() << endl;
	
	delete fg;
	return 0;
}