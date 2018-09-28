#include <stdio.h>
#include <string.h>

int mystrlen (char * s){
  int answer=0;
  while(*s++){
    answer++;
  }
  return answer; 
}

char * mystrcpy( char *dest, char *source ){
  //char * destCopy = *dest;
  while (* source ){
    *dest = *source;
    dest++;
    source++;
  }
  return *dest;
}
    

int main(){
  char s[]="";
  char s0[]="hello";
  char s1[]="goodbye";
  printf("length of empty string: %d\n", mystrlen(s)); 
  printf("length of hello: %d\n", mystrlen(s0));
  printf("length of goodbye: %d\n", mystrlen(s1));
  printf("copying s0 into s1: %s\n", mystrcpy(s1,s0));
  return 0;
}
