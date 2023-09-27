#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;


template<typename CONTAINER>
void bubble_sort(CONTAINER & iterable){
    int N = iterable.size();
    for (int i = 0; i != N; ++i){
        for (int j = N - 1; j != i; --j){
            if (iterable[j] < iterable[j-1]) swap(iterable[j], iterable[j - 1]);
        }
    }
}


template<typename CONTAINER>
void selection_sort(CONTAINER & iterable){
    int N = iterable.size();
    for (int i = 0; i != N; ++i){
        int mini = i;
        for (int j = i; j != N; ++j){
            if (iterable[j] < iterable[mini]) mini = j;
        }
        swap(iterable[i], iterable[mini]);
    }
}

struct Card
{
    char suit;
    int value;
    char str_repr[3];

    Card(char* str): suit(str[0]), value(atoi(&str[1])){
        str_repr[0] = str[0];
        str_repr[1] = str[1];
        str_repr[2] = '\0';
    }

    bool operator==(Card rhs){
        return suit == rhs.suit && value == rhs.value;
    }
    
    bool operator<(Card rhs){
        return value < rhs.value;
    }
    
    operator const char*() const{
        return str_repr;
    }

};


template<typename T>
void display_contents(const T & container){
    cout << *(container.cbegin());
    for (auto it = container.cbegin() + 1; it != container.cend(); ++it){
        cout << ' ' << *it;
    }
    cout << endl;
}

int  main()
{
    int N = 0;
    cin >> N;
    vector<Card> cards;
    for (auto i = 0; i != N; ++i){
        char card[3];
        cin >> card;
        cards.emplace_back(card);
    }
    vector<Card> cards1{cards};
    vector<Card> cards2{cards};
    bubble_sort(cards1);
    display_contents(cards1);
    cout << "Stable" << endl;
    selection_sort(cards2);
    display_contents(cards2);
    if (equal(cards1.begin(), cards1.end(), cards2.begin())){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    return 0;
}