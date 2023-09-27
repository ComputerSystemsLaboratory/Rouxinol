#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Gem{
	int x; int y; bool isFound;
	Gem(){ x = 10; y = 10; isFound = false; }
};

int main(){
	int n;

	while(cin >> n && n != 0){
		Gem gems[20], robot;
		for (int i = 0; i < n; ++i){
			cin >> gems[i].x >> gems[i].y;
		}

		int m;
		cin >> m;
		for (int i = 0; i < m; ++i){
			char s; int dist;
			cin >> s >> dist;
			
			for (int j = 0; j < dist; ++j){
				switch (s)
				{
				case (int)'N':
					robot.y += 1;
					break;
				case (int)'E':
					robot.x += 1;
					break;
				case (int)'S':
					robot.y -= 1;
					break;
				case (int)'W':
					robot.x -= 1;
					break;
				}
				for (int i = 0; i < n; ++i){
					if (robot.x == gems[i].x && robot.y == gems[i].y){
						gems[i].isFound = true;
					}
				}
			}

		}


		int res = 1;
		for (int i = 0; i < n; ++i){
				res *= gems[i].isFound;
		}
		cout << ((res == 1) ? "Yes" : "No") << endl;


	}


	return 0;
}