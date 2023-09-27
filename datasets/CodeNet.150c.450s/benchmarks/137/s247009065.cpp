#include <bits/stdc++.h>
using namespace std;

//#include "hash.h"
class Hash {
private:
	static const long long MOD = 1046527;
	
	inline long long my_ctoi(char c) {
		if (c == 'A') return 1;
		if (c == 'C') return 2;
		if (c == 'G') return 3;
		if (c == 'T') return 4;
		return 0;
	}
	
	inline long long hash1(long long key) {
		return key % MOD;
	}
	
	inline long long hash2(long long key) {
		return 1 + (key % (MOD - 1));
	}
	
public:
	Hash() {}
	
	long long getKey(const string& str) {
		long long key = 0;
		size_t len = str.size();
		for (size_t i = 0; i < len; ++i) key = 10 * key + my_ctoi(str[i]);
		return key;
	}
	
	long long getHash(long long key, long long collision_count) {
		return (hash1(key) + collision_count * hash2(key)) % MOD;
	}
};

class Dictionary {
private:
	string NIL;
	vector< string > table;
	
	Hash hash;
	
public:
	Dictionary() {
		NIL = "#";
		table.assign(1046527, NIL);
	}
	
	void insert(string& str) {
		long long key = hash.getKey(str);
		int collision_count = 0;
		
		while (1) {
			int hs = hash.getHash(key, collision_count);
			
			if (table[hs] == NIL) {
				table[hs] = str;
				break;
			} else {
				++collision_count;
			}
		}
	}
	
	bool find(string& str) {
		long long key = hash.getKey(str);
		int collision_count = 0;
		
		while (1) {
			int hs = hash.getHash(key, collision_count);
			
			if (table[hs] == str) {
				return true;
			} else if (table[hs] == NIL) {
				return false;
			} else {
				++collision_count;
			}
		}
	}
};

int main() {
	Dictionary dict;
	
	int n;
	cin >> n;
	
	char buf1[128], buf2[128];
		
	for (int i = 0; i < n; ++i) {
		scanf("%s %s", buf1, buf2);
		
		string op(buf1), str(buf2);
		
		if (op == "insert") {
			dict.insert(str);
		}
		
		if (op == "find") {
			if (dict.find(str)) puts("yes");
			else puts("no");
		}
	}
}