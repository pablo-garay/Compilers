
#ifndef C_GRAMMAR_H_
#define C_GRAMMAR_H_

#include <stdio.h>

#define PRINT(X) if (print_enabled) fputs (X, pFile)
#define FILENAME "myfile.php"

/*Para comprobacion de tipos*/
enum {ERROR_TIPO, VACIO, INTEGER, REAL, CHARACTER};
/*Para control de errores*/
enum {SINTAXIS, TIPO, AMBITO};

typedef struct {
	char *value;
	int type;
}attributes;

FILE *pFile;

typedef enum {FALSE, TRUE} boolean;
extern int print_enabled;

#endif /* C_GRAMMAR_H_ */

