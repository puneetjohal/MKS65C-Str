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
      s1++;
      s2++;
    }
  }
  if (*s1 < *s2){
    return -1;
  }
  else{
    return 1;
  }
}

//returns the address of c in *s
char * mystrchr( char *s, char c ){
  while (*s){
    if (*s == c){
      return s;
    }
    else{
      s++;
    }
  }
  return NULL;
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
  printf("s3 = %s\n\n", s3);


  printf("length of empty string: %d\n", mystrlen(s));
  printf("length of hello: %d\n", mystrlen(s0));
  printf("length of goodbye: %d\n\n", mystrlen(s1));

  printf("MY: copying s0 into s1: %s\n", mystrcpy(s1,s0));
  printf("ACTUAL: copying s0 into s1: %s\n", strcpy(s1,s0));
  printf("MY: copying s into s0: %s\n", mystrcpy(s0,s));
  printf("ACTUAL: copying s into s0: %s\n", strcpy(s0,s));
  printf("MY: copying into s2: %s\n", mystrcpy(s2,"bye"));
  printf("ACTUAL: copying into s2: %s\n\n", strcpy(s2,"bye"));

  printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,3));
  printf("Concatenate s3 and s1: %s\n", strncat(s3,s1,3));
  printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,0));
  printf("Concatenate s3 and s1: %s\n", strncat(s3,s1,0));
  printf("Concatenate s2 and  s1: %s\n", mystrncat(s2,s1,4));
  printf("Concatenate s3 and s1: %s\n\n", strncat(s3,s1,4));

  printf("compare s0 and s2: %d\n", mystrcmp(s0,s3));
  printf("compare s1 and s2: %d\n", mystrcmp(s1,s2));
  printf("compare s2 and s1: %d\n\n", mystrcmp(s2,s1));

  printf("MY: address of 'e' in s0: %s\n", mystrchr(s0,'e'));
  printf("ACTUAL: address of 'e' in s0: %s\n", strchr(s0,'e'));
  printf("MY: address of 'a' in s1: %s\n", mystrchr(s1,'a'));
  printf("ACTUAL: address of 'a' in s1: %s\n\n", strchr(s1,'a'));

  return 0;
}
