/*                                PM SECTION
			    BATCH(24): TEJASVI.K(1BM21ET057)
				       MODITHE.R(1BM21ET022)    */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void state(int ph)
{
	if(ph>=0&&ph<7)
	printf("\nIt is Acidic");
	else if(ph==7)
	printf("\nIt is Neutral");
	else if(ph>7&&ph<=14)
	printf("\nIt is Basic");
	else
	printf("Invalid");
}

void stat(int poh)
{
	if(poh>=0&&poh<7)
	printf("\nIt is Basic");
	else if(poh==7)
	printf("\nIt is Neutral");
	else if(poh>7&&poh<=14)
	printf("\nIt is Acidic");
	else
	printf("Invalid");
}
getch();
void main()
{
	float ion,ph,poh,ph1,poh1;
	int ch;
	int n;
	clrscr();
	while(1)
	{
	printf("\n\nEnter:\n1.to calculate pH \n");
	printf("2.to calculate pOH \n3.to exit(press on any character)\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("\nenter the concentration of hydrogen ion(H+)\n");
		       scanf("%f",&ion);
		       ph=fabs(-log10(ion));
		       printf("pH is %f",ph);
		       break;

		case 2:printf("\nenter the concentration of hydroxyl ion(OH-)\n");
		       scanf("%f",&ion);
		       poh=fabs(-log10(ion));
		       printf("pOH is %f",poh);
		       break;

		default:printf("\nInvalid");
		       exit(0);
	}
	ph1=ph;
	poh1=poh;

	printf("\nDo you want to check it if it is acidic,basic or neutral?\n");
	printf("\n(If yes print '1' else 'any number' )\n");
	scanf("%d",&ch);
	if(ch==1&&n==1)
	{
	      state(ph1);
	}
	else if(ch==1&&n==2)
	{
	      stat(poh1);
	}
	}

  }
