#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define SAFE_DELETE( x ){ if ( x ){ delete x; x = NULL; } }

struct tCell{
	tCell() : count( 0 ), prev( NULL ), next( NULL ){}

	int count;
	string s;
	tCell *prev, *next;
};

class Database{
public:
	Database() : size( 0 ), head( NULL ), tail( NULL ){
		head = new tCell;
		tail = new tCell;
		head->next = tail;
		tail->prev = head;
	}
	~Database(){
		init();
		SAFE_DELETE( tail );
		SAFE_DELETE( head );
	}

	void init(){
		for ( int i = size; i > 0; --i ){
			--size;
			tCell* cell = tail->prev;
			cell->prev->next = cell->next;
			cell->next->prev = cell->prev;
			SAFE_DELETE( cell );
		}
	}
	void store( string& s ){
		bool stored = false;
		tCell* cell = head;
		for ( int i = 0; i < size; ++i ){
			cell = cell->next;
			if ( cell->s == s ){
				++cell->count;
				stored = true;
				break;
			}
		}
		if ( !stored ){
			pushBack( s );
		}
	}
	string getMaxCount(){
		if ( !size ) return "";
		int c = 0;
		tCell* cell = head;
		tCell* maxc = NULL;
		for ( int i = 0; i < size; ++i ){
			cell = cell->next;
			if ( c < cell->count ){
				c = cell->count;
				maxc = cell;
			}
		}
		return maxc->s;
	}
	string getMaxCharSize(){
		if ( !size ) return "";
		unsigned c = 0;
		tCell* cell = head;
		tCell* maxc = NULL;
		for ( int i = 0; i < size; ++i ){
			cell = cell->next;
			if ( c < cell->s.size() ){
				c = cell->s.size();
				maxc = cell;
			}
		}
		return maxc->s;
	}

private:
	void pushBack( string& s ){
		++size;
		tCell* cell = new tCell;
		cell->s = s;
		++cell->count;
		cell->prev = tail->prev;
		cell->next = tail;
		cell->prev->next = cell;
		cell->next->prev = cell;
	}

	int size;
	tCell *head, *tail;
};

int main(){
	string s;
	Database db;

	getline( cin, s );

	istringstream iss( s );
	while ( !iss.eof() ){
		iss >> s;
		db.store( s );
	}

	cout << db.getMaxCount() << " " << db.getMaxCharSize() << endl;

	return 0;
}