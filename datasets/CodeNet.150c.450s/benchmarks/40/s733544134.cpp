#include <iostream>
#include <string>
using namespace std;

class Dice{
public:
    int *arr;
    Dice(int arr2[]){arr = arr2;}

    void roll(char direction){
        int temp;
        switch(direction){
            case 'N':
                temp = arr[0]; arr[0] = arr[1]; arr[1] = arr[5]; arr[5] = arr[4]; arr[4] = temp;
                break;
            case 'E':
                temp = arr[0]; arr[0] = arr[3]; arr[3] = arr[5]; arr[5] = arr[2]; arr[2] = temp;
                break;
            case 'W':
                temp = arr[0]; arr[0] = arr[2]; arr[2] = arr[5]; arr[5] = arr[3]; arr[3] = temp;
                break;
            case 'S':
                temp = arr[0]; arr[0] = arr[4]; arr[4] = arr[5]; arr[5] = arr[1]; arr[1] = temp;
        }
    }

    int report(){return arr[0];}
};

int main(){
    int arr[6], l;
    for(int i = 0;i < 6; i++) cin >> arr[i];
    Dice dice(arr);
    string line;
    cin >> line;
    l = line.size();
    for(int i = 0;i < l; i++) dice.roll(line[i]);
    cout << dice.report() << endl;

    return 0;
}

