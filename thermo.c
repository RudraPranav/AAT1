//To calculate Thermodynamic parameters
#include<stdio.h>
int main()
{
int n;
float od,c,t,t1,t2,op=0;
printf("Choose from the options given below:\n");
printf("1.Thermal Expansion\n2.Newton's law of cooling\n3.Heat Transfer\n");   //Asking user to choose parameter which is to be calculated
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter the original length/area/volume:\n");
scanf("%f",&od);
printf("Enter the constant of expansion:\n");
scanf("%f",&c);
printf("Enter the change in temperature:\n");
scanf("%f",&t);
op=od*(1+c*t);
printf("The new dimention is %f",op);
break;
case 2:
printf("Enter the initial temperature:\n");
scanf("%f",&t1);
printf("Enter the final temperature:\n");
scanf("%f",&t2);
printf("Enter the surrounding temperature:\n");
scanf("%f",&t);
printf("Enter the value of constant k:");
scanf("%f",&c);
op=c*((t1+t2)/2-t);
printf("Rate of cooling in given time is:%f",op);
break;
case 3:
printf("Enter the conductivity of material:\n");
scanf("%f",&c);
printf("Enter the area of material:\n");
scanf("%f",&t1);
printf("Enter the change in temperature:\n");
scanf("%f",&t);
printf("Enter the length of material:\n");
scanf("%f",&od);
op=c*t1*t/od;
printf("The rate of heat flow is %f",op);
break;
default:
printf("Invalid input"); 	
}
return 0;
}
