#include<iostream>
using namespace std;

class Ans
{
private:
	int m, f, r;
	
	void Input(){
		cin >> m >> f >> r;
	}
	bool judge();
public:
	bool answer();
};

bool Ans::judge(){
	int score = m + f;
	
	if(m == -1 && f == -1 && r == -1)return false;
	
	if( m == -1 || f == -1 )cout << "F" << endl;
	else if( score >= 80 )cout << "A" << endl;
	else if( score >= 65 )cout << "B" << endl;
	else if( score >= 50 || r >= 50 )cout << "C" << endl;
	else if( score >= 30 )cout << "D" << endl;
	else cout << "F" << endl;
	
	return true;
}
bool Ans::answer(){
	Ans::Input();
	return Ans::judge();
}

int main()
{
	Ans ans;
	while(ans.answer());
	
	return 0;
}