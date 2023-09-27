#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Puddle
{
private:
	int totalAmount;
	int puddleNum;
	int puddles[10000];
	string inputData;

	void _makeData() {
		size_t it = 0;
		int depth = 0;
		int tempVolume = 0;
		bool bHarfVolume = false;
		bool bInPuddle = false;

		while(inputData.length() > it) {
			switch(inputData[it]) {
				case '\\':
					if(0 == depth) {
						switch(isPuddle(it)) {
							case 1:
								depth++;
								bInPuddle = true;
								bHarfVolume = true;
								break;
							case -1:
								return;
							default:
								break;
						}

					} else {
						tempVolume += depth++;
						if(bHarfVolume) {
							tempVolume++;
							bHarfVolume = false;
						} else {
							bHarfVolume = true;
						}
					}
					break;
				case '_':
					if(0 < depth) {
						tempVolume += depth;
					}
					break;
				case '/':
					if(0 < depth) {
						tempVolume += --depth;
						if(bHarfVolume) {
							tempVolume++;
							bHarfVolume = false;
						} else {
							bHarfVolume = true;
						}
						if(0 == depth) {
							puddles[puddleNum++] = tempVolume;
							tempVolume = 0;
							depth = 0;
						}
					}
					break;
				default:
					break;
			}
			it++;
		}
	}

	int isPuddle(size_t it) {
		int depth = 0;
		bool bExistPuddle = false;
		int size = inputData.length();

		for(size_t i = it; i < inputData.length(); i++) {
			switch(inputData[i]) {
				case '\\':
					depth++;
					break;
				case '/':
					bExistPuddle = true;
					depth--;
					if(0 == depth) {
						return 1;
					}
					break;
			}
		}
		return bExistPuddle ? 0 : -1;
	}

public:
	Puddle()
	: totalAmount(0)
	, puddleNum(0) {
		memset(puddles, 0, sizeof(puddles));
	}

	void makeData(string str) {
		inputData = str;
		_makeData();
		for(int i = 0; i < puddleNum; i++){
			totalAmount += puddles[i];
		}
	}

	void printData() {
		cout << totalAmount << endl
		     << puddleNum;

		for(int i = 0; i < puddleNum; ++i) {
			cout << " " << puddles[i];
		}
		cout << endl;
	}
};

int main() {
	string str;
	Puddle puddle;

	cin >> str;
	puddle.makeData(str);
	puddle.printData();

	return 0;
}
