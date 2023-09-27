#include <iostream>

std::string check_stable (int num, std::string ary_org[], std::string ary[]) {

  int i, j, indexA, indexB;
  std::string str;

  indexA = indexB = -1;

  for (i = 0; i <= num - 2; i++) {

    if (ary[i][1] == ary[i + 1][1]) {

      for (j = 1; j <= num - 1; j++) {

        if (ary_org[j] == ary[i])     indexA = j;
        if (ary_org[j] == ary[i + 1]) indexB = j;
      }

      if (indexA > indexB) {

        str = "Not stable";
        return str;
      }
      else indexA = indexB = -1;
    }
  }

  str = "Stable";
  return str;
}

int main () {

  //---------------------------------------------------------------------//
  //Initialize

  int i, j, num;
  int index_last;
  int min, min_index;

  std::string temp;

  std::string ary_original[110];
  std::string aryB[110]; //Array for Bubble Sort
  std::string aryS[110]; //Array for Selection Sort

  std::cin >> num;

  for (i = 0; i <= num - 1; i++) {

    std::cin >> ary_original[i];
    aryB[i] = aryS[i] = ary_original[i];
  }

  //---------------------------------------------------------------------//
  //Bubble Sort

  index_last = num - 2;

  while (index_last >= 0) {

    for (i = 0; i <= index_last; i++) {

      if (aryB[i][1] > aryB[i + 1][1]){

        temp        = aryB[i];
        aryB[i]     = aryB[i + 1];
        aryB[i + 1] = temp;
      }
    }

    index_last --;
  }

  //---------------------------------------------------------------------//
  //Selection Sort

  for (i = 0; i <= num - 2; i++) {

    min       = aryS[i][1];
    min_index = i;

    for (j = i; j <= num - 1; j++) {

      if (min > aryS[j][1]) {

        min       = aryS[j][1];
        min_index = j;

      }
    }

    if (aryS[i] != aryS[min_index]) {

      temp            = aryS[i];
      aryS[i]         = aryS[min_index];
      aryS[min_index] = temp;
    }
  }

  //---------------------------------------------------------------------//
  //Output

  for (i = 0; i <= num - 2; i++) std::cout << aryB[i] << " ";
  std::cout << aryB[num - 1] << std::endl;

  std::cout << check_stable(num, ary_original, aryB) << std::endl;

  for (i = 0; i <= num - 2; i++) std::cout << aryS[i] << " ";
  std::cout << aryS[num - 1] << std::endl;

  std::cout << check_stable(num, ary_original, aryS) << std::endl;

  return 0;
}

