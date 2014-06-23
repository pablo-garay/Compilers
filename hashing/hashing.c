/*
 ============================================================================
 Name        : hashing.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 32 /* maximum identifier size */
#define TABLE_SIZE 7 /* prime number */
#define IS_FULL(ptr) (!(ptr))

typedef struct {
	char name[MAX_CHAR];
} element;

typedef struct hash_entry* list_pointer;
typedef struct list_pointer* hash_table_type;
typedef struct hash_entry {
	element item;
	list_pointer link;
} hash_entry;


int hash (char *);
int transform (char *);
void table_insert(element, list_pointer []);
void print_hash_table(list_pointer [TABLE_SIZE], const int);
list_pointer *create_table();
list_pointer lookup_string(char *str, list_pointer ht[]);


int main(void) {

	int opcion;
	element item;
	list_pointer *hash_table;
	list_pointer entry_ptr;

    hash_table = create_table(); /* crear hash table */

	do {

		puts("Ingrese la opcion deseada: ");
		puts("1. Agregar un identificador a table hash");
		puts("2. Salir");
		puts("3. Buscar entry en table hash");

		opcion = getchar();
		while (getchar() != '\n');

		switch(opcion){
			case '1':
				puts("Ingrese identificador: ");
				scanf("%s", (item.name));
				while (getchar() != '\n');
				table_insert(item, hash_table);
				print_hash_table(hash_table, TABLE_SIZE);
				break;
			
			case '3':
				puts("Ingrese identificador: ");
				scanf("%s", (item.name));
				while (getchar() != '\n');
				entry_ptr = lookup_string(item.name, hash_table);
				if (entry_ptr != NULL){
					puts("Encontrado: ");
					puts((entry_ptr->item).name);
				}
				else puts("No encontrado");
				// print_hash_table(hash_table, TABLE_SIZE);
				break;
		}
	} while (opcion != '2');


	return EXIT_SUCCESS;
}

list_pointer *create_table(){
	/* create hash table */

	list_pointer *ptr = (list_pointer *) malloc(sizeof(list_pointer) * TABLE_SIZE);

	if (IS_FULL(ptr)) { /* verificar si se pudo alocar memoria */
		fprintf(stderr, "The memory is full\n");
		exit(1);
	}
	
	int i; for (i = 0; i < TABLE_SIZE; i++) ptr[i] = NULL; /* inicializar hash table */

	return ptr;

}

void table_insert(element item, list_pointer ht[]){
	/* insert the name into the table using chaining */

	int hash_value = hash(item.name);
	list_pointer ptr, trail = NULL, lead = ht[hash_value];

	for (; lead; trail = lead, lead = lead->link){

		if (!strcmp(lead->item.name, item.name)) {
			fprintf(stderr, "The name is in the table\n");
			return;
		}
	}

	ptr = (list_pointer) malloc(sizeof(hash_entry));

	if (IS_FULL(ptr)) { /* verificar si se pudo alocar memoria */
		fprintf(stderr, "The memory is full\n");
		exit(1);
	}

	ptr->item = item;
	ptr->link = NULL;

	if (trail) trail->link = ptr;
	else ht[hash_value] = ptr;

}

/* hash function. Tomada del compilador de C de PJ Weinberger */
int transform (char *c){
	
	char *p;	
	unsigned h = 0, g;
	
	for (p = c; *p; p++){
	    h = (h << 4) + (*p);
	    if (g = h&0xf0000000){
	        h = h ^ (g >> 24);
	        h = h ^ g;
	    }
	}

	return h % TABLE_SIZE;
}

int hash (char *name){
	/* transform name to a natural number, and return this result modulus the table size */
	return (transform(name) % TABLE_SIZE);
}

void print_hash_table(list_pointer graph[TABLE_SIZE], const int longitud){

	int i;
	list_pointer node;

	for (i = 0; i < longitud; i++){
		printf("[%d]", i);

		for (node = graph[i]; node != NULL; node = node->link)
			printf("->%s", (node->item).name);

		puts("");
	}

}




list_pointer lookup_string(char *str, list_pointer ht[])
{
	int hash_value = hash(str);
	list_pointer ptr, trail = NULL, lead = ht[hash_value];

	for (; lead; trail = lead, lead = lead->link){

		if (!strcmp(lead->item.name, str)) {
			fprintf(stderr, "The name is in the table\n");
			return lead;
		}
	}
	
	return NULL;
}

