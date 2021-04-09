#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
  int sumIt = 0;
  char someStr[] = "J. A. R. V. I. S. was written in C\n";
  int len=strlen(someStr);
  for (int i=0; i< 1000; i++){
    sumIt += someStr[i % len];
  }
  printf("0x%x\n", sumIt);
}