#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	
	cin >> n;

	for (int i = 0; i < n; i++){
		queue<int> ball;
		int num;
		for (int j = 0; j < 10; j++){
			cin >> num;
			ball.push(num);
		}

		int b = 0, c = 0;
		for (int j = 0; j < 10; j++){
			int p_ball = ball.front();
			if (b < p_ball){
				b = p_ball;
				ball.pop();
			}
			else if (c < p_ball){
				c = p_ball;
				ball.pop();
			}
			else {
				cout << "NO" << endl;
				break;
			}
		}

		if (ball.empty()){
			cout << "YES" << endl;
		}
	}

	return (0);
}