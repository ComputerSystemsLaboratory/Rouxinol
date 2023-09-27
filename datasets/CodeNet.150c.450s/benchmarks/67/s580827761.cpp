#include <iostream>
using namespace std;

int main(){
    int n;
    int count;
    cin >> n;
    while(n){
        count = 0;
        for(int x=1;x<n;++x){
            for(int y=x;y<n;++y){
                if((y-x+1)*(x+y)/2 == n){
                    ++count;
                }
            }
        }
        cout << count << endl;
        cin >> n;
    }
}