/*Ezigbo Ugochukwu, 10/1/2020, This program computes the JDN of any given date.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int day,month,year,a,y,m,JDN;
	
	/*Get input data*/
	printf("Enter the day, month, and year, in that order");
	scanf("%d %d %d", &day, &month, &year);
	
	/*Error Check*/
	if(month==1&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	if(month==2&&((year%4==0&&!(year%100==0))||(year%400==0))&&!(0<day&&day<30))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	if(month==2&&!((year%4==0&&!(year%100==0))||(year%400==0))&&!(0<day&&day<29))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	if(month==3&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==4&&!(0<day&&day<31))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==5&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==6&&!(0<day&&day<31))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==7&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==8&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==9&&!(0<day&&day<31))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==10&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	if(month==11&&!(0<day&&day<31))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
		if(month==12&&!(0<day&&day<32))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	if(!((0<month&&month<13)&&(0<year)))
	{
		printf("Invalid date./n");
		system("pause");
		exit(1);
	}
	
	/*Calculate*/
	a=(14-month)/12;
	y=year+4800-a;
	m=month+(12*a)-3;
	JDN=(day)+(((153*m)+2)/5)+(365*y)+(y/4)-(y/100)+(y/400)-(32045);
	
	/*display results*/
	printf("The Julian day number for day %d, month %d, and year %d, is %d. /n", day, month, year, JDN);
	
	/*exit*/
	system("pause");
	return 0;
}
/*Enter the day, month, and year, in that order12 2 2004
The Julian day number for day 12, month 2, and year 2004, is 2453048. /nPress any key to continue . . .
Enter the day, month, and year, in that order31 6 29
Invalid date./nPress any key to continue . . .*/
