#include <iostream>

using namespace std;

int main(){
    int n;
    int y,m,d;
    int yy,mm,dd;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> y >> m >> d;
        yy = 1000;
        mm = 1;
        dd = 1;
        while(yy-1 != y){
            if((yy-1)%3 == 0){
                dd += 200;
            }else{
                dd += 195;
            }
            yy--;
        }
        mm = 10;
        if((yy-1)%3 == 0){
            dd += 20;
        }else{
            dd += 19;
        }
        yy--;
        while(mm != m){
            if((yy % 3) == 0){
                dd += 20;
            }else{
                if((mm-1)%2 == 0){
                    dd += 19;
                }else{
                    dd += 20;
                }
            }
            mm--;
        }
        cout << dd - d << endl;
    }
}