/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

constexpr int32_t kMaxNumberOfGridX = 20000;

void CallCrossSectionDiagram(std::istream &input_stream) noexcept;

enum class Slope : int32_t { kFallingToRight = 0, kFlat, kRisingToRight };

struct Pond {
  int32_t left_x{0};
  int32_t area{0};
};

class CrossSectionDiagram {
 public:
  CrossSectionDiagram() noexcept;
  ~CrossSectionDiagram() noexcept;
  void LoadOneSlope(const char ch);
  void PrintAreas() noexcept;

 private:
  CrossSectionDiagram(const CrossSectionDiagram &obj) = delete;
  CrossSectionDiagram &operator=(const CrossSectionDiagram &rhs) = delete;
  CrossSectionDiagram(CrossSectionDiagram &&obj) = delete;
  CrossSectionDiagram &operator=(CrossSectionDiagram &&rhs) = delete;

  static Slope InterpretSlope(const char c);

 private:
  int32_t sum_of_areas_;
  int32_t current_x_position_;
  std::stack<int32_t> slopes_;
  std::stack<Pond> ponds_;
};

void CallCrossSectionDiagram(std::istream &input_stream) noexcept {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  CrossSectionDiagram *cross_section_diagram = new CrossSectionDiagram();
  try {
    for (int32_t index_grid_x = 0; index_grid_x < kMaxNumberOfGridX; ++index_grid_x) {
      if (input_stream.eof()) {
        break;
      }
      char ch;
      input_stream.get(ch);
      if (ch == '\n') {
        break;
      }
      cross_section_diagram->LoadOneSlope(ch);
    }
    cross_section_diagram->PrintAreas();
  } catch (...) {
    std::cerr << "ERROR: Load()" << std::endl;
    // DO NOT THROW ERROR
  }
  delete cross_section_diagram;
}

// ****************************************************

CrossSectionDiagram::CrossSectionDiagram() noexcept : sum_of_areas_(0), current_x_position_(-1) {}
CrossSectionDiagram::~CrossSectionDiagram() noexcept {}

void CrossSectionDiagram::LoadOneSlope(const char ch) {
  ++current_x_position_;
  if (current_x_position_ >= kMaxNumberOfGridX) {
    std::cerr << "ERROR: LoadOneSlope(): current_x_position_ reached a max limit" << std::endl;
    throw 1;
  }
  try {
    const Slope slope = InterpretSlope(ch);
    switch (slope) {
      case Slope::kFallingToRight:
        slopes_.push(current_x_position_);
        break;
      case Slope::kFlat:
        break;
      case Slope::kRisingToRight: {
        if (slopes_.empty()) {
          // DO NOTHING
        } else {
          const int32_t position_falling_to_right = slopes_.top();
          slopes_.pop();
          const int32_t current_area = (current_x_position_ - position_falling_to_right);
          sum_of_areas_ += current_area;
          Pond new_pond;
          new_pond.area = current_area;
          new_pond.left_x = position_falling_to_right;
          while (ponds_.size() > 0 && ponds_.top().left_x > position_falling_to_right) {
            new_pond.area += ponds_.top().area;
            ponds_.pop();
          }
          ponds_.push(new_pond);
        }
        break;
      }
      default:
        // NEVER REACH
        std::cerr << "ERROR: LoadOneSlope(): Should not be reached" << std::endl;
        throw 1;
    }
  } catch (...) {
    std::cerr << "ERROR: LoadOneSlope()" << std::endl;
    throw;
  }
}

void CrossSectionDiagram::PrintAreas() noexcept {
  std::cout << sum_of_areas_ << std::endl;

  std::vector<int32_t> areas_of_each_pond;
  while (ponds_.size() > 0U) {
    areas_of_each_pond.push_back(ponds_.top().area);
    ponds_.pop();
  }
  std::reverse(areas_of_each_pond.begin(), areas_of_each_pond.end());
  std::cout << areas_of_each_pond.size();
  for (std::vector<int32_t>::iterator itr = areas_of_each_pond.begin(); itr != areas_of_each_pond.end(); ++itr) {
    std::cout << " " << (*itr);
  }
  std::cout << std::endl;
}

Slope CrossSectionDiagram::InterpretSlope(const char c) {
  Slope current_slope;
  switch (c) {
    case '\\':
      current_slope = Slope::kFallingToRight;
      break;
    case '/':
      current_slope = Slope::kRisingToRight;
      break;
    case '_':
      current_slope = Slope::kFlat;
      break;
    default:
      std::cerr << "ERROR: InterpretSlope(): invalid char." << std::endl;
      throw 1;
  }
  return current_slope;
}

int main() {
  try {
    CallCrossSectionDiagram(std::cin);
  } catch (...) {
    std::cerr << "ERROR: main()" << std::endl;
  }
  return 0;
}

