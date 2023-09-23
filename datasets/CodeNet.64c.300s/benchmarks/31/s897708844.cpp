#include <iostream>

using namespace std;
int index;

int main()
{
    bool attendance[31];
    
    for(int i = 0; i < 31; i++) {
        attendance[i] = true;
    }
    
    for(int i = 0; i < 28; i++) {
        cin >> index;
        attendance[index] = false; 
    }
    
    for(int j = 1; j < 31; j++) {
        if(attendance[j]) {
            cout << j << endl;
        }
    }
    
}

