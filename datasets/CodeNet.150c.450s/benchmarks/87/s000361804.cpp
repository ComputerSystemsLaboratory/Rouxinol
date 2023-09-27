#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  while (true) {
  int h;
  cin >> h;
  if (h == 0) break;
  int array[h][5];
  int sco = 0;
  
  for (size_t i = 0; i < h; i++)
    for (size_t j = 0; j < 5; j++)
      cin >> array[i][j];

  int num;
  //for (size_t t = 0; t < 5; t++) {
  while (true) {
    for (size_t i = 0; i < h; i++) {
      int tmp =  array[i][0];
      int count = 0;
      int start;
      num = 0;
      for (size_t j = 0; j < 5; j++) {
	if (tmp == array[i][j]) {
	  if (!count) 
	    start = j;
	  count++;
	  num = tmp;
	} else if (count < 3) {
	  start = j;
	  tmp = array[i][j];
	  count = 1;
	  num = 0;
	} else
	  break;
      }
      if (count > 2 && num > 0) {
	for (int j = start; j < start + count; j++)
	  if(num == array[i][j])
	    array[i][j] = 0;
	//cout << "num::" << num << endl;
	//cout << "count::" << count << endl;
	  sco += num*count;
      }
    }
    bool flag = true;
    for (size_t i = 0; i < h; i++)
      for (size_t j = 0; j < 5; j++)
	if (array[i][j] == 0)
	  flag = false;

    if (flag) break;
    
    /*
    for (size_t i = 0; i < h; i++) {
      for (size_t j = 0; j < 5; j++)
	cout << array[i][j] << " ";
      cout << endl;
    } cout << endl;
    */

    /*
  for (int k = h-1; k > 0; k--) {
    for (size_t i = 0; i < 5; ) {
      if (array[k][i] == 0) {
	int nzc=0;
	for (int j = k; j >= 0; --j) {
	  if (array[j][i] != 0)
	    nzc++;
	}
	if (nzc != 0) {
	  for (int j = k; j > 0; j--) {
	    array[j][i] = array[j-1][i];	  
	  }
	  array[0][i] = 0;
	}
	else
	  i++;
      }
      else
	i++;
    }
  }
    */

    for (size_t i = 0; i < 10; i++)
    for (size_t k = 0; k < h-1; k++) {
      for (size_t j = 0; j < 5; j++) {
	if (array[k][j] > 0 && array[k+1][j] == 0) {
	  array[k+1][j] = array[k][j];
	  array[k][j] = 0;
	}
      }
    }

   for (size_t i = 0; i < h; i++) 
    for (size_t j = 0; j < 5; j++)
      if (array[i][j] == 0)
	array[i][j] = -1;
   
  
   /*
  for (size_t i = 0; i < h; i++) {
    for (size_t j = 0; j < 5; j++)
      if (array[i][j] == -1)
	cout << "  ";
      else 
	cout << array[i][j] << " ";
    cout << endl;
  } cout << endl;
   */
  
  }
  
  cout << sco << endl;
  }
  return 0;
  
}