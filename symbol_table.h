
#include "int_buffer.h"

#define TABLE_SIZE 7 /* prime number */
#define IS_FULL(ptr) (!(ptr))

typedef struct {
	char *name;
	int type;
	buffer formal_params;
} entry_data;

typedef struct node* list_pointer;
typedef struct node** hash_table_type;
typedef struct node {
	entry_data entry;
	list_pointer link;
} node;


int hash (char *);
entry_data table_insert(char *name, const int type, list_pointer []);
void print_hash_table(list_pointer [TABLE_SIZE], const int);
hash_table_type create_table();
list_pointer lookup_string(char *str, list_pointer ht[]);
void free_table(hash_table_type hashtable);
