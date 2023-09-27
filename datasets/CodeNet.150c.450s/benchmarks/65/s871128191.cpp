#include <iostream>

using namespace std;

class Card 
{
public:
    char c_suit;
    int c_value;
};

void bubble(Card a[], int n) 
{
    for (int i = 0; i < n; i++) {
        for ( int j = n - 1; j >= i; j--) {
            if ( a[j].c_value < a[j - 1].c_value ) {
                Card t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
}

void selection(Card a[], int n) 
{
    for ( int i = 0; i < n; i++ ) {
        int minj = i;
        for (int j = i; j < n; j++ ) {
            if ( a[j].c_value < a[minj].c_value ) {
                minj = j;
            }
        }
        Card t = a[i];
        a[i] = a[minj];
        a[minj]  = t;
    }
}

    
void print(Card a[], int n) 
{
    for ( int i = 0; i < n; i++ ) {
        if (i > 0) cout << " ";
        cout << a[i].c_suit << a[i].c_value;
    }
    cout << endl;
}

bool isStable(Card c1[], Card c2[], int n)
{
    for (int i = 0; i < n; i++ ) {
        if ( c1[i].c_suit != c2[i].c_suit) {
            return false;
        }
    }
    return true;
}

int main()
{
    Card c1[100], c2[100];
    int n;
    char ch;

    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin >> c1[i].c_suit >> c1[i].c_value;
    }

    for (int i = 0; i < n; i++ ){
        c2[i] = c1[i];
    }

    bubble(c1, n);
    selection(c2, n);

    print(c1, n);
    cout << "Stable" << endl;

    print(c2, n);
    if (isStable(c1, c2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}