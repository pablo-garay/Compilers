/*
 ============================================================================
 Name        : buffer.c
 ============================================================================
 */

#include "int_buffer.h"


//int main(void) {
//
//	buffer buf = init_buffer();
//
//	buffer_add(&buf, 14);
//	buffer_add(&buf, 7);
//	buffer_add(&buf, 3);
//	buffer_add(&buf, 55);
//	printf("Contenido de buffer: ");
//	print_buffer(buf.data);
//	free_buffer(buf);
//	puts("fin de programa");
//	//puts(buf.start); /* prints !!!Hello World!!! */
//
//	return EXIT_SUCCESS;
//}


buffer init_buffer(){

	buffer buffer;

	buffer.data = (int*) malloc (CHUNK_SIZE * sizeof(int));

	if (buffer.data == NULL){
		fputs("Sin espacio de memoria. Terminando el programa", stderr);
		exit (1);
	}

	/* inicializar buffer */
	buffer.data[0] = END_OF_BUFFER;
	buffer.current_pos = 0;
	buffer.size = CHUNK_SIZE;

	return buffer;

}

void buffer_add(buffer *buf, int value){

	int str_length = 1;
	//printf("Usar de buffer: %d\n", str_length);

	if (buf->current_pos + 1 == buf->size){

		buf->size += CHUNK_SIZE;

		int *new_buff = (int *) realloc (buf->data, buf->size * sizeof(int));

		if (new_buff != NULL) {
			buf->data = new_buff;
		}
		else {
			free (buf->data);
			fputs("Error (re)allocating memory", stderr);
			exit (1);
		}
	}

	buf->data[buf->current_pos] = value;
	buf->current_pos++;
	buf->data[buf->current_pos] = END_OF_BUFFER;

	// puts(buf->data); /* prints !!!Hello World!!! */
	//printf("Sobra en buffer: %d\n", buf->size - buf->current_pos - 1);
	//printf("Tam buffer: %d\n", buf->size);
	// printf("Buffer: "); print_buffer(buf->data);

	//	if (*buf->current_pos == '\0') puts("EOS");
	//	printf("\n anterior a current_post %c\n", *(buf->current_pos - 1));

}

int *get_buffer_content(buffer buf){
	return buf.data;
}

void print_buffer(int *data){
	int i;

	for (i = 0; data[i] != END_OF_BUFFER; i++) printf("%d-", data[i]);
	puts("");
}


void free_buffer(buffer buf){

	free(buf.data);

}
