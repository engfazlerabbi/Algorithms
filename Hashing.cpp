#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

const int TABLE_SIZE = 128;

struct TableList {
	string key;
	int value;
	struct TableList *next;
};

unsigned hash_function(string);
unsigned rehash(unsigned);

class HashMap
{
private:
	TableList **table;
public:
	HashMap()
	{
		table = new TableList*[TABLE_SIZE];
		for(int i = 0; i < TABLE_SIZE; i++) table[i] = NULL;
	}

	struct TableList* lookup(string s)
	{
		struct TableList *tp;
		for(tp = table[hash_function(s)]; tp != NULL; tp = tp->next)
				if((tp->key).compare(s) == 0) return tp;  // found
		return NULL;  // not found
	}

	void put(string key, int value) {
		struct TableList *tp;
		unsigned hash;

		// not found
		if(!(tp = lookup(key))) {
			tp = new TableList;
			tp->key = key;
			tp->value = value;
			hash = hash_function(key);
			tp->next = table[hash];
			table[hash] = tp;
		// it's already there
		} else {
			tp->key = key;
			tp->value = value;
			hash = hash_function(key);
			table[hash] = tp;
		}
	}

	~HashMap()
	{
		for (int i = 0; i < TABLE_SIZE; i++)
			if (table[i] != NULL) delete table[i];
		delete[] table;
	}

	void showMap()
	{
		struct TableList *tp;
		for (int i = 0; i < TABLE_SIZE; i++) {
			tp = table[i];
			if(tp)
				cout << "table[" << i << "] " << tp->key << "(" << tp->value << ")";
			else
				continue;
			while(tp) {
				cout << "->" << tp->key << "(" << tp->value << ")";
				tp = tp->next;
			}
			cout << endl;
		}
	}
};

unsigned hash_function(string s)
{
	unsigned hash = 0;

	for (int i = 0; i < s.length(); i++)
		hash = s[i] + 31*hash;
	return hash % TABLE_SIZE;
}

int main()
{
	HashMap m;

	string line;

	//ifstream dict_reader("/usr/share/dict/words");
	ifstream dict_reader("C:/TEST/linux.words");
	if( !dict_reader ) {
		cout << "Error opening input file - dict  " << endl ;
		exit(1) ;
	}

	int count = 0;
	while(getline(dict_reader,line)) {
		if((line[0] >= 'x' && line[0] < 'y') || (line[0] >= 'X' && line[0] < 'Y') ) {
			m.put(line,count++);
		}
	}

	m.showMap();
	return 0;
}
