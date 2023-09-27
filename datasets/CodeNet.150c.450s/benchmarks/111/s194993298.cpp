#include<iostream>
using namespace std;


class First_Grader{
public:
	First_Grader();
	~First_Grader();
	long long Calc();

private:
	int N;
	int max;
	long long* number;
	long long* F;
	long long* memo;
	

};

First_Grader::First_Grader(){

	max = 20;
	F = new long long[max + 1];
	memo = new long long[max + 1];

	cin >> N;
	number = new long long[N];

	for (int i = 0; i < N;i++){
		cin >> number[i];
	}

	for (int i = 0; i < max + 1; i++){
		F[i] = 0;
		memo[i] = 0;
	}

}


First_Grader::~First_Grader(){
	delete[] number;
	delete[] F;
	delete[] memo;
}

long long First_Grader::Calc(){
	for (int i = 0; i < N - 1 ; i++){

		if (i == 0)	F[number[i]] = 1;
		else{
			for (int j = 0; j < max + 1; j++){
				if (F[j] != 0){
					if (j + number[i] <= max) memo[j + number[i]] += F[j];
					if (j - number[i] >= 0) memo[j - number[i]] += F[j];
				}
			}
			for (int j = 0; j < max + 1; j++){
				F[j] = memo[j];
				memo[j] = 0;
			}
		}
	}
	return F[number[N - 1]];
}


int main(){
	First_Grader* solve = new First_Grader;
	cout << solve->Calc() << endl;
	delete solve;
	return 0;
}