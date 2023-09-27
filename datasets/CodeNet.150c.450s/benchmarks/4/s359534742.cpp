#include <iostream>
using namespace std;

int main() {
    int m,f,u;
    do{
        cin >> m >> f >> u ;
        if (!((m==-1)&&(f==-1)&&(u==-1))){
            if (m==-1||f==-1){
                cout << 'F' << endl;
                continue;
            }
            if ((m+f)>=80){
                cout << 'A' << endl;
                continue;
            }
            if ((m+f)>=65){
                cout << 'B' << endl;
                continue;
            }
            if ((m+f)>=50){
                cout << 'C' << endl;
                continue;
            }
            if ((m+f)>=30){
                if (u>=50)
                    cout << 'C' << endl;
                else cout << 'D' << endl;
                continue;
            }
            cout << 'F' << endl;
        }
    }while (!((m==-1)&&(f==-1)&&(u==-1)));
    return 0;
}
