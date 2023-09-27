#include <iostream>
using namespace std;

#define MYNULL -2000

typedef struct {
    int x;
    int y;
} set;
    

int main(){
    while (1){
    int n;
    cin >> n;
    if (n == 0) break;
    set mymap[200];
    int zero = n;
    int biggestX, biggestY, smallestX, smallestY;

    for (int i = 0; i < 200; i++)
	    mymap[i].x = mymap[i].y = MYNULL;

    mymap[0].x = mymap[0].y = 0;
    
    for (int s = 1; s < n; s++){
	
	int ni, di;
	cin >> ni >> di;
	
	switch (di){
	case 0:
	    mymap[s].x = mymap[ni].x - 1;
	    mymap[s].y = mymap[ni].y;
	    break;
	case 1:
	    mymap[s].x = mymap[ni].x;
	    mymap[s].y = mymap[ni].y - 1;
	    break;
	case 2:
	    mymap[s].x = mymap[ni].x + 1;
	    mymap[s].y = mymap[ni].y;
	    break;
	case 3:
	    mymap[s].x = mymap[ni].x;
	    mymap[s].y = mymap[ni].y + 1;
	    break;
	}
    }

//    for (int v = 0; v < n; v++){
//	cout << "mymap[" << v << "] = " << mymap[v].x << ", " << mymap[v].y << endl;
//    }
    // solve
    // take biggest x
    biggestX = biggestY = -200000;
    smallestX = smallestY = 200000;

    for (int i = 0; i < n; i++){
	if (mymap[i].x != MYNULL && mymap[i].y != MYNULL){
	    if (biggestX < mymap[i].x)
		biggestX = mymap[i].x;
	    if (biggestY < mymap[i].y)
		biggestY = mymap[i].y;
	    if (smallestX > mymap[i].x)
		smallestX = mymap[i].x;
	    if (smallestY > mymap[i].y)
		smallestY = mymap[i].y;
	}
	
    }

//    cout << biggestX  << "-" << smallestX << " " << biggestY << "-" << smallestY << endl;
    cout << biggestX - smallestX + 1 << " " << biggestY - smallestY + 1 << endl;
    }
}