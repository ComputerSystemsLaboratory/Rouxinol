#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
 
	int n;
	string cmd, dna;
	set<long long int> dictionary;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>cmd>>dna;
		long long int x = 0;
		if(cmd == "insert"){
			for(int j=0;j<dna.length();j++){
				if(dna[j] == 'A')
					x += 1 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'C')
					x += 2 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'G')
					x += 3 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'T')
					x += 4 * pow((double)10, (double)(j+1));
			}
			dictionary.insert(x);
		}else if(cmd == "find"){
			for(int j=0;j<dna.length();j++){
				if(dna[j] == 'A')
					x += 1 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'C')
					x += 2 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'G')
					x += 3 * pow((double)10, (double)(j+1));
				else if(dna[j] == 'T')
					x += 4 * pow((double)10, (double)(j+1));
			}
			
			if(dictionary.find(x) == dictionary.end())
				cout<<"no"<<endl;
			else
				cout<<"yes"<<endl;
		}
	}

	return 0;
}