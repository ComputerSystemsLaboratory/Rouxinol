#include<iostream>
#include<map>
#include<vector>
#include<array>

const int DiceSizeFace = 6;

using namespace std;
using DiceSides = map<int, array<int, 4>>;
using Labels = map<int, int>;

int main() {
  DiceSides sides = {
    {1, {5, 3, 2, 4}},
    {2, {1, 3, 6, 4}},
    {3, {1, 5, 6, 2}},
    {4, {1, 2, 6, 5}},
    {5, {1, 4, 6, 3}},
    {6, {5, 4, 2, 3}},
  };
  Labels label_to_value_list;
  Labels value_to_label_list;

  for(int i = 1; i <= DiceSizeFace; i++) {
    cin >> label_to_value_list[i];
    value_to_label_list[label_to_value_list[i]] = i;
  }

  int question_size;
  cin >> question_size;

  for(int i = 0; i < question_size; i++) {
    int top_label, face_label;
    int top_value, face_value;
    cin >> top_value >> face_value;
    top_label = value_to_label_list[top_value];
    face_label = value_to_label_list[face_value];

    int right_label;
    for(int j = 0; j < sides[top_label].size(); j++) {
      if(sides[top_label][j] == face_label) {
        int right_labe_index = (j - 1 + sides[top_label].size()) % sides[top_label].size();
        right_label = sides[top_label][right_labe_index];
        break;
      }
    }

    cout << label_to_value_list[right_label] << endl;
  }
}

