#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


#if 0
/* Declare a buffer for user input of size 2048 */
static char input[2048];

/* Fake readline function */
char* readline(char* prompt) {
	fputs(prompt, stdout);
	fgets(buffer, 2048, stdin);
	char* cpy = malloc(strlen(buffer) + 1);
	strcpy(cpy, buffer);
	cpy[strlen(cpy) - 1] = '\0';
	return cpy;
}
#endif



int main(int argc, char** argv) {

	/* Print version and exit information */
	puts("Lispy version 0.0.0.0.1");
	puts("Press Ctrl+C to Exit\n");

	/* In a never ending loop */
	while (1) {

		char* input = readline("lispy> ");
		add_history(input);
		printf("No you're a %s\n", input);
		free(input);
	}

	return 0;

}
