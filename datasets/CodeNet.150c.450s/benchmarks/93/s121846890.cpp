#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Card {
  char mark;
  int number;
};

void swap(Card& a, Card& b) {
  Card tmp = a;
  a = b;
  b = tmp;
}

int partition(vector<Card>& cards, int first_index, int last_index) {
  Card pivot = cards[last_index];

  int less_or_equal_tail = first_index;
  for(int i = first_index; i < last_index; i++) {
    if(cards[i].number <= pivot.number) {
      swap(cards[less_or_equal_tail++], cards[i]);
    }
  }

  swap(cards[less_or_equal_tail], cards[last_index]);

  return less_or_equal_tail;
}

void quick_sort(vector<Card>& cards, int first_index, int last_index) {
  // 配列の長さが1はソートする必要がない。
  if(!(first_index < last_index)) {
    return;
  }

  int partition_index = partition(cards, first_index, last_index);

  quick_sort(cards, first_index, partition_index - 1);
  quick_sort(cards, partition_index + 1, last_index);
}

int main() {
  int card_num;
  vector<Card> cards;
  map<int, vector<char>> orders;

  cin >> card_num;
  cards.resize(card_num);

  for(int i = 0; i < card_num; i++) {
    Card card;
    cin >> card.mark >> card.number;

    cards[i] = card;
    orders[card.number].push_back(card.mark);
  }

  quick_sort(cards, 0, cards.size() - 1);

  // init count number
  map<int, int> count_number;
  for(int i = 0; i < card_num; i++) {
    count_number[cards[i].number] = 0;
  }

  bool is_stable = true;
  for(int i = 0; i < card_num; i++) {
    Card current_card = cards[i];
    if(current_card.mark != orders[current_card.number][count_number[current_card.number]]) {
      is_stable = false;
      break;
    }

     count_number[cards[i].number]++;
  }

  if (is_stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  for(int i = 0; i < card_num ; i++) {
    cout << cards[i].mark << ' ' << cards[i].number << endl;
  }
}

