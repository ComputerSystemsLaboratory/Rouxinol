#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct card{
  int card;
  int number;
  string mark;
};

bool check_stability(vector<card>& b, vector<card>& s){
  for(int i = 0; i < b.size(); i++){
    if(b[i].card != s[i].card) return false;
  }
  return true;
}

int find_min(vector<card>& v, int sorted_end){
  int min_id;
  int min = 100;
  for(int i = sorted_end; i < v.size(); i++){
    if(v[i].number < min){
      min_id = i;
      min = v[i].number;
    }
  }
  return min_id;
}

void SelectionSort(vector<card>& data, vector<card>& s_sort){
  int id;
  for(int i = 0; i < s_sort.size(); i++){
    id = find_min(s_sort, i); 
    swap(s_sort[i],s_sort[id]);
  }
}

void BubbleSort(vector<card>& data, vector<card>& b_sort){
  for(int i = 0; i < b_sort.size()-1; i++){ 
    for(int j = 0; j < b_sort.size() - i; j++){
      if(b_sort[b_sort.size()-2 - j].number > b_sort[b_sort.size()-1 - j].number){
        swap(b_sort[b_sort.size()-2 - j], b_sort[b_sort.size()-1 - j]);
      }
    }
  }
}



card input_to_struct(string input){
  card data={*(input.substr(0,1)).c_str()-'A', atoi(input.substr(1).c_str()),input.substr(0,1)};
  return data;
}

int main(int argc,char* argv[]){
  int n = 0;
  string input;
  vector<card> data, b_sort, s_sort;
  cin >> n;
  for(int i = 0; i < n;i++) {
    cin >> input;
    data.push_back(input_to_struct(input));
  }
  
  for(int i = 0; i<data.size();i++){
    s_sort.push_back(data[i]);
    b_sort.push_back(data[i]);
  }

  SelectionSort(data, s_sort);
  BubbleSort(data, b_sort);
  for(int i = 0; i < data.size(); i++){
    cout << b_sort[i].mark <<  b_sort[i].number;
    if(i < data.size()-1) cout << " ";
    else cout << endl;
  }
  if(true){
    cout << "Stable" << endl;
  }else{
    cout << "Not Stable" << endl;
  }
  for(int i = 0; i < data.size(); i++){
    cout << s_sort[i].mark <<  s_sort[i].number;
    if(i < data.size()-1) cout << " ";
    else cout << endl;
  }
  if(check_stability(b_sort, s_sort)){
    cout << "Stable" << endl;
  }else{
    cout << "Not stable" << endl;
  }
} 