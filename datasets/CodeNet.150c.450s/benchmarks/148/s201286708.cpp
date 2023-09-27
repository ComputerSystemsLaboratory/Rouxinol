#include<iostream>
#include<string>

using namespace std;

int main(){
   int N;
   string temp;
   int AC=0,WA=0,TLE=0,RE=0;
   cin >> N;
   for( int i=0; i<N ;i++){
      cin >> temp;
      if(temp=="AC"){
         AC++;
      }
      if(temp=="WA"){
         WA++;
      }
      if(temp=="TLE"){
         TLE++;
      }
      if(temp=="RE"){
         RE++;
      }
   }
   cout << "AC x " << AC << endl;
   cout << "WA x " << WA << endl;
   cout << "TLE x " << TLE << endl;
   cout << "RE x " << RE << endl;
   return 0;
}
