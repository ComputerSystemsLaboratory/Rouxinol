//ALDS1_4D
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsAllocate(vector<int> packet, int allocate, int max_track) {
 int sum = 0;
 int num_track = 0;

 for (int i = 0; i < packet.size(); ) {
  if (sum + packet.at(i) <= allocate) {
   sum += packet.at(i);
   ++i;
  } else {
   ++num_track;
   if (num_track == max_track) {
    return false;
   }
   sum = 0;
  }
 }
 return true;
}

int main() {
 int num_packet, num_track;
 cin >> num_packet >> num_track;

 int max_weight = 0, sum_weight = 0;
 vector<int> packet(num_packet);
 for (int i = 0; i < num_packet; ++i) {
  cin >> packet.at(i);
  sum_weight += packet.at(i);
  max_weight = max(max_weight, packet.at(i));	
 }

 int low = max_weight;
 int high = sum_weight;

 while (low < high) {
  int alloc = (low + high) / 2;
  if (IsAllocate(packet, alloc, num_track)) {
   high = alloc;
  } else {
   low = alloc + 1;
  }

 }
 cout << low << '\n';

 return 0;
}