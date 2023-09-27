/*
	JOI 2006 　予選 問2		
	言語	：	C++
	必須知識：	

*/

#include <iostream>

using namespace std;




int main(void)
{
	int N,M;


	while(	cin >> N, N > 0){

	char change[1000]={};		//　大雑把に配列確保

	char a,b;
	for(int i = 0; i < N; i++){
		cin >> a >> b;

		change[a] = b;
	}

	cin >> M;

	char c;
	for(int i = 0; i < M; i++){
		cin >> c;

		if(change[c] > 0)
			cout << change[c];
		else
			cout << c;
	}

	cout << endl;

	}
	return 0;

}