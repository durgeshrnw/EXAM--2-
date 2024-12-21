//1. WAP to find area of Triangle using below formula      
// area=(l*h)/22.

#include<stdio.h>
int  main()
{
     float area,l,h;

     printf("Enter the the L :- ");
     scanf("%f",&l);
     printf("Enter the the H :- ");
     scanf("%f",&h);

     area = l*h/22 ;

     printf("%.4f",area);


     return 0 ;

}