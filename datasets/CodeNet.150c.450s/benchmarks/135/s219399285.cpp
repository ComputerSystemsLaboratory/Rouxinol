#include <iostream>
#include <vector>
using namespace std;

int main(){
  for(;;){
    int N,M;
    cin >> N >> M;
    // cout << "input!"<<endl;
    vector<int> height(N,0);
    vector<int> width(M,0);
    if (N==0 && M==0) break;
    for(size_t h=0; h<height.size(); h++) cin >> height[h];
    for(size_t w=0; w<width.size(); w++) cin >> width[w];
    // width??????????????¶
    vector<int> comb_width(1501*750,0);
    vector<int> comb_height(1501*750,0);
    for(int i=0; i<M; i++){
      int len = 0;
      for(int j=i; j<M; j++){
        len += width[j];
        comb_width[len]++;
      }
    }
    for(int i=0; i<N; i++){
      int len = 0;
      for(int j=i; j<N; j++){
        len += height[j];
        comb_height[len]++;
      }
    }
    int count = 0;
    for(int i=0; i<1501*750; i++){
      count += comb_height[i]*comb_width[i];
    }
    cout << count << endl;
  }
}