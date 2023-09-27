#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > MakeCombination(int, int);
void MakeCombinationInner(vector<int>&, int);
void CountSum(vector< vector<int> >, vector< vector<int> >, vector<int>, int, int, int&);
int CountSumInner(vector<int>, int);

int main(){
  int i, j, n, m, x, sum, _sum;
  vector<int> _data, count_data;
  vector< vector<int> > data, comb_data;

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;

    for(i=0; i<m; ++i)
      count_data.push_back(0);

    for(i=0; i<n; ++i){
      for(j=0; j<m; ++j){
	cin >> x;
	if(x == 0) ++count_data[j];
	_data.push_back(x);
      }
      data.push_back(_data);
      _data.clear();
    }

    sum = CountSumInner(count_data, n);

    for(i=0; i<data.size(); ++i){
      comb_data = MakeCombination(n, i+1);
      _sum = sum;
      CountSum(data, comb_data, count_data, n, m, _sum);
      if(sum < _sum) sum = _sum;
      if(sum == n*m) break;
    }

    cout << sum << endl;
    count_data.clear();
    comb_data.clear();
    data.clear();
  }
  return 0;
}

vector< vector<int> > MakeCombination(int n, int m){
  int i;
  vector<int> _data;
  vector< vector<int> > data;

  for(i=0; i<m; ++i)
    _data.push_back(i);
  data.push_back(_data);

  while(1){
    MakeCombinationInner(_data, n);
    data.push_back(_data);

    if(_data[0] == n-m && _data[_data.size()-1] == n-1)
      break;
  }
  return data;
}

void MakeCombinationInner(vector<int>& data, int n){
  int i, j;
  for(i=data.size()-1, j=1; i>=0; --i, ++j){
    if(data[i] != n-j){
      ++data[i];
      for(j=i+1; j<data.size(); ++j)
        data[j] = data[j-1]+1;
      return;
    }
  }
}

void CountSum(vector< vector<int> > data, vector< vector<int> > comb_data,
	      vector<int> count_data, int n, int m, int& sum){
  int i, j, k, _sum;
  vector<int> _count_data;

  for(i=0; i<comb_data.size(); ++i){
    _count_data = count_data;
    for(j=0; j<comb_data[i].size(); ++j){
      for(k=0; k<data[comb_data[i][j]].size(); ++k){
	if(data[comb_data[i][j]][k] == 0) --_count_data[k];
	else ++_count_data[k];
      }
    }
    _sum = CountSumInner(_count_data, n);
    if(sum < _sum) sum = _sum;
    if(sum == n*m) return;
  }
}

int CountSumInner(vector<int> data, int n){
  int i, sum;
  for(i=0, sum=0; i<data.size(); ++i){
    if(data[i] > n/2) sum += data[i];
    else sum += (n - data[i]);
  }
  return sum;
}