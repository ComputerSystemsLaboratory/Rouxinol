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

    int rightside(int a, int b){
        string line = "NNNEEE";
        for(int i = 0; i < 6; i++){
            if(arr[0] == a) break;
            roll(line[i]);
        }
        roll('N');
        line = "EEE";
        for(int i = 0; i < 3; i++){
            if(arr[0] == b) break;
            roll(line[i]);
        }
        roll('S');
        return arr[2];
    }
    
};

int main(){
    int arr[6], q;
    for(int i = 0;i < 6; i++) cin >> arr[i];
    Dice dice(arr);

    cin >> q;
    for(int i = 0;i < q; i++){
        int a, b;
        cin >> a >> b;
        cout << dice.rightside(a, b) << endl;
    }

    return 0;
}

