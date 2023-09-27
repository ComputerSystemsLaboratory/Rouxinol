#include <iostream>
using namespace std;

int main() {
    int cards[4][13] = {};
    int n, a, b;
    char c;

    cin >> n;
    for(int i=0; i<n; i++) {
	cin >> c >> b;
	if(c == 'S') {
	    a = 0;
	} else if(c == 'H') {
	    a = 1;
	} else if(c == 'C') {
	    a = 2;
	} else {
	    a = 3;
	}
	cards[a][b-1]++;
    }

    for(int i=0; i<4; i++) {
	for(int j=0; j<13; j++) {
	    if(cards[i][j] == 0) {
		if(i == 0) {
		    c = 'S';
		} else if(i == 1) {
		    c = 'H';
		} else if(i == 2) {
		    c = 'C';
		} else {
		    c = 'D';
		}
		cout << c << " " << j+1 << endl;
	    }
	}
    }
}