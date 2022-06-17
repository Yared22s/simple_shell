#ifndef _H_MAIN_H_
#define _H_MAIN_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>

/**
 * struct his - Struct his
 *
 * @line: command
 * @linenmbr: command number
 * @next: next node
 */
typedef struct his
{
char *line;
int linenmbr;
struct his *next;
} h_t;


/* shell utilities */
char **make_command(char *buffer, char *sep);
int exec_command(char **av, char **tokens, char *, char **, char **, int);
void pathfinder(char *s1, char **env, char *);
void siggy(int sig_num);

/* string utilities */
void _puts(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void itoa(int n);
char *_strdup(char *str);
int _strncmp(char *s1, char *s2, int x);


int isbuiltin(char *buffer, char **env, h_t **head);
void freedouble(char **array);


int berautix(void);
void make_history(char *buffer, h_t **head, int x);
int spacecheck(char *);

int testspace(char **commands);
void semicolonproblem(char **av);
void filecommands(char **av, char **, int);


void free_nodes(h_t *head);
void tokenizing(char **tokens, char **commands,
char **av, char **env, char *buffer, int t);


void writehistory(h_t *head);
char *itoa2(int n, char *);
#endif
