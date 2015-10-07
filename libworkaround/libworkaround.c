# include <sys/types.h> /* size_t */
# include <stdio.h> /* for FILE */

char* bb_ttyname(int x) {}
int   bb_ttyname_r(int x, char *ptr, size_t s) {}
char *bb_mktemp(char *ptr) {}

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {}

