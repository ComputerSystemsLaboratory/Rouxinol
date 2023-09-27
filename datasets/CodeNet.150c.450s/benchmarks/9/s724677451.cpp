#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;


void shuffle(char* array){
    std::queue<char> card;
    for(int i=0; array[i]!='\0'; i++)
        card.push(array[i]);
    
    int m,n;
    cin >> m;
    
    while(m--){
        cin >> n;
        for(int i=0;i<n;i++){
            int a=card.front();
            card.pop();
            card.push(a);
        }
    }
    while(!card.empty()){
        cout << card.front();
        card.pop();
    }
    cout << endl;
}


int main() {
    // your code goes here
    char array[201];
    while(1){
        cin >> array;
        if(array[0]=='-')break;
        shuffle(array);
    }
    return 0;
}
