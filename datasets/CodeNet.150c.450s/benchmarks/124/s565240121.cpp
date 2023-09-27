/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>
#include <string>

constexpr int32_t kMaxNumberOfVertices = 100;
constexpr int32_t kMaxWeight = 2000;
constexpr int32_t kMaxLoop = 2000000;
constexpr int32_t kInvalidWeight = INT32_MAX;
constexpr int32_t kInvalidVertex = -1;
constexpr int32_t kRootVertex = 0;

// ****************************************************

void CallDijkstraAlgorithm(std::istream &input_stream);

// ****************************************************

enum class VertexStatus { kUnchecked = 0, kCandidate, kAdded };

struct Vertex {
  VertexStatus status{VertexStatus::kUnchecked};
  int32_t distance_from_root{INT32_MAX};
  int32_t parent{kInvalidVertex};
};

class DijkstraAlgorithm {
 public:
  DijkstraAlgorithm() noexcept;
  ~DijkstraAlgorithm() noexcept;

  void SetNumberOfVertices(const int32_t number_of_vertices);
  void AddWeight(const int32_t vertex_1, const int32_t vertex_2, const int32_t weight);
  void CalculateShortestPaths();
  void Print() const noexcept;

 private:
  int32_t FindNextVertexToAdd() const noexcept;
  void UpdateExternalVertices(const int32_t vertex_index_added);
  void CheckAndUpdateExternalVertex(const int32_t vertex_index_added, const int32_t vertex_index_to_update);
  void UpdateCandidateByAddedVertex(const int32_t vertex_index_added, const int32_t vertex_index_to_update);
  bool CanBeUpdatedToSmallerDistance(const int32_t vertex_index_added, const int32_t vertex_index_to_update) const;
  void AddVertexToTree(const int32_t vertex_index_to_add);
  void QueueVertexAsRoot(const int32_t first_vertex_to_start);
  void AppendWeightToEdgeArray(const int32_t vertex_1, const int32_t vertex_2, const int32_t weight);
  bool CanAppendWeightToEdgeArray(const int32_t vertex_1, const int32_t vertex_2, const int32_t weight) const noexcept;
  bool CanBeMapped(const int32_t vertex_1, const int32_t vertex_2) const;
  bool IsExternalVertex(const int32_t vertex_index) const;
  bool IsTreeComponent(const int32_t vertex_index) const;
  bool InvalidVertexIndex(const int32_t vertex_index) const noexcept;

  DijkstraAlgorithm(const DijkstraAlgorithm &obj) = delete;
  DijkstraAlgorithm &operator=(const DijkstraAlgorithm &obj) = delete;
  DijkstraAlgorithm(DijkstraAlgorithm &&obj) = delete;
  DijkstraAlgorithm &operator=(DijkstraAlgorithm &&obj) = delete;

 private:
  int32_t number_of_vertices_;
  Vertex vertices_[kMaxNumberOfVertices];
  int32_t adjacency_matrix_[kMaxNumberOfVertices][kMaxNumberOfVertices];
};

void CallDijkstraAlgorithm(std::istream &input_stream) {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  DijkstraAlgorithm *single_source_shortest_path = new DijkstraAlgorithm();
  try {
    int32_t number_of_vertices;
    input_stream >> number_of_vertices;
    single_source_shortest_path->SetNumberOfVertices(number_of_vertices);
    for (int32_t i = 0; i < number_of_vertices; ++i) {
      int32_t vertex_from, number_of_edges_from_this;
      input_stream >> vertex_from >> number_of_edges_from_this;
      for (int32_t i = 0; i < number_of_edges_from_this; ++i) {
        int32_t vertex_to, weight;
        input_stream >> vertex_to >> weight;
        single_source_shortest_path->AddWeight(vertex_from, vertex_to, weight);
      }
    }
    single_source_shortest_path->CalculateShortestPaths();
    single_source_shortest_path->Print();
  } catch (...) {
    std::cerr << "ERROR: CallDijkstraAlgorithm()" << std::endl;
    throw;
  }
  delete single_source_shortest_path;
}

// ****************************************************

DijkstraAlgorithm::DijkstraAlgorithm() noexcept : number_of_vertices_(0) {
  for (auto &row : adjacency_matrix_) {
    for (int32_t &element : row) {
      element = kInvalidWeight;
    }
  }
}

DijkstraAlgorithm::~DijkstraAlgorithm() noexcept {}

void DijkstraAlgorithm::CalculateShortestPaths() {
  try {
    QueueVertexAsRoot(kRootVertex);
    for (int32_t i = 0; i < kMaxLoop; ++i) {
      const int32_t next_vertex_to_add = FindNextVertexToAdd();
      if (InvalidVertexIndex(next_vertex_to_add)) {
        break;
      } else {
        AddVertexToTree(next_vertex_to_add);
      }
    }
  } catch (...) {
    std::cerr << "ERROR: CalculateSumOfWeightsOfDijkstraAlgorithm()" << std::endl;
    throw;
  }
}

void DijkstraAlgorithm::Print() const noexcept {
  for (int32_t vertex_index = 0; vertex_index < number_of_vertices_; ++vertex_index) {
    std::cout << vertex_index << " " << vertices_[vertex_index].distance_from_root << std::endl;
  }
}

void DijkstraAlgorithm::AddVertexToTree(const int32_t vertex_index_to_add) {
  if (InvalidVertexIndex(vertex_index_to_add)) {
    std::cerr << "ERROR: AddVertexToTree(): Invalid arg: vertex_index_to_add = " << vertex_index_to_add << std::endl;
    throw 1;
  }
  Vertex &vertex_to_add = vertices_[vertex_index_to_add];
  vertex_to_add.status = VertexStatus::kAdded;

  UpdateExternalVertices(vertex_index_to_add);
}

void DijkstraAlgorithm::UpdateExternalVertices(const int32_t vertex_index_added) {
  if (InvalidVertexIndex(vertex_index_added)) {
    std::cerr << "ERROR: UpdateExternalVertices(): Invalid arg: vertex_index_added = " << vertex_index_added
              << std::endl;
    throw 1;
  }
  try {
    for (int32_t vertex_index_to_update = 0; vertex_index_to_update < number_of_vertices_; ++vertex_index_to_update) {
      CheckAndUpdateExternalVertex(vertex_index_added, vertex_index_to_update);
    }
  } catch (...) {
    std::cerr << "ERROR: UpdateExternalVertices()" << std::endl;
    throw;
  }
}

void DijkstraAlgorithm::CheckAndUpdateExternalVertex(const int32_t vertex_index_added,
                                                     const int32_t vertex_index_to_update) {
  if (InvalidVertexIndex(vertex_index_added)) {
    std::cerr << "ERROR: CheckAndUpdateExternalVertex(): Invalid arg: vertex_index_added = " << vertex_index_added
              << std::endl;
    throw 1;
  } else if (InvalidVertexIndex(vertex_index_to_update)) {
    std::cerr << "ERROR: CheckAndUpdateExternalVertex(): Invalid arg: vertex_index_to_update = "
              << vertex_index_to_update << std::endl;
    throw 1;
  } else {
    // DO NOTHING
  }
  try {
    if (IsExternalVertex(vertex_index_to_update) && CanBeMapped(vertex_index_added, vertex_index_to_update)) {
      if (CanBeUpdatedToSmallerDistance(vertex_index_added, vertex_index_to_update)) {
        UpdateCandidateByAddedVertex(vertex_index_added, vertex_index_to_update);
      }
    }
  } catch (...) {
    std::cerr << "ERROR: CheckAndUpdateExternalVertex()" << std::endl;
    throw;
  }
}

bool DijkstraAlgorithm::CanBeUpdatedToSmallerDistance(const int32_t vertex_index_added,
                                                      const int32_t vertex_index_to_update) const {
  bool can_be_updated_to_smaller;
  if (InvalidVertexIndex(vertex_index_added)) {
    std::cerr << "ERROR: CanBeUpdatedToSmallerDistance(): Invalid arg: vertex_index_added = " << vertex_index_added
              << std::endl;
    throw 1;
  } else if (InvalidVertexIndex(vertex_index_to_update)) {
    std::cerr << "ERROR: CanBeUpdatedToSmallerDistance(): Invalid arg: vertex_index_to_update = "
              << vertex_index_to_update << std::endl;
    throw 1;
  } else {
    const int32_t new_distance = vertices_[vertex_index_added].distance_from_root +
                                 adjacency_matrix_[vertex_index_added][vertex_index_to_update];
    can_be_updated_to_smaller = (new_distance < vertices_[vertex_index_to_update].distance_from_root);
  }
  return can_be_updated_to_smaller;
}

void DijkstraAlgorithm::UpdateCandidateByAddedVertex(const int32_t vertex_index_added,
                                                     const int32_t vertex_index_to_update) {
  bool can_be_updated_to_smaller;
  if (InvalidVertexIndex(vertex_index_added)) {
    std::cerr << "ERROR: UpdateCandidateByAddedVertex(): Invalid arg: vertex_index_added = " << vertex_index_added
              << std::endl;
    throw 1;
  } else if (InvalidVertexIndex(vertex_index_to_update)) {
    std::cerr << "ERROR: UpdateCandidateByAddedVertex(): Invalid arg: vertex_index_to_update = "
              << vertex_index_to_update << std::endl;
    throw 1;
  } else {
    Vertex &vertex_to_update = vertices_[vertex_index_to_update];
    const int32_t new_distance = vertices_[vertex_index_added].distance_from_root +
                                 adjacency_matrix_[vertex_index_added][vertex_index_to_update];
    vertex_to_update.distance_from_root = new_distance;
    vertex_to_update.parent = vertex_index_added;
    vertex_to_update.status = VertexStatus::kCandidate;
  }
}

bool DijkstraAlgorithm::IsExternalVertex(const int32_t vertex_index) const {
  if (InvalidVertexIndex(vertex_index)) {
    std::cerr << "ERROR: IsExternalVertex(): Invalid arg: vertex_index = " << vertex_index << std::endl;
    throw 1;
  }
  return (vertices_[vertex_index].status != VertexStatus::kAdded);
}

bool DijkstraAlgorithm::IsTreeComponent(const int32_t vertex_index) const {
  if (InvalidVertexIndex(vertex_index)) {
    std::cerr << "ERROR: IsTreeComponent(): Invalid arg: vertex_index = " << vertex_index << std::endl;
    throw 1;
  }
  return (vertices_[vertex_index].status == VertexStatus::kAdded);
}

bool DijkstraAlgorithm::CanBeMapped(const int32_t vertex_1, const int32_t vertex_2) const {
  if (InvalidVertexIndex(vertex_1)) {
    std::cerr << "ERROR: CanBeMapped(): Invalid arg: vertex_1 = " << vertex_1 << std::endl;
    throw 1;
  } else if (InvalidVertexIndex(vertex_2)) {
    std::cerr << "ERROR: CanBeMapped(): Invalid arg: vertex_2 = " << vertex_2 << std::endl;
    throw 1;
  } else {
    return (adjacency_matrix_[vertex_1][vertex_2] != INT32_MAX);
  }
}

int32_t DijkstraAlgorithm::FindNextVertexToAdd() const noexcept {
  int32_t minimum_distance = INT32_MAX;
  int32_t next_vertex_to_add = kInvalidVertex;
  for (int32_t vertex_index = 0; vertex_index < number_of_vertices_; ++vertex_index) {
    if (IsExternalVertex(vertex_index)) {
      const Vertex &current_vertex = vertices_[vertex_index];
      if (current_vertex.distance_from_root < minimum_distance) {
        next_vertex_to_add = vertex_index;
        minimum_distance = current_vertex.distance_from_root;
      }
    }
  }
  return next_vertex_to_add;
}

void DijkstraAlgorithm::QueueVertexAsRoot(const int32_t first_vertex_to_start) {
  if (InvalidVertexIndex(first_vertex_to_start)) {
    std::cerr << "ERROR: QueueVertexAsRoot(): Invalid arg: first_vertex_to_start = " << first_vertex_to_start
              << std::endl;
    throw 1;
  }
  vertices_[first_vertex_to_start].distance_from_root = 0;
}

void DijkstraAlgorithm::SetNumberOfVertices(const int32_t number_of_vertices) {
  number_of_vertices_ = number_of_vertices;
}

void DijkstraAlgorithm::AddWeight(const int32_t vertex_1, const int32_t vertex_2, const int32_t weight) {
  if (InvalidVertexIndex(vertex_1)) {
    std::cerr << "ERROR: AddWeight(): Invalid arg: vertex_1 = " << vertex_1 << std::endl;
    throw 1;
  } else if (InvalidVertexIndex(vertex_2)) {
    std::cerr << "ERROR: AddWeight(): Invalid arg: vertex_2 = " << vertex_2 << std::endl;
    throw 1;
  } else {
    try {
      adjacency_matrix_[vertex_1][vertex_2] = ((weight < 0) ? kInvalidWeight : weight);
    } catch (...) {
      std::cerr << "ERROR: AddWeight()" << std::endl;
      throw;
    }
  }
}

bool DijkstraAlgorithm::InvalidVertexIndex(const int32_t vertex_index) const noexcept {
  return ((vertex_index < 0) || (vertex_index >= number_of_vertices_));
}

// **********************************************************************

int main(int argc, char *argv[]) {
  try {
    CallDijkstraAlgorithm(std::cin);
  } catch (...) {
    std::cerr << "ERROR: main()" << std::endl;
  }
  return 0;
}

