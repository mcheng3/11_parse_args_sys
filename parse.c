#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args( char *line ){
  printf("1\n");
  char **args = calloc(5, 1);
  char **pos = args;
  while (line){
    printf("2\n");
    *pos = strsep(&line, " ");
    pos++;
    printf("3\n");
  }
  return args;
}

int main(){
  printf("1\n");
  char non_lit[100] = "ls -a -l";
  char **args = parse_args(non_lit);
  printf("%s\t%s\t%s\t\n", args[0], args[1], args[2]);
}
