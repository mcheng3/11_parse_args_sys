#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char *line ){
  char **args = calloc(6, sizeof(char *));
  char **pos = args;
  while (line){
    *pos = strsep(&line, " ");
    pos++;
  }
  return args;
}

int main(){
	char line[256] = "ls -a -l";
	char ** args = parse_args(line);
	execvp(args[0], args);
}
