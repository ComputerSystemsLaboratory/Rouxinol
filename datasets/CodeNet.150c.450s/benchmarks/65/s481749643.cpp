#include <iostream>
#include <string>

using namespace std;

class Card {
public:
  int init_order;
  char pattern[3];
public:
  int value(){
    //if(pattern.length() == 2){
      return pattern[1] - '0';
    //}
    //return 0;
  }
  int InitOrder(){
    return init_order;
  }
  string Pattern(){
    string x = pattern;
    return x;
  }
  Card(string pattern,int order){
    this->pattern[0] = pattern[0];
    this->pattern[1] = pattern[1];
    this->pattern[2] = '\0';
    this->init_order = order;
  }
  Card(){}
};

class CardList {
  int count;
  int capacity;
  Card *data;
public:
  int Count(){return count;}
  CardList(CardList &original);
  CardList(int capacity){
    this->data = new Card[capacity];
    this->capacity = capacity;
    this->count = 0;
  }
  ~CardList(){
    delete [] data;
  }
  void Add(string pattern){
    Card c(pattern, count);
    data[count] = c;
    count++;
  }
  Card &operator[](int i){
    return data[i];
  }
  void output();
  bool isStable();
};

CardList::CardList(CardList &original){
  this->data = new Card[original.capacity];
  //cout << "debug original.capacity = " << original.capacity << endl;
  for(int i = 0; i < original.capacity; i++){
    this->data[i] = original.data[i];
    //cout << "debug this->data[i] = " << this->data[i].Pattern();
    //cout << " original.data[i] = " << original.data[i].Pattern();
    //cout << endl;
  }
  this->capacity = original.capacity;
  this->count = original.count;
}

bool CardList::isStable(){
    for(int i = 1; i < count; i++){
      if(data[i].value() == data[i- 1].value() &&
        data[i].InitOrder() < data[i-1].InitOrder()){
        return false;
      }
    }
    return true;
}
void CardList::output(){
  for (int i = 0; i < count; i++) {
    //cout << "debug i = " << i << endl;
    cout << data[i].Pattern();
    if (i == count - 1){
      cout << endl;
    } else {
      cout << " ";
    }
  }
  if (isStable()){
    cout << "Stable\n";
  } else {
    cout << "Not stable\n";
  }
}
void swap(Card &a,Card &b){
  Card tmp = a;
  a = b;
  b = tmp;
}

void BubbleSort(CardList &C){
  for (int i = 0; i < C.Count(); i++) {
    for (int j = C.Count() - 1; j >= i + 1; j--) {
      if(C[j].value() < C[j - 1].value()){
        swap(C[j], C[j - 1]);
      }
    }
  }
}

void SelectionSort(CardList &C){
  for(int i = 0; i < C.Count(); i++){
    int minJ = i;
    for(int j = i; j < C.Count(); j++){
      if(C[j].value() < C[minJ].value()){
        minJ = j;
      }
    }
    swap(C[i], C[minJ]);
  }
}

int main(){
  int num;
  cin >> num;
  CardList c(num);
  for(int i = 0; i < num; i++){
    string pattern;
    cin >> pattern;
    c.Add(pattern);
  }

  CardList c1 = c;
  BubbleSort(c1);
  c1.output();

  CardList c2 = c;
  SelectionSort(c2);
  c2.output();

}