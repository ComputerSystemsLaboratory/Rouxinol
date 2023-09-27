#include <iostream>
using namespace std;

int main()
{
    int max, object;
    int count = 0;
    while(1){
        count = 0;
        cin >> max >> object;
        if(max == 0 && object == 0){
            break;
        }
        for(int i = 1; i < max-1; i++){
            for(int j = i+1; j < max; j++){
                if(object-i-j <= max && object-i-j > j){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}