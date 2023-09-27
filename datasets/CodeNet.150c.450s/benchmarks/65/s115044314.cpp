#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

void Trace(vector<pair<char, char> > card)
{
    for(int i = 0; i < card.size(); i++) {
        if (i) {
            cout << " ";
        }
        cout << card[i].first << card[i].second;
    }
    cout << endl;
}

void BubbleSort(vector<pair<char, char> >& card)
{
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = card.size() - 1; j >= i + 1; j--) {
            if (card[j].second < card[j - 1].second) {
                swap(card[j], card[j - 1]);
                flag = true;
            }
        }
    }
}

void SelectionSort(vector<pair<char, char> >& card)
{
    for (int i = 0; i < card.size(); i++) {
        int minj = i;
        for (int j = i; j < card.size(); j++) {
            if (card[j].second < card[minj].second) {
                minj = j;
            }
        }
        if(minj != i) {
            swap(card[i], card[minj]);
        }
    }
}

string IsStable(vector<pair<char, char> > v1, vector<pair<char, char> > v2)
{
    for (int i = 0; i < v1.size(); i++) {
        vector<pair<char, char> > vi1, vi2;
        for (int j = 0; j < v1.size(); j++) {
            char ref = v1[i].second;
            if (v1[j].second == ref) {
                vi1.push_back(v1[j]);
            }
            if (v2[j].second == ref) {
                vi2.push_back(v2[j]);
            }
        }
        if (vi1 != vi2) {
            return "Not stable";
        }
    }

    return "Stable";
}

int main()
{
    int n;
    cin >> n;

    vector<pair<char, char> > card1, card2, card3;

    for (int i = 0; i < n; i++) {
        char c1, c2;
        cin >> c1 >> c2;
        card1.push_back(make_pair(c1, c2));
        card2.push_back(make_pair(c1, c2));
        card3.push_back(make_pair(c1, c2));
    }

    BubbleSort(card2);
    Trace(card2);
    cout << IsStable(card1, card2) << endl;

    SelectionSort(card3);
    Trace(card3);
    cout << IsStable(card1, card3) << endl;

    return 0;
}

