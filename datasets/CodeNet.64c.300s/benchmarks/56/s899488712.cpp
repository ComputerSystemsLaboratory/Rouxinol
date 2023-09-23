
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int y,m,d;
        cin >> y >> m >>d;
        int p= y % 3;
        if (p==1) {
            y+=2;
        }
        if (p==2) {
            y+=1;
        }
        int yy = ((999-y)/3)*((19*5+20*5)*2+20*10);
        int mm = 0;
        if (p==1) {
            for (int j=m+1; j<=10; j++) {
                if (j%2==0) {
                    mm+=19;
                }else{
                    mm+=20;
                }
            }
            mm += (19*5+20*5+20*10);
            mm += (20-d+1);
            if(m%2==0) mm--;
        }
        if (p==2) {
            for (int j=m; j<=10; j++) {
                if (j%2==0) {
                    mm+=19;
                }else{
                    mm+=20;
                }
            }
            mm += 20*10;
            mm -= (d-1);
        }
        if (p==0) {
            for (int j=m; j<=10; j++) {
                mm+=20;
            }
            mm -= (d-1);
        }
        cout << yy+mm <<endl;
    }
}