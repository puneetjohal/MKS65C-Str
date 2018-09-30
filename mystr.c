#include <stdio.h>
#include <string.h>

//gives length of string
int mystrlen (char * s){
  int answer=0;
  while(*s++){
    answer++;
  }
  return answer; 
}

//copies source string to dest string
char * mystrcpy( char *dest, char *source ){
  //char * destCopy = *dest;
  int i=0;
  while (* source ){
    *dest++ = *source++;
    i++;
    }
  *(dest)='\0';
  return (dest-i);
}
    

int main(){
  char s[]="";
  char s0[]="hello";
  char s1[]="goodbye";
  //printf("length of empty string: %d\n", mystrlen(s)); 
  //printf("length of hello: %d\n", mystrlen(s0));
  //printf("length of goodbye: %d\n", mystrlen(s1));
  //printf("copying s0 into s1: %s\n", mystrcpy(s1,s0));
  //printf("copying s0 into s1: %s\n", strcpy(s1,s0));
  //printf("copying s into s0: %s\n", mystrcpy(s0,s));
  //printf("copying s into s0: %s\n", strcpy(s0,s));
  return 0;
}
