#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int b[n],f[n],r[n],v[n];
    int number[120];
    for (int i=0; i<120; i++) {
        number[i]=0;
    }
    
    for (int i=0; i<n; i++) {
        cin >> b[i] >> f[i] >> r[i] >> v[i];
        number[(b[i]-1)*30+(f[i]-1)*10+(r[i]-1)]=number[(b[i]-1)*30+(f[i]-1)*10+(r[i]-1)]+v[i];
    }
    for (int i=0; i<120; i++) {
        cout << ' ' <<number[i];
        if((i+1)%10 ==0)cout << endl;
        if((i+1)%30 == 0 && i<119){
            for (int j=0; j<20; j++) {
                cout << '#';
            }
            cout << endl;
        }
    }
    return 0;
}