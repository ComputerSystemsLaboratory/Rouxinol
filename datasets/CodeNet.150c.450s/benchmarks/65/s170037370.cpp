#include <cstdlib>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

void selection_sort(vector<int> &list, vector<int> &order) {
  for (int i = 0; i < list.size(); ++i) {
    int mini = i;
    for (int j = i + 1; j < list.size(); ++j) {
      if (list[j] < list[mini]) {
        mini = j;
      }
    }
    if (mini != i) {
      int tmp = list[mini];
      list[mini] = list[i];
      list[i] = tmp;
      int tmp_order = order[mini];
      order[mini] = order[i];
      order[i] = tmp_order;
    }
  }
}

void bubble_sort(vector<int> &list, vector<int> &order) {
  for (int i = 0; i < list.size(); ++i) {
    for (int j = list.size() - 1; j > i; --j) {
      if (list[j] < list[j-1]) {
        int tmp = list[j];
        list[j] = list[j-1];
        list[j-1] = tmp;
        int tmp_order = order[j];
        order[j] = order[j-1];
        order[j-1] = tmp_order;
      }
    }
  }
}

int main() {
  int N;
  cin >> N;
  cin.ignore();
  string str;
  getline(cin, str);
  string tmp;
  vector<string> v;
  istringstream istr(str);
  while (getline(istr, tmp, ' ')) {
    v.push_back(tmp);
  }
  vector<pair<string, int>> cards;
  for (auto elem : v) {
    pair<string, int> card;
    card.first = elem;
    card.second = atoi(&elem.at(1));
    cards.push_back(card);
  }
  vector<int> bubble_list;
  vector<int> selection_list;
  for (auto card : cards) {
    bubble_list.push_back(card.second);
    selection_list.push_back(card.second);
  }
  vector<int> selection_order;
  vector<int> bubble_order;
  for (int i = 0; i < cards.size(); ++i) {
    bubble_order.push_back(i);
    selection_order.push_back(i);
  }
  bubble_sort(bubble_list, bubble_order);
  selection_sort(selection_list, selection_order);
  for (int i = 0; i < bubble_list.size() - 1; ++i) {
    cout << cards[bubble_order[i]].first << " ";
  }
  cout << cards[bubble_order.back()].first << endl;
  cout << "Stable" << endl;
  for (int i = 0; i < selection_list.size() - 1; ++i) {
    cout << cards[selection_order[i]].first << " ";
  }
  cout << cards[selection_order.back()].first << endl;
  if (selection_order == bubble_order) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
}