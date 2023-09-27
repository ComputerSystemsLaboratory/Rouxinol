/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>
#include <string>

// ****************************************************
constexpr int32_t kMaxNumberOfVertices = 100;
constexpr int32_t kInvalidVertexIndex = -1;

void CallWarshallFloyd(std::istream &input_stream);

// ****************************************************

class WarshallFloyd {
 public:
  WarshallFloyd() noexcept;
  ~WarshallFloyd() noexcept;
  void SetNumberOfVertices(const int32_t number_of_vertices) noexcept;
  void AddEdge(const int32_t vertex_from_index, const int32_t vertex_to_index, const int32_t weight);
  void CalculateWarshallFloyd() noexcept;
  void Print() const noexcept;

 private:
  int32_t number_of_vertices_;
  int32_t distances_[kMaxNumberOfVertices][kMaxNumberOfVertices];
};

void CallWarshallFloyd(std::istream &input_stream) {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  WarshallFloyd *all_pairs_shortest_path = new WarshallFloyd();
  try {
    int32_t number_of_vertices, number_of_edges;
    input_stream >> number_of_vertices >> number_of_edges;
    all_pairs_shortest_path->SetNumberOfVertices(number_of_vertices);
    for (int32_t i = 0; i < number_of_edges; ++i) {
      int32_t vertex_from_index, vertex_to_index, weight;
      input_stream >> vertex_from_index >> vertex_to_index >> weight;
      all_pairs_shortest_path->AddEdge(vertex_from_index, vertex_to_index, weight);
    }
    all_pairs_shortest_path->CalculateWarshallFloyd();
    all_pairs_shortest_path->Print();
  } catch (...) {
    std::cerr << "ERROR: CallWarshallFloyd()" << std::endl;
    throw;
  }
  delete all_pairs_shortest_path;
}

// ****************************************************

WarshallFloyd::WarshallFloyd() noexcept : number_of_vertices_(0) {}

WarshallFloyd::~WarshallFloyd() noexcept {}

void WarshallFloyd::SetNumberOfVertices(const int32_t number_of_vertices) noexcept {
  number_of_vertices_ = number_of_vertices;
  for (int32_t from = 0; from < number_of_vertices; ++from) {
    for (int32_t to = 0; to < number_of_vertices; ++to) {
      if (from == to) {
        distances_[from][to] = 0;
      } else {
        distances_[from][to] = INT32_MAX;
      }
    }
  }
}

void WarshallFloyd::AddEdge(const int32_t vertex_from_index, const int32_t vertex_to_index, const int32_t weight) {
  distances_[vertex_from_index][vertex_to_index] = weight;
}

void WarshallFloyd::CalculateWarshallFloyd() noexcept {
  for (int32_t via = 0; via < number_of_vertices_; ++via) {
    for (int32_t from = 0; from < number_of_vertices_; ++from) {
      for (int32_t to = 0; to < number_of_vertices_; ++to) {
        if (distances_[from][via] != INT32_MAX && distances_[via][to] != INT32_MAX) {
          const int32_t distance_candidate = distances_[from][via] + distances_[via][to];
          if (distance_candidate < distances_[from][to]) {
            distances_[from][to] = distance_candidate;
          }
        }
      }
    }
  }
}

void WarshallFloyd::Print() const noexcept {
  bool negative_cycle = false;
  for (int32_t i = 0; i < number_of_vertices_; ++i) {
    if (distances_[i][i] < 0) {
      negative_cycle = true;
    }
  }
  if (negative_cycle) {
    std::cout << "NEGATIVE CYCLE" << std::endl;
  } else {
    for (int32_t from = 0; from < number_of_vertices_; ++from) {
      for (int32_t to = 0; to < number_of_vertices_; ++to) {
        if (to != 0) {
          std::cout << " ";
        }
        if (distances_[from][to] == INT32_MAX) {
          std::cout << "INF";
        } else {
          std::cout << distances_[from][to];
        }
      }
      std::cout << std::endl;
    }
  }
}

// **********************************************************************

int main() {
  try {
    CallWarshallFloyd(std::cin);
  } catch (...) {
    std::cerr << "ERROR: main()" << std::endl;
  }
  return 0;
}

