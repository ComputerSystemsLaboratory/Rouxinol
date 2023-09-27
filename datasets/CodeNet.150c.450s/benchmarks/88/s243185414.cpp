#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define MP make_pair
typedef pair<int, int> PAIR;
const int MAX = 150;

int main(){
	vector<pair<int,PAIR> > rects;
	for( int i = 1; i <= MAX; i++ ){
		for( int j = i+1; j <= MAX; j++ ){
			int diagonal = i*i + j*j;
			rects.push_back(MP(diagonal, MP(i,j)));
		}
	}
	sort(rects.begin(), rects.end());
	int h, w;
	while( cin >> h >> w, h || w ){
		for( int i = 0; i < rects.size(); i++ ){
			if( h != rects[i].second.first ) continue;
			for( int j = 0; j < rects.size(); j++ ){
				if( h != rects[i+j].second.first ) break;
				if( w == rects[i+j].second.second ){
					cout << rects[i+j+1].second.first << " " << rects[i+j+1].second.second << endl;
					goto end;
				}
			}
		}
		end:;
	}
}