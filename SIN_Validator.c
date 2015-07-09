//Mithila DeSIlva
# include<stdio.h>
int main(void)
{
//Declare variables
int sin;
int d1;
int d2;
int d3;
int d4;
int d5;
int d6;
int d7;
int d8;
int d9;
int checkDigit;

int d8d8;
int d8d8d8;

int d6d6;
int d6d6d6;

int d4d4;
int d4d4d4;

int d2d2;
int d2d2d2;

int add;
int rest;
int total;
float total1;
int total2;
int total3;


printf("Please enter your Social Insurance Number(9 Digits):\n");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);

if (checkDigit==0){
checkDigit= 0+10;}


//Calculations

checkDigit=d9;

d8d8= (d8+d8)/10;
d8d8d8= (d8+d8) % 10;

d6d6= (d6+d6)/10;
d6d6d6= (d6+d6) % 10;

d4d4= (d4+d4)/10;
d4d4d4= (d4+d4) % 10;

d2d2= (d2+d2)/10;
d2d2d2= (d2+d2) % 10;

add= d8d8 + d8d8d8 + d6d6 + d6d6d6 + d4d4 + d4d4d4 + d2d2 + d2d2d2;
rest= d1+d3+d5+d7;

total= add+rest;
total1= (total+10)/10;

total2= total1*10;

total3= total2-total;




if (checkDigit==0)
{
checkDigit= 0+10;
total3= checkDigit;

 printf("\nSIN:%d%d%d%d%d%d%d%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9); 
 printf("This is a valid SIN.\n");
 }
 else if (total3==checkDigit)
{

 printf("\nSIN:%d%d%d%d%d%d%d%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9); 
 printf("This is a valid SIN.\n");
 }
 
else if (total3!=checkDigit)
{

 printf("SIN:%d%d%d%d%d%d%d%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9); 
 printf("This is not a valid SIN.\n");
 }


return 0;

}