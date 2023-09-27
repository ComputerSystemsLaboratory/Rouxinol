#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <bitset>
#include <fstream>
using namespace std;
typedef long long ll;

int main()
{
	bitset<31> students;
	for(int i = 0; i < 28; i++){
		int buf;
		cin>>buf;
		students.set(buf);
	}
	for(int i = 1; i <= 30; i++) if(!students[i]) cout<<i<<endl;
}