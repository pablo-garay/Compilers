
#ifndef C_GRAMMAR_H_
#define C_GRAMMAR_H_

#include <stdio.h>

#define PRINT(X) if (print_enabled) fputs (X, pFile)
#define FILENAME "myfile.php"

FILE *pFile;

typedef enum {FALSE, TRUE} boolean;
extern int print_enabled;

#endif /* C_GRAMMAR_H_ */

