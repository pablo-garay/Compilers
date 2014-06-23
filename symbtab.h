
struct symbol {
    struct ref *reflist;
    char *name;
};

struct ref {
    struct ref *next;
    char *filename;
    int flags;
    int lineno;
};


/* simple symtab of fixed size */
#define NHASH 9997
struct symbol symtab[NHASH];
struct symbol *lookup(char*);
void addref(int, char*, char*, int);

