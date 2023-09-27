//ref https://github.com/rui314/8cc
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#define INIT_SIZE 16
#define TOMBSTONE ((void *)-1)
const uint32_t FNV_PRIME = 16777619;

//???????????\?????????
typedef struct Map {
	struct Map *parent;
	const char **key;
	void **val;
	int size;
	int nelem;
	int nused;
} Map;

uint32_t my_hash(const char *p){
	//FNV hash ref http://wowdev.jp/?p=873 http://www.isthe.com/chongo/tech/comp/fnv/
	uint32_t basis = 2166136261;

	for(; *p; p++){
		basis ^= *p;
		basis *= *p;
	}
	return basis;
}

//create map
Map *do_make_map(Map *parent, int size){
	Map *r    = (Map *)malloc(sizeof(Map));
	r->parent = parent;
	r->key    = (const char **)calloc(size, sizeof(const char *));
	r->val    = (void **)calloc(size, sizeof(void *));
	r->size   = size;
	r->nelem  = 0;
	r->nused  = 0;
	return r;
}

void rehash(Map *m){
	//create new map
	if(!m->key){
		m->key = (const char **)calloc(INIT_SIZE, sizeof(const char *));
		m->val = (void **)calloc(INIT_SIZE, sizeof(void *));
		m->size = INIT_SIZE;
		return;
	}
	//check if the size need to change or not
	if(m->nused < m->size * 0.8) return;

	//change map size
	int new_size = (m->nelem < m->size * 0.3) ? m->size : m->size * 2;
    const char **k = (const char **)calloc(new_size, sizeof(const char *));
    void **v = (void **)calloc(new_size, sizeof(void *));
    int mask = new_size - 1;
    for(int i = 0; i < m->size; ++i){
    	if(m->key[i] == NULL || m->key[i] == TOMBSTONE) continue;
    	int j = my_hash(m->key[i]) & mask;
    	for(;; j = (j + 1) & mask){
    		if(k[j] != NULL) continue;
    		k[j] = m->key[i];
    		v[j] = m->val[i];
    		break;
    	}
    }
    m->key = k;
    m->val = v;

    m->size  = new_size;
    m->nused = m->nelem;
}

Map *make_map(){
	return do_make_map(NULL, INIT_SIZE);
}
Map *make_map_parent(Map *parent){
	return do_make_map(parent, INIT_SIZE);
}

void *map_get_nostack(Map *m, const char *key){
	//no key in the map
	if(!m->key) return NULL;
	//check if the key exists or not
	int mask = m->size - 1;
	int i = my_hash(key) & mask;
	for(; m->key[i] != NULL; i = (i + 1) & mask){
		//the hash key exists and the value of key is same then return value
		if(m->key[i] != TOMBSTONE && !strcmp(m->key[i], key)) return m->val[i];
	}
	return NULL;
}

void *map_get(Map *m, const char *key){
	void *r = map_get_nostack(m, key);
	if(r) return r;
	if(m->parent) return map_get(m->parent, key);
	return NULL;
}

void map_put(Map *m, const char *key, void *val){
	rehash(m);
	int mask = m->size - 1;
	int i = my_hash(key) & mask;
	for(;; i = (i + 1) & mask){
		const char *k = m->key[i];
		//if the hash key does not exitst then create it
		if(k == NULL || k == TOMBSTONE){
			m->key[i] = key;
			m->val[i] = val;
			m->nelem++;
			if(k == NULL) m->nused++;
			return;
		}
		//if the key value is same then change value
		if(!strcmp(k, key)){
			m->val[i] = val;
			return;
		}
	}
}
void map_remove(Map *m, const char *key){
	//no key in the map
	if(!m->key) return;
	//try to find the input key
	int mask = m->size - 1;
	int i = my_hash(key) & mask;
	for(; m->key[i] != NULL; i = (i + 1) & mask){
		if(m->key[i] == TOMBSTONE || strcmp(m->key[i], key)) continue;
		m->key[i] = (const char *)TOMBSTONE;
		m->val[i] = NULL;
		m->nelem--;
		return;
	}
}

size_t map_len(Map *m){
	return m->nelem;
}

int main(){
	int command_num;
	char command[7];
	Map *my_hash_map = make_map();

	cin >> command_num;
	for(int i = 0; i < command_num; ++i){
		char *key = (char *)malloc(13 * sizeof(char));
	 	scanf("%s%s",command, key);
	 	if(command[0] == 'i'){
	 		map_put(my_hash_map, (const char *)key, key);
	 	}else if(command[0] == 'f'){
	 		if(map_get(my_hash_map, (const char *)key) != NULL){
	 			cout << "yes" << endl;
	 		}else{
	 			cout << "no" << endl;
	 		}
	 	}
	 }
	return 0;
}