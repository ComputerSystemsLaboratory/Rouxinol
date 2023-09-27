#include <iostream>
#include <string>

using namespace std;

const int max_size = 1001;

int main() {
  int n_input; // number of inputs of pairs of sequences
  cin >> n_input;

  for (int i = 0; i < n_input; i++) {
    string seq1, seq2;
    cin >> seq1 >> seq2;
    int seq1_len = seq1.length(), seq2_len = seq2.length();
    int grid[max_size][max_size] = {{0}};
    for (int rowi = 1; rowi <= seq1_len; rowi++) {
      for (int coli = 1; coli <= seq2_len; coli++) {
	if (seq1[rowi - 1] == seq2[coli - 1]) {
	  grid[rowi][coli] = grid[rowi - 1][coli - 1] + 1;
	} else {
	  int above_grid = grid[rowi - 1][coli], left_grid = grid[rowi][coli - 1];
	  grid[rowi][coli] = (above_grid >= left_grid)?above_grid:left_grid;
	}
      }
    }
    cout << grid[seq1_len][seq2_len] << endl;
  }
}
	  
	

    