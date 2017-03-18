#include <stdio.h>
#include <string.h>
#define MAX 100

struct ClassRoom {
	int Room_No;
	char Dept[20];
	char Free_time_Monday[MAX];
	char Free_time_Tuesday[MAX];
	char Free_time_Wednesday[MAX];
	char Free_time_Thursday[MAX];
	char Free_time_Friday[MAX];
	char Free_time_Saturday[MAX];
};
struct ClassRoom Class[MAX];

void Display();
void DataInput();

int main()
{
    DataInput();
    Display();
    return 0;
}

void DataInput()
{
	Class[0].Room_No = 201;
    strcpy(Class[0].Dept,"TE");
    strcpy(Class[0].Free_time_Monday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[0].Free_time_Tuesday, "10:00 to 10:30");
    strcpy(Class[0].Free_time_Wednesday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[0].Free_time_Thursday, "10:00 to 10:30");
    strcpy(Class[0].Free_time_Friday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[0].Free_time_Saturday, "10:00 to 10:30");
	Class[1].Room_No = 221;
    strcpy(Class[1].Dept,"TE");
    strcpy(Class[1].Free_time_Monday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[1].Free_time_Tuesday, "10:00 to 10:30");
    strcpy(Class[1].Free_time_Wednesday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[1].Free_time_Thursday, "10:00 to 10:30");
    strcpy(Class[1].Free_time_Friday, "10:00 to 10:30, 4:00 to 4:30");
    strcpy(Class[1].Free_time_Saturday, "10:00 to 10:30");
}

void Display()
{
	int i,j;
	printf("Day\t\t");
	printf("Room No\t\t");
	printf("Department Name\t\t");
	printf("Free Time\n");
	for(i=0;i<6;i++)
	{
		switch((i+1))
		{
			case 1:
				printf("Monday\t\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			case 2:
				printf("Tuesday\t\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			case 3:
				printf("Wednesday\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			case 4:
				printf("Thrusday\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			case 5:
				printf("Friday\t\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			case 6:
				printf("Saturday\t");
				for(j=0;j<2;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Monday);
					}
				}
				break;
			default: 
				break;
		}
	}
} 
