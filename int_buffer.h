/*
 * int_buffer.h
 *
 *  Created on: Jul 5, 2014
 *      Author: palen
 */

#ifndef INT_BUFFER_H_
#define INT_BUFFER_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHUNK_SIZE 8
#define END_OF_BUFFER -1


typedef struct {
	unsigned int size;
	int current_pos;
	int *data;
} buffer;

buffer init_buffer();
void buffer_add(buffer *buf, int value);
void free_buffer(buffer buf);
int *get_buffer_content(buffer buf);
void print_buffer(int *data);



#endif /* INT_BUFFER_H_ */
