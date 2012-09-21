#include <stdio.h>

int main() {
 int x1,x2,x3,x4,a,b,c,d,e;
 printf("Input x1,x2,x3,x4:\n");
 scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
 a=1;
 b=-(x1+x2+x3+x4);
 c=(x1*x2+x1*x3+x1*x4+x2*x3+x2*x4+x3*x4);
 d=-(x1*x2*x3+x1*x2*x4+x1*x3*x4+x2*x3*x4);
 e=x1*x2*x3*x4;
 printf("Degree:      %-10d %-10d %-10d %-10d %-10d\n",4,3,2,1,0);
 printf("Coefficient: %-10d %-10d %-10d %-10d %-10d\n",a,b,c,d,e);
 fflush(stdin);
 getchar();
}
