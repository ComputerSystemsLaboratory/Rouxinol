#include <iostream>
#include <map>
#include <cstring>

struct card {
    int number;
    char suit;
    int order;
};

void swap(int i, int j, card a[]) {
    card tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int main() {
    int n;
    std::cin >> n;
    int orders[9];
    for (int i=0; i<9; i++) {
        orders[i] = 0;
    }
    card a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i].suit >> a[i].number;
        a[i].order = orders[a[i].number];
        orders[a[i].number]++;
    }
    card b[n];
    memcpy(b, a, n * sizeof(card));
    
    // Bubble sort
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--) {
            if ( a[j-1].number > a[j].number ) {
                swap(j, j-1, a);
            }
        }
    }
    for (int i=0; i<n-1; i++) {
        std::cout << a[i].suit << a[i].number << " ";
    }
    std::cout << a[n-1].suit << a[n-1].number << std::endl;
    
    // Check stability
    int bubble_orders[9];
    for (int i=0; i<9; i++) {
        bubble_orders[i] = 0;
    }
    std::string str = "Stable";
    for (int i=0; i<n; i++) {
        if ( bubble_orders[a[i].number] > a[i].order ) {
            str = "Not stable";
        } else {
            bubble_orders[a[i].number] = a[i].order;
        }
    }
    std::cout << str << std::endl;
    
    // Selection sort
    for (int i=0; i<n; i++) {
        int mini = i;
        for (int j=i+1; j<n; j++) {
            if ( b[mini].number > b[j].number ) {
                mini = j;
            }
        }
        swap(mini, i, b);
    }
    for (int i=0; i<n-1; i++) {
        std::cout << b[i].suit << b[i].number << " ";
    }
    std::cout << b[n-1].suit << b[n-1].number << std::endl;
    
    // Check stability
    int selection_orders[9];
    for (int i=0; i<9; i++) {
        selection_orders[i] = 0;
    }
    std::string str2 = "Stable";
    for (int i=0; i<n; i++) {
        if ( selection_orders[b[i].number] > b[i].order ) {
            str2 = "Not stable";
        } else {
            selection_orders[b[i].number] = b[i].order;
        }
    }
    std::cout << str2 << std::endl;
}