#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int xs[10010] = {};
    for(int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ++xs[temp];
    }
    bool yet = true;
    for(int i = 0; i <= 10000; ++i){
        if(xs[i] > 0){
            for(int j = 0; j < xs[i]; ++j){
                if(yet){
                    printf("%d", i);
                    yet = false;
                } else {
                    printf(" %d", i);
                }
            }
        }
    }
    cout << endl;
}