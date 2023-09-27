/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>
#include <string>

constexpr int32_t kMaxArraySize = 100000;
constexpr char kInvalidSymbol = -1;
constexpr int32_t kInvalidNumber = -1;

void CallQuickSort(std::istream &input_stream);

struct Card {
  char symbol{kInvalidSymbol};
  int32_t number{kInvalidNumber};
};

class QuickSort {
 public:
  QuickSort() noexcept;
  ~QuickSort() noexcept;
  void AddCard(const std::string &symbol, const int32_t number);
  void ResetData() noexcept;
  Card GetCard(const int32_t index);
  void Sort();
  void Print() const noexcept;
  bool IsStable(const Card cards_[kMaxArraySize]) const noexcept;

 private:
  QuickSort(const QuickSort &obj) noexcept = delete;
  QuickSort &operator=(const QuickSort &obj) noexcept = delete;
  QuickSort(QuickSort &&obj) = delete;
  QuickSort &operator=(QuickSort &&obj) = delete;

  void ComputeQuickSort(const int32_t start, const int32_t end);
  int32_t ComputePartition(const int32_t start, const int32_t end);
  void Swap(const int32_t index_1, const int32_t index_2);
  bool IndexOutOfRange(const int32_t index) const noexcept;

 private:
  int32_t size_;
  Card cards_[kMaxArraySize];
};

bool IsSameCard(const Card &a, const Card &b) noexcept;
bool IsSameValue(const Card &a, const Card &b) noexcept;
Card ConvertCard(const std::string &symbol, const int32_t number);

void CallQuickSort(std::istream &input_stream) {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  static Card original_cards[kMaxArraySize];
  QuickSort *quick_sort = new QuickSort();
  try {
    int32_t count;
    input_stream >> count;
    for (int32_t index = 0; index < count; ++index) {
      std::string card_symbol;
      int32_t card_number;
      input_stream >> card_symbol >> card_number;
      quick_sort->AddCard(card_symbol, card_number);
      Card ccard = ConvertCard(card_symbol, card_number);
      original_cards[index] = ccard;
    }
    quick_sort->Sort();
    const bool is_stable = quick_sort->IsStable(original_cards);
    if (is_stable) {
      std::cout << "Stable" << std::endl;
    } else {
      std::cout << "Not stable" << std::endl;
    }
    quick_sort->Print();
  } catch (...) {
    std::cout << "ERROR: CallQuickSort()" << std::endl;
    throw;
  }
  delete quick_sort;
}

// ****************************************************

QuickSort::QuickSort() noexcept : size_(0), cards_{} {}
QuickSort::~QuickSort() noexcept {}

void QuickSort::AddCard(const std::string &symbol, const int32_t number) {
  if (size_ >= kMaxArraySize) {
    std::cout << "ERROR: AddCard(): Data size exceeded a limit = " << kMaxArraySize << std::endl;
    throw 1;
  } else if (symbol.size() != 1) {
    std::cout << "ERROR: AddCard(): Invalid input symbol. symbol = \"" << symbol << "\"" << std::endl;
    throw 1;
  } else {
    cards_[size_].symbol = symbol.c_str()[0];
    cards_[size_].number = number;
    size_++;
  }
}

void QuickSort::ResetData() noexcept {
  size_ = 0;
}

Card QuickSort::GetCard(const int32_t index) {
  if (IndexOutOfRange(index)) {
    std::cout << "ERROR: GetCard(): Out of range: index = " << index << std::endl;
    throw 1;
  }
  return cards_[index];
}

void QuickSort::Sort() {
  try {
    ComputeQuickSort(0, size_ - 1);
  } catch (...) {
    std::cout << "ERROR: Sort()" << std::endl;
    throw;
  }
}

void QuickSort::Print() const noexcept {
  char str[2];
  str[1] = '\0';
  for (int32_t index = 0; index < size_; ++index) {
    const Card card = cards_[index];
    str[0] = card.symbol;
    std::cout << str << " " << card.number << std::endl;
  }
}

void QuickSort::ComputeQuickSort(const int32_t start, const int32_t end) {
  try {
    if (start < end) {
      const int32_t index_pivot = ComputePartition(start, end);
      ComputeQuickSort(start, index_pivot - 1);
      ComputeQuickSort(index_pivot + 1, end);
    }
  } catch (...) {
    std::cout << "ERROR: ComputeQuickSort()" << std::endl;
    throw;
  }
}

int32_t QuickSort::ComputePartition(const int32_t start, const int32_t end) {
  int32_t index_pivot = -1;
  if (IndexOutOfRange(start)) {
    std::cout << "ERROR: ComputePartition(): Out of range: start = " << start << std::endl;
    throw 1;
  } else if (IndexOutOfRange(end)) {
    std::cout << "ERROR: ComputePartition(): Out of range: end = " << end << std::endl;
    throw 1;
  } else {
    try {
      // より汎用性をもたせるには、endを使うのでは無くpivot_indexを外部から指定するようにするべき。
      const int32_t value_pivot = cards_[end].number;
      int32_t index_store = start;
      for (int32_t index_compare = start; index_compare < end; ++index_compare) {
        if (cards_[index_compare].number <= value_pivot) {
          Swap(index_compare, index_store);
          ++index_store;
        }
      }
      Swap(end, index_store);
      index_pivot = index_store;
    } catch (...) {
      std::cout << "ERROR: ComputePartition()" << std::endl;
      throw;
    }
  }
  return index_pivot;
}

void QuickSort::Swap(const int32_t index_1, const int32_t index_2) {
  if ((IndexOutOfRange(index_1)) || (IndexOutOfRange(index_2))) {
    std::cout << "ERROR: Swap(): Out of range: index_1=" << index_1 << ", index_2=" << index_2 << std::endl;
    throw 1;
  } else {
    const Card temp = cards_[index_2];
    cards_[index_2] = cards_[index_1];
    cards_[index_1] = temp;
  }
}

bool QuickSort::IndexOutOfRange(const int32_t index) const noexcept {
  return ((index) < 0 || (index >= size_));
}

bool QuickSort::IsStable(const Card cards_compare[kMaxArraySize]) const noexcept {
  for (int32_t index_sorted_1 = 0; index_sorted_1 < size_ - 1; ++index_sorted_1) {
    for (int32_t index_sorted_2 = index_sorted_1 + 1; index_sorted_2 < size_; ++index_sorted_2) {
      if (IsSameValue(cards_[index_sorted_1], cards_[index_sorted_2])) {
        for (int32_t index_original_1 = 0; index_original_1 < size_ - 1; ++index_original_1) {
          if (IsSameCard(cards_compare[index_original_1], cards_[index_sorted_2])) {
            for (int32_t index_original_2 = index_original_1; index_original_2 < size_; ++index_original_2) {
              if (IsSameCard(cards_compare[index_original_2], cards_[index_sorted_1])) {
                return false;
              }
            }
          }
        }
      } else {
        break;
      }
    }
  }
  return true;
}

bool IsSameCard(const Card &a, const Card &b) noexcept {
  return (a.symbol == b.symbol) && (a.number == b.number);
}
bool IsSameValue(const Card &a, const Card &b) noexcept {
  return (a.number == b.number);
}

Card ConvertCard(const std::string &symbol, const int32_t number) {
  if (symbol.size() != 1) {
    std::cout << "ERROR: ConvertCard(): Invalid input symbol. symbol = \"" << symbol << "\"" << std::endl;
    throw 1;
  }
  Card ccard;
  ccard.symbol = symbol.c_str()[0];
  ccard.number = number;
  return ccard;
}

int main(int argc, char *argv[]) {
  try {
    CallQuickSort(std::cin);
  } catch (...) {
    std::cout << "ERROR: main()" << std::endl;
  }
  return 0;
}


