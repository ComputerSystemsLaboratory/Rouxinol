/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>

constexpr int32_t kMaxNumberOfMatrices = 100;
constexpr int32_t kMaxNumberOfRowsAndCols = 100;

void CallMatrixChainMultiplication(std::istream &input_stream);

struct Matrix {
  int32_t number_of_rows{0};
  int32_t number_of_columns{0};
};

struct LookUp {
  bool calculated{false};
  int32_t mcm{INT32_MAX};
};

class MatrixChainMultiplication {
 public:
  MatrixChainMultiplication() noexcept;
  ~MatrixChainMultiplication() noexcept;

  void AddMatrix(const int32_t number_of_rows, const int32_t number_of_columns);
  int32_t CalculateMinMultiplyCount();

  static int32_t GetMultiplyCount(const Matrix &a, const Matrix &b);
  static Matrix GetMultipliedMatrix(const Matrix &a, const Matrix &b);
  static Matrix GenerateMatrix(const int32_t number_of_rows, const int32_t number_of_columns);

 private:
  int32_t CalculateMcmRecursively(const int32_t start, const int32_t end);
  bool IsInvalidIndex(const int32_t index) const noexcept;
  bool IsInvalidArg(const int32_t start, const int32_t end) const noexcept;
  bool IsAlreadyCalculated(const int32_t start, const int32_t end) const;
  int32_t GetCalculatedResult(const int32_t start, const int32_t end) const;
  void StoreCalculatedResult(const int32_t start, const int32_t end, const int32_t mcm);

  MatrixChainMultiplication(const MatrixChainMultiplication &obj) = delete;
  MatrixChainMultiplication &operator=(const MatrixChainMultiplication &obj) = delete;
  MatrixChainMultiplication(MatrixChainMultiplication &&obj) = delete;
  MatrixChainMultiplication &operator=(MatrixChainMultiplication &&obj) = delete;

 private:
  int32_t number_of_matrices_;
  Matrix matrices_[kMaxNumberOfMatrices];
  LookUp look_up_table_[kMaxNumberOfMatrices][kMaxNumberOfMatrices];
};

void CallMatrixChainMultiplication(std::istream &input_stream) {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  MatrixChainMultiplication *matrix_chain_multiplication = new MatrixChainMultiplication();
  try {
    int32_t number_of_matrices;
    input_stream >> number_of_matrices;
    for (int32_t i = 0; i < number_of_matrices; ++i) {
      int32_t number_of_rows, number_of_columns;
      input_stream >> number_of_rows >> number_of_columns;
      matrix_chain_multiplication->AddMatrix(number_of_rows, number_of_columns);
    }
    const int32_t multiply_count = matrix_chain_multiplication->CalculateMinMultiplyCount();
    std::cout << multiply_count << std::endl;
  } catch (...) {
    std::cerr << "ERROR: CallMatrixChainMultiplication()" << std::endl;
    throw;
  }
  delete matrix_chain_multiplication;
}

// ****************************************************

MatrixChainMultiplication::MatrixChainMultiplication() noexcept : number_of_matrices_(0) {}

MatrixChainMultiplication::~MatrixChainMultiplication() noexcept {}

void MatrixChainMultiplication::AddMatrix(const int32_t number_of_rows, const int32_t number_of_columns) {
  if (number_of_matrices_ >= kMaxNumberOfMatrices) {
    std::cerr << "ERROR: AddMatrix(): Number of matricis size exceeded a limit = " << kMaxNumberOfMatrices << std::endl;
    throw 1;
  }
  const int32_t store_index = number_of_matrices_;
  ++number_of_matrices_;
  matrices_[store_index] = GenerateMatrix(number_of_rows, number_of_columns);
}

int32_t MatrixChainMultiplication::CalculateMinMultiplyCount() {
  const int32_t count = CalculateMcmRecursively(0, number_of_matrices_ - 1);
  return count;
}

int32_t MatrixChainMultiplication::CalculateMcmRecursively(const int32_t start, const int32_t end) {
  int32_t mcm;
  if (start == end) {
    mcm = 0;
  } else if (IsInvalidArg(start, end)) {
    std::cerr << "ERROR: CalculateMcmRecursively(): Invalid arg start = " << start << ", end = " << end << std::endl;
    throw 1;
  } else {
    try {
      if (IsAlreadyCalculated(start, end)) {
        mcm = GetCalculatedResult(start, end);
      } else {
        mcm = INT32_MAX;
        for (int32_t i = start; i <= end - 1; ++i) {
          const int32_t temp_mcm =
              matrices_[start].number_of_rows * matrices_[i].number_of_columns * matrices_[end].number_of_columns +
              CalculateMcmRecursively(start, i) + CalculateMcmRecursively(i + 1, end);
          mcm = std::min(mcm, temp_mcm);
        }
        StoreCalculatedResult(start, end, mcm);
      }
    } catch (...) {
      std::cerr << "ERROR: CalculateMcmRecursively()" << std::endl;
      throw;
    }
  }
  return mcm;
}

bool MatrixChainMultiplication::IsInvalidIndex(const int32_t index) const noexcept {
  return ((index < 0) || (index > number_of_matrices_));
}

bool MatrixChainMultiplication::IsInvalidArg(const int32_t start, const int32_t end) const noexcept {
  const bool is_invalid_start = IsInvalidIndex(start);
  const bool is_invalid_end = IsInvalidIndex(end);
  const bool is_invalid_order = (start > end);
  return is_invalid_start || is_invalid_end || is_invalid_order;
}

bool MatrixChainMultiplication::IsAlreadyCalculated(const int32_t start, const int32_t end) const {
  if (IsInvalidArg(start, end)) {
    std::cerr << "ERROR: IsAlreadyCalculated(): start = " << start << ", end = " << end << std::endl;
    throw 1;
  }
  return look_up_table_[start][end].calculated;
}

int32_t MatrixChainMultiplication::GetCalculatedResult(const int32_t start, const int32_t end) const {
  if (IsInvalidArg(start, end)) {
    std::cerr << "ERROR: GetCalculatedResult(): start = " << start << ", end = " << end << std::endl;
    throw 1;
  }
  return look_up_table_[start][end].mcm;
}

void MatrixChainMultiplication::StoreCalculatedResult(const int32_t start, const int32_t end, const int32_t mcm) {
  if (IsInvalidArg(start, end)) {
    std::cerr << "ERROR: GetCalculatedResult(): start = " << start << ", end = " << end << std::endl;
    throw 1;
  }
  look_up_table_[start][end].mcm = mcm;
  look_up_table_[start][end].calculated = true;
}

int32_t MatrixChainMultiplication::GetMultiplyCount(const Matrix &a, const Matrix &b) {
  if (a.number_of_columns != b.number_of_rows) {
    std::cerr << "ERROR: GetMultiplyCount(): Invalid a.number_of_columns = " << a.number_of_columns
              << ", b.number_of_rows = " << b.number_of_rows << std::endl;
    throw 1;
  }
  return a.number_of_rows * a.number_of_columns * b.number_of_columns;
}

Matrix MatrixChainMultiplication::GetMultipliedMatrix(const Matrix &a, const Matrix &b) {
  if (a.number_of_columns != b.number_of_rows) {
    std::cerr << "ERROR: GetMultipliedMatrix(): Invalid a.number_of_columns = " << a.number_of_columns
              << ", b.number_of_rows = " << b.number_of_rows << std::endl;
    throw 1;
  }
  const Matrix result = GenerateMatrix(a.number_of_rows, b.number_of_columns);
  return result;
}

Matrix MatrixChainMultiplication::GenerateMatrix(const int32_t number_of_rows, const int32_t number_of_columns) {
  Matrix mat;
  mat.number_of_rows = number_of_rows;
  mat.number_of_columns = number_of_columns;
  return mat;
}

int main(int argc, char *argv[]) {
  try {
    CallMatrixChainMultiplication(std::cin);
  } catch (...) {
    std::cerr << "ERROR: main()" << std::endl;
  }
  return 0;
}

