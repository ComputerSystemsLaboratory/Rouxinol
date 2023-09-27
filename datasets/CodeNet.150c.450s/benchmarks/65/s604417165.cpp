#include <cstdio>
#include <string>
#include <vector>

using namespace std;

struct Card {
    char suite;
    int value;
    bool operator==(const Card& rhs) const
    {
        return suite == rhs.suite && value == rhs.value;
    }
};

void bubbleSort(vector<Card>& v)
{
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = v.size() - 1; j >= i + 1; --j) {
            if (v[j].value < v[j - 1].value) {
                swap(v[j], v[j - 1]);
            }
        }
    }
}

void selectionSort(vector<Card>& v)
{
    for (size_t i = 0; i < v.size(); ++i) {
        auto mini = i;
        for (size_t j = i; j < v.size(); ++j) {
            if (v[j].value < v[mini].value) {
                mini = j;
            }
        }
        swap(v[i], v[mini]);
    }
}

bool isStableSort(const vector<Card>& raw, const vector<Card>& sorted)
{
    for (size_t i = 0; i < sorted.size() - 1; ++i) {
        auto&& a = sorted[i];
        auto&& b = sorted[i + 1];
        if (a.value == b.value) {
            int a_pos;
            int b_pos;
            for (size_t j = 0; j < raw.size(); ++j) {
                if (raw[j] == a) {
                    a_pos = j;
                }
                else if (raw[j] == b) {
                    b_pos = j;
                }
            }
            if (!(a_pos < b_pos)) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int N;
    scanf("%d\n", &N);

    vector<Card> vc;
    for (auto i = 0; i < N; ++i) {
        char c;
        int n;
        scanf("%c%d ", &c, &n);
        vc.push_back(Card{c, n});
    }

    auto p = [](const vector<Card>& v) {
        for (size_t i = 0; i < v.size(); ++i) {
            printf("%c%d", v[i].suite, v[i].value);
            if (i != v.size() - 1) {
                putchar(' ');
            }
        }
        putchar('\n');
    };

    {
        auto t = vc;
        bubbleSort(t);
        p(t);
        if (isStableSort(vc, t)) {
            printf("Stable\n");
        }
        else {
            printf("Not stable\n");
        }
    }
    {
        auto t = vc;
        selectionSort(t);
        p(t);
        if (isStableSort(vc, t)) {
            printf("Stable\n");
        }
        else {
            printf("Not stable\n");
        }
    }
}