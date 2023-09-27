#include <iostream>
#include <queue>

int main(){
	using namespace std;
	int m, f, r;
	int points;
	unsigned int size;
	queue<int> q;
	while (1){
		cin >> m >> f >> r;
		if (m < 0 && f < 0 && r < 0)
			break;
		q.push(m);
		q.push(f);
		q.push(r);
	}

	while(!q.empty()){
		m = q.front();
		q.pop();
		f = q.front();
		q.pop();
		r = q.front();
		q.pop();

		points = m + f;
		if (m<0 || f<0 || points<30){
			cout << 'F' << endl;
		}
		else if (points >= 80){
			cout << 'A' << endl;
		}
		else if (points >= 65 && points < 80){
			cout << 'B' << endl;
		}
		else if ((points >= 50 && points < 65) || r>=50){
			cout << 'C' << endl;
		}
		else if (points >= 30 && points < 50 && r < 50){
			cout << 'D' << endl;
		}
	}

}