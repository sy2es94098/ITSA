#include <stdio.h>
#include<stdlib.h>
int N, v[9]={0};
void f(int n);
int main(int argc, char *argv[])
{
 if(argc == 2) {N = atoi(argv[1]);}
 else { N = 2; printf("default N = 2\n");  }
 f(N);
}
void f(int n)
{ int i, j;
   for(i=0; i<=1; i++){
     v[N-n] = i;
     if(n > 1) f(n-1);
     else {     for(j=0; j<N; j++) printf("%d ", v[j]);
                   printf("\n"); }
 }
}

