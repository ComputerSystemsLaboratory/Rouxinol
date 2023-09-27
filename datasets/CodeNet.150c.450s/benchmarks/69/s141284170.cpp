#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main()
{
	int n, ball;
	queue<pair<int, int> > qu;

	cin >> n;

	for (int i=0; i<n; i++){
		bool flag = false;
		int rem;

		cin >> ball;
		qu.push(make_pair(ball, 0));

		for (int j=0; j<9; j++){
			cin >> ball;

			while (!qu.empty() && ball != qu.front().first && ball != qu.front().second)
			{
				if(qu.front().first < ball){
					qu.push(make_pair(ball, qu.front().second));
					//cout << ball << ',' << qu.front().second << ' ';	//debug
				}
				else if(qu.front().second < ball){
					qu.push(make_pair(qu.front().first, ball));
					//cout << qu.front().first << ',' << ball;	//debug
				}

				//cout << endl; //debug
				
				qu.pop();
				//if(qu.empty())	break;
			}

			if(qu.empty()){
				rem = j+1;
				break;
			}
			if(j==8 && !qu.empty()){
				rem = 9;
				flag = true;
			}
		}

		for(; rem < 9; rem++)	cin >> ball;

		if(flag)	cout << "YES" << endl;
		else		cout << "NO" << endl;
		
		while (!qu.empty()) qu.pop();
	}

	return 0;
}