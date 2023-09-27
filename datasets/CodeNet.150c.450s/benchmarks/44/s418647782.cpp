#include <iostream>
using namespace std;
int hit(int a[],int b[]);
int blow(int a[], int b[]);
int main(){
    int a[4];
    int b[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
        if (cin.eof()){break;}
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        int hi = hit(a,b);
        int bl = blow(a,b);
        cout << hi << " " << bl << endl;
    }
}

int hit(int a[],int b[]){
    int n=0;
    for (int i=0; i<4;i++){
        if (a[i]==b[i])
            n++;
    }
    return n;
}

int blow(int a[], int b[]){
    int n=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (a[i]==b[j])
                n++;
        }
    }
    n -= hit(a,b);
    return n;
}