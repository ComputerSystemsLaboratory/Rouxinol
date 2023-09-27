#include <iostream>
#include <vector>
#include <string>

struct SCard {
    char suit;
    int num;
};

void BubbleSort(std::vector<SCard> &v)
{
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        for (int j = size - 1; j >= 0; --j) {
            if (v[j].num < v[j-1].num) {
                SCard tmp = v[j];
                v[j] = v[j-1];
                v[j-1] = tmp;
            }
        }
    }
}

void SelectionSort(std::vector<SCard> &v)
{
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        int minj = i;
        for (int j = i; j < size; ++j) {
            if (v[j].num < v[minj].num) {
                minj = j;
            }
        }
        if (i != minj) {
            SCard tmp = v[i];
            v[i] = v[minj];
            v[minj] = tmp;
        }
    }
}

void PrintCards(const std::vector<SCard>& v)
{
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        std::cout << (i ? " " : "") << static_cast<char>(v[i].suit) << v[i].num;
    }
    std::cout << std::endl;
}

int main(void)
{
    int n;
    std::cin >> n;
    
    std::vector<SCard> cards(n);
    for (int i = 0; i < n; ++i) {
        std::string tmp;
        std::cin >> tmp;
        cards[i].suit = tmp[0];
        cards[i].num = tmp[1] - '0';
    }
    std::vector<SCard> cardsSel = cards;
    
    BubbleSort(cards);
    PrintCards(cards);
    std::cout << "Stable" << std::endl;

    SelectionSort(cardsSel);
    PrintCards(cardsSel);
    bool isStable = true;
    for (int i = 0; i < n; ++i) {
        if (cards[i].suit != cardsSel[i].suit) {
            isStable = false;
            break;
        }
    }
    std::cout << (isStable ? "Stable" : "Not stable") << std::endl;
    return 0;
}