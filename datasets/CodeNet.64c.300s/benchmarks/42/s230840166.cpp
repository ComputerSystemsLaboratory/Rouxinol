#include <iostream>

using namespace std;

struct po{
	int x;
	int y;
	bool vis;
};

int main()
{
	int n, m, s, t, u;
	po jw[21];
	char c;
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		s = t = 10;
		for(int i = 0; i < n; i++){
			cin >> jw[i].x >> jw[i].y;
			jw[i].vis = false;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> c >> u;
			
			if(c == 'N'){
				u += t;
				if(u > 20){
					u = 20;
				}
				for(int i = 0; i < n; i++){
					if(jw[i].x == s && t <= jw[i].y && jw[i].y <= u){
						jw[i].vis = true;
					}
				}
				t = u;
			} else if(c == 'E'){
				u += s;
				if(u > 20){
					u = 20;
				}
				for(int i = 0; i < n; i++){
					if(jw[i].y == t && s <= jw[i].x && jw[i].x <= u){
						jw[i].vis = true;
					}
				}
				s = u;
			} else if(c == 'S'){
				u = t-u;
				if(u < 0){
					u = 0;
				}
				for(int i = 0; i < n; i++){
					if(jw[i].x == s && u <= jw[i].y && jw[i].y <= t){
						jw[i].vis = true;
					}
				}
				t = u;
			} else {
				u = s-u;
				if(u < 0){
					u = 0;
				}
				for(int i = 0; i < n; i++){
					if(jw[i].y == t && u <= jw[i].x && jw[i].x <= s){
						jw[i].vis = true;
					}
				}
				s = u;
			}
		}
		bool f = true;
		
		for(int i = 0; i < n; i++){
			f = jw[i].vis;
			if(!f){
				break;
			}
		}
		
		if(f){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	
	return 0;
}