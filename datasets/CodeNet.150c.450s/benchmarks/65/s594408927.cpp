#include <vector>
#include <iostream>
#include <algorithm>

struct card{ // represents each cards
  unsigned num;
  char suit;
  bool operator>(card &v){
    return (num > v.num);
  }
};

std::ostream& operator<<(std::ostream &os, card &v){
  os << v.suit << v.num;
  return os;
}
std::istream& operator>>(std::istream &is, card &v){
  is >> v.suit >> v.num;
  return is;
}

typedef std::vector<card> bunch; // represents bunch of cards

std::istream& operator>>(std::istream &is, bunch &v){
  card buf;
  is >> buf;
  v.push_back(buf);
  return is;
}

std::ostream& operator<<(std::ostream &os, bunch &v){
  for(unsigned i=0;i<(v.size()-1);i++){
    os << v[i] << ' ';
  }
  os << v[v.size()-1];
  return os;
}

void bubble_sort(bunch &b){
  const unsigned n = b.size();
  for(unsigned i = 0; i < n; i++){
    for(unsigned j = n-1; j > i; j--){
      if(b[j-1] > b[j]){
        std::swap(b[j-1],b[j]);
      }
    }
  }
}

void selection_sort(bunch &b){
  const unsigned n = b.size();
  for(unsigned i = 0; i < n; i++){
    unsigned min = i;
    for(unsigned j = i; j < n; j++){
      if(b[min] > b[j]){
        min = j;
      }
    }
    std::swap(b[min],b[i]);
  }
}

class pair_table{
  struct same_nums{
    unsigned num;
    std::string suits;
    bool operator==(same_nums &v){
      return (num==v.num)&&(suits==v.suits);
    }
  };
  std::vector<same_nums> pairs;
  void make_pair(bunch &b){
    bool has_same_number = false;
    struct same_nums buf;
    const unsigned target = b[0].num;
    auto is_same_num = [target](card &c){
      return target == c.num;
    };
    buf.num = target;
    buf.suits = b[0].suit;
    b.erase(b.begin());

    auto it = b.begin();
    while(
      ( it = std::find_if(b.begin(),b.end(),is_same_num) ) != b.end()
    ){
      buf.suits += it->suit;
      b.erase(it);
      has_same_number = true;
    }
    if(has_same_number){pairs.push_back(buf);}
    if(!b.empty()){
      make_pair(b);
    }
    else{
      std::sort(pairs.begin(),pairs.end(),
                [](const same_nums &c1,const same_nums &c2){return c1.num < c2.num;}
      );
    }
  }
public:
  pair_table(bunch b){
    make_pair(b);
  }
  bool operator==(pair_table &&v){
    return std::equal(pairs.begin(),pairs.end(),v.pairs.begin());
  }
};

int main(){
  bunch org;
  unsigned n;
  std::cin >> n;
  for(;n;n--){
    std::cin >> org;
  }

  pair_table a(org);
  pair_table b(org);

  bunch bub = org;
  bunch sel = org;

  bubble_sort(bub);
  std::cout << bub << '\n';
  std::cout << (pair_table(org)==pair_table(bub)?"Stable":"Not stable") << std::endl;

  selection_sort(sel);
  std::cout << sel << '\n';
  std::cout << (pair_table(org)==pair_table(sel)?"Stable":"Not stable") << std::endl;

}