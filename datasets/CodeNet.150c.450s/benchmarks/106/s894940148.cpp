#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
        int a,b,c;
        int count = 0;
        cin >> a >> b >> c;
        for(int i = a; i <= b; i++){
                if(c % i == 0)count++;
        }
        cout << count << "\n";
        return 0;
}