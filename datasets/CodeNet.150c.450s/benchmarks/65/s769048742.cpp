#include <iostream>
using namespace std;

struct Card{
  char suit;
  int value;
};

int main(void){
    int N;
    char input[3];
    struct Card *deck, *deck2, forSwap;
    int i, j;
    char order[9][4];
    int count[9] = {0};
    int tmp;
    bool stable = true;
    int mini;
    
    cin >> N;
    deck = new struct Card[N];
    deck2 = new struct Card[N];
    
    for(i = 0; i < N; i++){
        cin >> input;
        deck[i].suit = deck2[i].suit = input[0];
        deck[i].value = deck2[i].value = input[1] - '0';
        tmp = deck[i].value - 1;
        order[tmp][count[tmp]] = deck[i].suit;
        count[tmp]++;
        
//        cout << deck[i].suit << deck[i].value << " ";
    }
    
    for(i = 0; i < N; i++){
        for(j = N - 1; i < j; j--){
            if(deck[j].value < deck[j - 1].value){
                forSwap = deck[j];
                deck[j] = deck[j -1];
                deck[j -1] = forSwap;
            }
        }
    }
    
    j = 0;
    for(i = 0; i < N; i++){
        if(i) cout << " ";
        cout << deck[i].suit << deck[i].value;
        tmp = deck[i].value - 1;
        if(1 < count[tmp]){
            if(order[tmp][j] != deck[i].suit) stable = false;
//            cout << order[tmp][j] << deck[i].suit << j;
//            cout << deck[i].value << " ";
            j++;
            if(j == count[tmp]) j = 0;
        }
    }
    cout << endl;
    if(stable) cout << "Stable";
    else cout << "Not stable";
    cout << endl;
    
    for(i = 0; i < N; i++){
        mini = i;
        for(j = i; j < N; j++){
            if(deck2[j].value < deck2[mini].value) mini = j;
        }
        
        forSwap = deck2[mini];
        deck2[mini] = deck2[i];
        deck2[i] = forSwap;
    }
    
    j = 0;
    stable = true;
    for(i = 0; i < N; i++){
        if(i) cout << " ";
        cout << deck2[i].suit << deck2[i].value;
        tmp = deck2[i].value - 1;
        if(1 < count[tmp]){
            if(order[tmp][j] != deck2[i].suit) stable = false;
//            cout << deck2[i].value << " ";
            j++;
            if(j == count[tmp]) j = 0;
        }
    }
    cout << endl;
    if(stable) cout << "Stable";
    else cout << "Not stable";
    cout << endl;
    
    delete [] deck;
    deck = 0;
    delete [] deck2;
    deck2 = 0;
    return 0;
}