/*
 ============================================================================
 Name        : hashing.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "symbol_table.h"
#include "int_buffer.h"

#define MAX_CHAR 32 /* maximum identifier size */
//#define TABLE_SIZE 7 /* prime number */
//#define IS_FULL(ptr) (!(ptr))
//
//typedef struct {
//	char *name;
//	int type;
//} node_data;
//
//typedef struct node* list_pointer;
//typedef struct node** hash_table_type;
//typedef struct node {
//	node_data entry;
//	list_pointer link;
//} node;
//
//
//int hash (char *);
//void table_insert(char *name, const int type, list_pointer []);
//void print_hash_table(list_pointer [TABLE_SIZE], const int);
//hash_table_type create_table();
//list_pointer lookup_string(char *str, list_pointer ht[]);
//void free_table(hash_table_type hashtable);


//int main(void) {
//
//	int opcion;
//	char string[MAX_CHAR];
////	int tipo;
//	hash_table_type hash_table;
//	list_pointer entry_ptr;
//
//    hash_table = create_table(); /* crear hash table */
//
//	do {
//
//		puts("Ingrese la opcion deseada: ");
//		puts("1. Agregar un identificador a table hash");
//		puts("2. Salir");
//		puts("3. Buscar entry en table hash");
//
//		opcion = getchar();
//		while (getchar() != '\n');
//
//		switch(opcion){
//			case '1':
//				puts("Ingrese identificador: ");
//				scanf("%s", (string));
//				while (getchar() != '\n');
////				puts("Ingrese tipo: ");
////				scanf("%d", (&tipo));
//				table_insert(string, 2, hash_table);
//				print_hash_table(hash_table, TABLE_SIZE);
//				break;
//
//			case '3':
//				puts("Ingrese identificador: ");
//				scanf("%s", (string));
//				while (getchar() != '\n');
//				entry_ptr = lookup_string(string, hash_table);
//				if (entry_ptr != NULL){
//					puts("Encontrado: ");
//					puts((entry_ptr->entry).name);
//					printf("Tipo: %d\n", (entry_ptr->entry).type);
//					printf("Formal Params: "); print_buffer((entry_ptr->entry).formal_params.data);
//				}
//				else puts("No encontrado");
//				// print_hash_table(hash_table, TABLE_SIZE);
//				break;
//		}
//	} while (opcion != '2');
//
//	free_table(hash_table);
//	puts("Tabla liberada exitosamente");
//
//	return EXIT_SUCCESS;
//}

hash_table_type create_table(){
	/* create hash table */

	list_pointer *ptr = (list_pointer *) malloc(sizeof(list_pointer) * TABLE_SIZE);

	if (IS_FULL(ptr)) { /* verificar si se pudo alocar memoria */
		fprintf(stderr, "The memory is full\n");
		exit(1);
	}
	
	int i; for (i = 0; i < TABLE_SIZE; i++) ptr[i] = NULL; /* inicializar hash table */

	return ptr;

}

entry_data table_insert(char *name, const int type, list_pointer ht[]){
	/* insert the name into the table using chaining */

	int hash_value = hash(name);
	list_pointer ptr, trail = NULL, lead = ht[hash_value];

	// if (lookup_string(name, ht)) return; /* si ya existe entry, retornar */




	ptr = (list_pointer) malloc(sizeof(node));

	if (IS_FULL(ptr)) { /* verificar si se pudo alocar memoria */
		fprintf(stderr, "The memory is full\n");
		exit(1);
	}

	ptr->entry.name = strdup(name);
	ptr->entry.type = type;
	ptr->entry.formal_params = init_buffer();
//	ptr->link = NULL; /* para insert al final */
	ptr->link = lead;
	ht[hash_value] = ptr;

//	if (trail) trail->link = ptr;
//	else ht[hash_value] = ptr;
//      print_hash_table(ht, TABLE_SIZE);
	return ptr->entry;
}

/* hash function. Tomada del compilador de C de PJ Weinberger */
int hash (char *c){ /* transform name to a natural number, and return this result modulus the table size */
	
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

void print_hash_table(list_pointer graph[TABLE_SIZE], const int longitud){

	int i;
	list_pointer node;

	for (i = 0; i < longitud; i++){
		printf("[%d]", i);

		for (node = graph[i]; node != NULL; node = node->link)
			printf("->%s", (node->entry).name);

		puts("");
	}
	puts("");
}




list_pointer lookup_string(char *name, list_pointer ht[])
{
	int hash_value = hash(name);
	list_pointer ptr, trail = NULL, lead = ht[hash_value];

	for (; lead; trail = lead, lead = lead->link){

		if (!strcmp(lead->entry.name, name)) {
			//fprintf(stderr, "The name %s is in the table\n",name);
			return lead;
		}
	}
	
	return NULL;
}



void free_table(hash_table_type hashtable)
{
    int i;
    list_pointer list, temp;

    if (hashtable == NULL) return;

    /* Free the memory for every entry in the table, including the
     * strings themselves.
     */
    for(i = 0; i < TABLE_SIZE; i++) {
        list = hashtable[i];

        while(list != NULL) {
            temp = list;
            list = list->link;
            free(temp->entry.name);
            free_buffer(temp->entry.formal_params); /* free formal params buffer */
            free(temp);
        }
    }

    /* Free the table itself */
    free(hashtable);
}

