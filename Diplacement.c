#include<stdio.h>
float main()
{
    float s,u,a,t;
    printf("u:");
    scanf("%f",&u);
    printf("a:");
    scanf("%f",&a);
    printf("t:");
    scanf("%f",&t);
    s=(u*t)+0.5*(a*t*t);
    printf("the displacement is %f",s);
}

