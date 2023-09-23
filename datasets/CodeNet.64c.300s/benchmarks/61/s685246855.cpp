#include<iostream>
using namespace std;
int main()
{
  int tate,yoko,goukeiyoko,goukeitate,zentai=0;
  int hairetu[100][100];
  int i,j;

  cin >> tate >> yoko;

  for(i = 0;i < tate;i++){
    for(j = 0;j < yoko;j++){

      cin >> hairetu[i][j];

    }
  }

  for(i = 0;i < tate;i++){
    goukeiyoko = 0;
    for(j = 0;j < yoko;j++){

      goukeiyoko += hairetu[i][j];
      zentai += hairetu[i][j];

      cout << hairetu[i][j] << " ";

    }
    cout << goukeiyoko << "\n";
  }

  for(i = 0;i < yoko;i++){
    goukeitate = 0;
    for(j = 0;j < tate;j++){

      goukeitate += hairetu[j][i];

    }
    cout << goukeitate << " ";
  }

  cout << zentai << "\n";
}