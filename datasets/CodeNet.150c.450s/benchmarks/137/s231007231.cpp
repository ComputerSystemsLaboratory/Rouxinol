#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

class dictionary {

private:
	string* hashtable;
	long long table_size;
	int coltimes; //?????????????????????
//	int el_num;
	long long hash1(long long);
	long long hash2(long long);
	long long str_n(string);
	int char_n(char);
public:
	dictionary(int n);
	void insert(string);
	bool find(string);
};
inline dictionary::dictionary(int n)
{
	hashtable= new string[n];
	if( !hashtable ){
		cout<<"Allocation Error"<<endl;
		abort();
	}

	table_size=n;
	coltimes=0;
//	el_num=0;
}
inline long long dictionary::hash1( long long key )
{
	return key % table_size;
}
inline long long dictionary::hash2( long long key )
{
	return 1 + ( key % (table_size - 1));
}

inline long long dictionary::str_n( string str )
{

/*
	long long str_n=0;

	for( unsigned int i=0; i<str.size(); i++ ){
		str_n = str_n * 5 + (long long)str[i] ; // str_n += (int)str[i] ?????????????????????????????????????????£???
	}
*/

	long long str_n=0;
	for( unsigned int i=0, p=1; i<str.size(); i++, p*=5 ){
		str_n += p * char_n(str[i]);
	}

	return str_n;
}
inline int dictionary::char_n( char c )
{
	switch(c){
	case 'A':
		return 1;
	case 'C':
		return 2;
	case 'G':
		return 3;
	case 'T':
		return 4;
	}
	return 0;
}

		

inline void dictionary::insert( string str )
{
/*
	if( el_num >= table_size ){
		cout<<"????????\????????????????????????"<<endl;
		abort();
	}
*/
/*
	long long hash_v;
	do{
		hash_v = ( hash1(str) + hash2(str)*coltimes )%table_size ;

//		printf("I ( hash1, hash2, hash )(coltimes) = ( %d, %d, %d)(%d)\n", hash1(str), hash2(str), hash_v, coltimes );

	}while( hashtable[ hash_v ].size() && hashtable[ hash_v ]!= str, coltimes++ );
	
	hashtable[ hash_v ] = str;
	coltimes=0;
	el_num++;
*/
	long long key=str_n(str), hash_v;

	for( ;; coltimes++ ){
		hash_v= (hash1(key) + hash2(key)*coltimes) % table_size;
		if( hashtable[ hash_v ] == str ){
			coltimes=0;
			return;
		}else if( !hashtable[ hash_v ].size() ){
			hashtable[ hash_v ]=str;
			coltimes=0;
			return;
		}
	}
}
inline bool dictionary::find( string str )
{
/*
	long long hash_v;
	do{
		
		hash_v = ( hash1(str) + hash2(str)*coltimes )%table_size ;
//		printf("F ( hash1, hash2, hash )(coltimes) = ( %d, %d, %d)(%d)\n", hash1(str), hash2(str), hash_v, coltimes );

		if( hashtable[ hash_v ] == str ){
			return true;
		}

		coltimes++;

	}while( hashtable[ hash_v ].size() &&  coltimes <= table_size);

	coltimes=0;

	return false;
*/
	long long hash_v, key=str_n(str);
	for( ;; coltimes++ ){
		hash_v=( hash1(key) + hash2(key)*coltimes )%table_size;
		if( hashtable[ hash_v ]==str ){
			coltimes=0;
			return true;
		}else if( !hashtable[ hash_v ].size() ){
			coltimes=0;
			return false;
		}
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	char command[7], str[13];
	dictionary dic(1046527);

	for( int i=0; i<n; i++ ){
		scanf("%s %s", command, str);

		if( !strcmp(command, "insert") ){
			dic.insert(str);
		}else if ( !strcmp(command, "find") ){
			cout<<( dic.find(str)? "yes" : "no" )<<endl;
		}
	}
}