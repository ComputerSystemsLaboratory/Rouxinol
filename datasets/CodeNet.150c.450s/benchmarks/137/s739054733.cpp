#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

long long hash_table[1046528] = {};

int hashed_key(long long key_value, int collision_times) {
    int m = 1046527;

    int h1 = key_value % m;
    int h2 = 1 + key_value % (m-1);

    return (h1 + collision_times * h2) % m;
}

long long string2value(string key_string) {
    long long key = 0;
    long long digit = 1;

    for(int si = 0; si < key_string.size(); si++) {
        char target = key_string[si];

        if (target == 'A') key += 1 * digit;
        else if (target == 'T') key += 2 * digit;
        else if (target == 'C') key += 3 * digit;
        else if (target == 'G') key += 4 * digit;
        else key += 0;

        digit *= 5;
    }

    return key;
}

void insert(string key_string) {
    long long key_value = string2value(key_string);
    int collision_time = 0;

    while(true) {
        int candidate_hashed_key = hashed_key(key_value, collision_time);

        if (hash_table[candidate_hashed_key] == 0) {
            hash_table[candidate_hashed_key] = key_value;
            return;
        } else {
            collision_time += 1;
        }
    }
}

bool isKeyString(string key_string) {
    long long key_value = string2value(key_string);
    int collision_time = 0;

    while(true) {
        int candidate_hashed_key = hashed_key(key_value, collision_time);

        if (hash_table[candidate_hashed_key] == key_value) return true;
        else if (hash_table[candidate_hashed_key] != 0) collision_time += 1;
        else return false;
    }
}

int main(void) {
    int n;
    cin >> n;

    string cmd;
    string key_string;

    for(int i=0; i < n; i++){
        cin >> cmd >> key_string;

        if (cmd[0] == 'i') insert(key_string);
        else if (cmd[0] == 'f') isKeyString(key_string)? printf("yes\n") : printf("no\n"); 
    }
}
