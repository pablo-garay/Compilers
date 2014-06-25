
char *strdup (const char *s) {
    char *d = malloc (strlen (s) + 1);   // Space for length plus nul
    /*if (d == NULL) return NULL;          // No memory*/
    if (d == NULL){
        puts("Out of memory");
        exit(1);
    }
    strcpy (d,s);                        // Copy the characters
    return d;                            // Return the new string
}
