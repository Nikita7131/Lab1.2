#include <stdlib.h> #include <math.h> //brain fuck Lab1.2 by Nikita7131
double x1,x2,result,delta; unsigned long DATx1x2,i,variant = 3;
#define leadingMSG  printf("created by Nikita7131"); printf("\n Enter variant (1 or 2):"); printf("\n Variant 1 means choosing count of columns"); printf ("\n Variant 2 means choosing step from first to second x:\n");
#define MathMSG  printf("\n************************************************"); printf("\n*  N  *         X         *        F(X)        *"); printf("\n************************************************");
#define Program_1  delta=(x2-x1)/(DATx1x2-1);for(i=1;i<=DATx1x2;i++){result=9*x1*x1*x1-1000;printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,result);if(i%10==0){printf("\nPress any key to continue...");}x1=x1+delta;}
#define Program_2  while(x1<=x2){result=9*x1*x1*x1-1000;printf("\n|%5.0d|%19.2f|%20.2f|\n",i,x1,result);if(i%10==0){printf("\nPress any key to continue...");}x1=x1+delta;i++;}
void main(){if(variant-1 <= 1){printf("\n Enter x1,Enter x2,");variant==1?printf("Enter N:"):printf("Enter delta:");scanf("%lf %lf %u",&x1,&x2,&DATx1x2); MathMSG if(variant){Program_1}else{Program_2}}else leadingMSG scanf("%d",&variant);main();}
