#include <vector>
#include <iostream>
using namespace std;

void heap_print(vector<int> keys){
  for(int j=0;j<keys.size();j++){
    int i = j+1;
    cout << "node " << i << ": ";
    cout << "key = " << keys[i-1] << ", ";
    if(i!=1){
      cout << "parent key = " << keys[(i/2)-1] << ", ";
    }

    if(2*i-1 < keys.size()){
      cout << "left key = " << keys[(i*2)-1] << ", ";
    }

    if(2*i+1-1 < keys.size()){
      cout << "right key = " << keys[i*2+1-1] << ", ";
    }

    cout << endl;
  }
	
}

int main()
{
  int n;
  cin >> n;

  vector<int> keys;
  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    keys.push_back(tmp);
  }

  heap_print(keys);

  return 0;
}