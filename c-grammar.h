
#ifndef C_GRAMMAR_H_
#define C_GRAMMAR_H_

#include <stdio.h>
#include "int_buffer.h"

typedef enum {FALSE, TRUE} boolean;

#define PRINT(X) if (print_enabled) fputs (X, pFile)
#define FILENAME "output.php"
#define IS_ARRAY(X) (X == ARRAY_INT || X == ARRAY_REAL || X == ARRAY_CHAR) ? TRUE : FALSE
#define ARRAY(X) X + ARRAY_INT - INTEGER
#define ARRAY_BASIC_TYPE(X) X -= ARRAY_INT - INTEGER
#define TYPE(X) (yychar == '[') ? ARRAY(X) : X

/*Para comprobacion de tipos*/
enum {ERROR_TIPO, VACIO, INTEGER, REAL, CHARACTER, ARRAY_INT, ARRAY_REAL, ARRAY_CHAR, COMODIN};
enum {ARITHMETIC, ASSIGNMENT, INITIALIZER, EXPRESSION};
/*Para control de errores*/
enum {SINTAXIS, TIPO, AMBITO, TIPOS_INCOMPATIBLES_FUNCION, CANT_ARGS_FUNCION};


typedef struct {
	char *value;
	int type;
	buffer buffer;
} attributes;

FILE *pFile;


extern int print_enabled;

#endif /* C_GRAMMAR_H_ */

