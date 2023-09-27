#include <bits/stdc++.h>
using namespace std;

class Hash {
private:
	static const int MOD = 1046527;
	
	int my_ctoi(char c) {
		if (c == 'A') return 0;
		if (c == 'C') return 1;
		if (c == 'G') return 2;
		if (c == 'T') return 3;
		return 4;
	}
	
	int getKey(const string& str) {
		int key = 0;
		size_t len = str.size();
		for (size_t i = 0; i < len; ++i) key = 5 * key + my_ctoi(str[i]);
		return key;
	}
	
	int hash1(int key) {
		return key % MOD;
	}
	
	int hash2(int key) {
		return 1 + (key % (MOD - 1));
	}
	
public:
	Hash() {}
	
	int getHash(const string& str, int collision_count) {
		int key = getKey(str);
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
		int collision_count = 0;
		
		while (1) {
			int hs = hash.getHash(str, collision_count);
			
			if (table[hs] == NIL) {
				table[hs] = str;
				break;
			} else {
				++collision_count;
			}
		}
	}
	
	bool find(string& str) {
		int collision_count = 0;
		
		while (1) {
			int hs = hash.getHash(str, collision_count);
			
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