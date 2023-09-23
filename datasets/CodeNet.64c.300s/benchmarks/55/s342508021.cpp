#include <iostream>
using namespace std;

int main(){
        int i;
        int j;
        j = 0;
        while(1){
                cin >> i;
                if (i == 0) break;
                j++;
                if (j > 10000) break;
                cout << "Case" << " " << j << ":" << " " << i << endl;
        }
        return 0;
}