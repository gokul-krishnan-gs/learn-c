#include <stdio.h>
void main(){
  printf("\nSYSTEM MEMORY CONFIGURATION\n");
  printf("int : %zu bytes\n",sizeof(int));
  printf("char : %zu bytes\n",sizeof(char));
  printf("float : %zu bytes\n",sizeof(float));
  printf("double : %zu bytes\n",sizeof(double));

  printf("short : %zu bytes\n",sizeof(short));
  printf("long : %zu bytes\n",sizeof(long));
  printf("long long : %zu bytes\n",sizeof(long long));
  printf("long double : %zu bytes\n",sizeof(long double));
  printf("signed : %zu bytes\n",sizeof(signed));
  printf("unsigned : %zu bytes\n",sizeof(unsigned));
}
