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
char * mystrncat( char *dest, char *source, int n){
  int i=0;
  int startLen= mystrlen(dest);
  while(n && *source){
    *(dest+startLen+i)=*source++;
    n--;
    i++;
  }
  *(dest+startLen+i)='\0';
  return dest;
  }

int main(){
  char s[]="";
  char s0[]="hello";
  char s1[]="goodbye";
  char s2[40]="hello";
  char s3[40]="hello";

  //printf("length of empty string: %d\n", mystrlen(s)); 
  //printf("length of hello: %d\n", mystrlen(s0));
  //printf("length of goodbye: %d\n", mystrlen(s1));

  //printf("copying s0 into s1: %s\n", mystrcpy(s1,s0));
  //printf("copying s0 into s1: %s\n", strcpy(s1,s0));
  //printf("copying s into s0: %s\n", mystrcpy(s0,s));
  //printf("copying s into s0: %s\n", strcpy(s0,s));
  //printf("copying into s2: %s\n", mystrcpy(s2,"bye"));
  //printf("copying into s2: %s\n", strcpy(s2,"bye"));

  //printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,3));
  //printf("Concatenate s3 and s1: %s\n", strncat(s3,s1,3));
  //printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,0));
  //printf("Concatenate s3 and s1: %s\n", strncat(s3,s1,0));
  //printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,4));
  //printf("Concatenate s3 and s1: %s\n", strncat(s3,s1,4));
  return 0;
}
