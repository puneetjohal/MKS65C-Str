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

//concatinates two strings
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

//compares the two strings lexographically
int mystrcmp( char *s1, char *s2 ){
  while (*s1 == *s2){
    if (*s1 == 0 && *s2 == 0) {
      return 0;
    }
    else {
      *s1++;
      *s2++;
    }
  }
  if (&(*s1) < &(*s2)){
    return -1;
  }
  else{
    return 1;
  }
}

int main(){
  char s[]="";
  char s0[]="hello";
  char s1[]="goodbye";
  char s2[40]="hello";
  char s3[40]="hello";

  printf("s = %s\n", s);
  printf("s0 = %s\n", s0);
  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);
  printf("s3 = %s\n", s3);

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

  printf("compare s0 and s2: %d\n", mystrcmp(s0,s3));
  printf("compare s0 and s2: %d\n", strcmp(s0,s3));
  printf("compare s1 and s2: %d\n", mystrcmp(s1,s2));
  printf("compare s1 and s2: %d\n", strcmp(s1,s2));
  printf("compare s2 and s1: %d\n", mystrcmp(s2,s1));
  printf("compare s2 and s1: %d\n", strcmp(s2,s1));
  return 0;
}
