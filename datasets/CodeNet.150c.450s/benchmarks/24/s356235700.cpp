#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  
  int n_intervals, budget;
  //read in number of intervals, and budget
  cin >> n_intervals >> budget;

  //pair with probability of attack and distance (of each interval)
  pair<int, int> PD[10010];
  
  int p, d;
  while (!(n_intervals == 0 && budget == 0)) { //while not end of input
    for (int i = 0; i < n_intervals; i++) {
      // read distance and probability 
      cin >> d >> p;
      PD[i] = make_pair(p,d); // store in array
    }
    
    //sort the array in descending order
    sort(PD, PD + n_intervals);
    reverse(PD, PD + n_intervals);

    int i = 0;
    
    while (budget > PD[i].second && i < n_intervals) {
      //while budget bigger than distance of current interval
      budget -= PD[i++].second; //subtract from budget
    }

    
    if (i < n_intervals) {
      PD[i].second -= budget; //subtract from current interval budget (remainder)
    }

    int sum = 0; //sum of expected attacks
    for (; i < n_intervals; i++) {
      sum += PD[i].first * PD[i].second;
    }
    cout << sum << endl; // print output

    cin >> n_intervals >> budget; //read new input
  }

  return 0;

  
}
    
      
      
      
    
    