#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX_SEQ 1000

int main() {
  int n; cin >> n;

  for(int i=0;i<n;i++) {
    char seq1[MAX_SEQ+1];
    char seq2[MAX_SEQ+1];
    vector<char> seq_sub;
    cin >> seq1;
    cin >> seq2;
    int seq1_len = 0;
    int seq2_len = 0;
    while(seq1[seq1_len] != '\0')
      seq1_len++;
    while(seq2[seq2_len] != '\0')
      seq2_len++;

    /*
    cout << "length" << endl;
    cout << seq1_len << endl;
    cout << seq2_len << endl;
    */

    int lcs[seq1_len+1][seq2_len+1];
    for(int i=0;i<=seq1_len;i++)
      lcs[i][0] = 0;
    for(int i=0;i<=seq2_len;i++)
      lcs[0][i] = 0;

    for(int i=1;i<=seq1_len;i++) {
      for(int j=1;j<=seq2_len;j++) {
        int s1_it = i-1;
        int s2_it = j-1;
        if(seq1[s1_it] == seq2[s2_it]) {
          lcs[i][j] = lcs[i-1][j-1] + 1;
        }
        else {
          lcs[i][j] = max(lcs[i][j-1],lcs[i-1][j]);
        }
      }
    }
    /*
    cout << "lcs[i][j]" << endl;
    for(int i=0;i<=seq1_len;i++) {
      for(int j=0;j<=seq2_len;j++) {
        cout << lcs[i][j] << " ";
      }
      cout << endl;
    }
    */

    cout << lcs[seq1_len][seq2_len] << endl;
  }
}