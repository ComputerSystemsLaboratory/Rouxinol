#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int w,n,amida[30],yoko1,yoko2,i;

    cin >> w >> n;

    for(i = 1;i <= w;i++){
        amida[i] = i;
    }

    for(i = 0;i < n;i++){
        scanf("%d,%d",&yoko1,&yoko2);
        int box = amida[yoko1];
        amida[yoko1] = amida[yoko2];
        amida[yoko2] = box;
    }

    for(i = 1;i <= w;i++){
        cout << amida[i] << endl;
    }
    
    return 0;
}