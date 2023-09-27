#include <iostream>
using namespace std;
 
int main()
{
    int MAX_X = 150;
    int MAX_Y = 150;
    int x,y,rectangle,ansx,ansy,i;
    int rectangles[151][151] = {0};
    bool flag = false;
     
    for (int x = 1; x <= MAX_X; x++) {
        for (int y = x + 1; y <= MAX_Y; y++) {
            rectangles[x][y] = x*x + y*y;
        }
    }
     
    while (true) {
        flag = false;
        i = 1;
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        rectangle = rectangles[x][y];
         
        for (int k = 1; k < 150; k++) {
            for (int j = k+1; j <= 150; j++) {
                if (rectangle == rectangles[k][j]) {
                    if (x < k) {
                        ansx = k;
                        ansy = j;
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
         
         
         
        while(!flag) {
            rectangle++;
            for (int k = 1; k < 150; k++) {
                for (int j = k+1; j <= 150; j++) {
                    if (rectangle == rectangles[k][j]) {
                        ansx = k;
                        ansy = j;
                        flag = true;
                        break;
                    }
                }
                if (flag) break;
            }
            if(flag) break;
        }
         
        cout << ansx << " " << ansy << endl;
    }
     
    return 0;
}