#include <iostream>
using namespace std;
int solve(int debt, int n);
int addInterest(int debt);

int main (int argc, char* argv[])
{
    int n;
    int debt = 100000;
    cin >> n;
    cout << solve(debt, n) << endl;
	return 0;
}

int solve(int debt, int n){
    if(n == 0){
        return debt;
    }
    return solve(addInterest(debt), n - 1);
}

int addInterest(int debt){
    double interest = 0.05;
    return ((int)(debt * (1 + interest)) + 999) / 1000 * 1000;
}