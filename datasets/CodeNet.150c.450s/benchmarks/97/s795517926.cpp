#include <iostream>
#include <vector>
#include <stack>
#include <stdlib.h>

using namespace std;

int miw,maw,mih,mah;

void create_map(int n, vector<pair<int,int> > &nd, vector<pair<int,int> > &place, int **array) {
  
  for(int i = 0; i < n-1; i++) {
    //cout << i << endl;
    pair<int,int> p = nd[i];
    pair<int,int> adj  = place[p.first];

    pair<int,int> np = (make_pair(adj.first, adj.second));

    //cout << "current::" << adj.first << " " << adj.second << endl;
    
    if(p.second == 0)
      np.second -= 1;
    else if(p.second == 1)
      np.first  += 1;
    else if(p.second == 2)
      np.second += 1;
    else if(p.second == 3)
      np.first  -= 1;

    if(miw > np.second)
      miw = np.second;
    else if(maw < np.second)
      maw = np.second;
    else if(mih > np.first)
      mih = np.first;
    else if(mah < np.first)
      mah = np.first;
    //cout << "next::" << np.first << " " << np.second << endl;
    array[np.first][np.second] = i+1;
    place.push_back(np);
    
  }


}



int main(int argc, char *argv[]){


  while(true) {
  int n;
  cin >> n;
  if(n == 0)
    break;
  if(n != 1) {
  vector<pair<int,int> > nd;
  vector<pair<int,int> > place;

  for(int i = 0; i < n-1; i++) {
    int e, d;
    cin >> e;
    cin >> d;
    nd.push_back(make_pair(e,d));
  }

  miw = maw = mih = mah = n;
  int tmp = n*2;
  int **array;
  array = (int **)malloc(sizeof(int *)*tmp);
  for(int i = 0; i < tmp; i++)
    array[i] = (int *)malloc(sizeof(int)*tmp);

  for(int i = 0; i < tmp; i++)
    for(int j = 0; j < tmp; j++)
      array[i][j]  = -1;
  
  
  array[n][n] = 0;
  place.push_back(make_pair(n,n));

  create_map(n, nd, place, array);

  /*
  for(int i = 0; i < tmp; i++) {
    for(int j = 0; j < tmp; j++){
      if(array[i][j] >= 0)
	cout << array[i][j] << " ";
      else
	cout << "  ";
    }
    cout << endl;
    }
  */
  /*
  int max_h, max_w;
  int up, bottom, width, count;
  bool flag = false;
  max_h = max_w = width = count = 0;
  
  for(int i = 0; i < tmp; i++) {
    for(int j = 0; j < tmp; j++){
      if(array[i][j] >= 0) {
	if(count == 0)
	  up = i;
	width++;
	count++;
      }
      
      if(count == n) {
	bottom = i;
	count++;
      }
      
      if(count == 1)
	flag = true;
      if(flag) {
	up = i;
	flag = false;
	} 
    }
    if(max_w < width)
      max_w = width;
    width = 0;
  }

  //cout << bottom << " " << up << endl;
  max_h = bottom - up + 1;
  */
  cout << maw - miw + 1<< " " << mah - mih + 1<< endl;
  
  for(int i = 0; i < tmp; i++)
    free(array[i]);
  free(array);
  }
  else
    cout << 1 << " " << 1 << endl;
  }
  return 0;
}