#include <iostream>
#include <string>
#include <vector>

using namespace std;

void rotation_N(int* dise){
   int tmp[6];

   tmp[0] = dise[1];
   tmp[1] = dise[5];
   tmp[2] = dise[2];
   tmp[3] = dise[3];
   tmp[4] = dise[0];
   tmp[5] = dise[4];

   for(int i = 0; i < 6; i++){
      dise[i] = tmp[i];
   }
}
void rotation_E(int* dise){
   int tmp[6];

   tmp[0] = dise[3];
   tmp[1] = dise[1];
   tmp[2] = dise[0];
   tmp[3] = dise[5];
   tmp[4] = dise[4];
   tmp[5] = dise[2];

   for(int i = 0; i < 6; i++){
      dise[i] = tmp[i];
   }
}
void rotation_S(int* dise){
   int tmp[6];

   tmp[0] = dise[4];
   tmp[1] = dise[0];
   tmp[2] = dise[2];
   tmp[3] = dise[3];
   tmp[4] = dise[5];
   tmp[5] = dise[1];

   for(int i = 0; i < 6; i++){
      dise[i] = tmp[i];
   }
}
void rotation_W(int* dise){
   int tmp[6];

   tmp[0] = dise[2];
   tmp[1] = dise[1];
   tmp[2] = dise[5];
   tmp[3] = dise[0];
   tmp[4] = dise[4];
   tmp[5] = dise[3];

   for(int i = 0; i < 6; i++){
      dise[i] = tmp[i];
   }
}

void rotation_spin(int* dise){
   int tmp[6];

   tmp[0] = dise[0];
   tmp[1] = dise[2];
   tmp[2] = dise[4];
   tmp[3] = dise[1];
   tmp[4] = dise[3];
   tmp[5] = dise[5];

   for(int i = 0; i < 6; i++){
      dise[i] = tmp[i];
   }
}

int main(){
   int dise[6];
   int n;

   vector<int> ans;

   for(int i = 0; i < 6; i++){
      cin >> dise[i];
   }

   cin >> n;

   for(int i = 0; i < n; i++){
      int top, front;
      cin >> top >> front;

      if(dise[1] == top){
         rotation_N(dise);
      }
      else if(dise[4] == top){
         rotation_S(dise);
      }

      while(dise[0] != top){
         rotation_E(dise);
      }

      while(dise[1] != front){
         rotation_spin(dise);
      }

      ans.push_back(dise[2]);

   }

   for(int i = 0; i < ans.size(); i++){
      cout << ans[i] << endl;
   }

   return 0;
}
