#include <stdio.h>
#include <string.h>

int mystrlen (char * s){
  int answer=0;
  while(*s++){
    answer++;
  }
  return answer; 
}

int main(){
  char s[]="";
  char s0[]="hello";
  char s1[]="goodbye";
  printf("length of empty string: %d\n", mystrlen(s)); 
  printf("length of hello: %d\n", mystrlen(s0));
  printf("length of goodbye: %d\n", mystrlen(s1)); 
  return 0;
}
