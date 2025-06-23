/** Ascending & Descending Orders **/

#include<stdio.h>
#include<stdlib.h>

/* Ascending Order **/
void asc_order()
{
	int i, j, n, a[100], t;
	system("cls");
	printf("How many numbers you want to enter:");
	scanf("%d", &n);
	system("cls");
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	system("cls");
	printf("Ascending Order:");
	printf("\n\tBefore Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				/**No Swap**/
			}
			else
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\tAfter Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
}

/** Descending Order **/
void desc_order()
{
	int i, j, n, a[100], t;
	system("cls");
	printf("How many numbers you want to enter:");
	scanf("%d", &n);
	system("cls");
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	system("cls");
	printf("Descending Order:");
	printf("\n\tBefore Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				/**No Swap**/
			}
			else
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\tAfter Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
}

void both()
{
	int i, j, n, a[100], t;
	system("cls");
	printf("How many numbers you want to enter:");
	scanf("%d", &n);
	system("cls");
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	system("cls");
	printf("Ascending Order:");
	printf("\n\tBefore Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				/**No Swap**/
			}
			else
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\tAfter Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\nDescending Order:");
	printf("\n\tBefore Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				/**No Swap**/
			}
			else
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\tAfter Sorting:\n\t\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ", a[i]);
	}
}



void main()
{
	char ch, choice;
	do
	{
		system("cls");
		printf("   Ascending & Descending Sorter");
		printf("\n_________________________________");
		printf("\n| A. Ascending Order \t\t|");
		printf("\n| B. Descending Order \t\t|");
		printf("\n| C. Both \t\t\t|");
		printf("\n---------------------------------\n");
		scanf(" %c", &ch);
		system("cls");
		switch(ch)
		{
			case 'A':
				{
					asc_order();
					break;
				}
			case 'B':
				{
					desc_order();
					break;
				}
			case 'C':
				{
					both();
					break;
				}
			default:
				{
					printf("Invalid Option!");
				}
		}
		
		printf("\n\n\t\tDo you want to continue?(Y/N)");
		scanf(" %c", &choice);
	}while(choice=='Y'||choice=='y');
}

