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
    strcpy(Class[0].Dept,"TE (1st Year)");
    strcpy(Class[0].Free_time_Monday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[0].Free_time_Tuesday, "11:00 to 11:30, 2:00 to 2:45");
    strcpy(Class[0].Free_time_Wednesday, "11:00 to 11:30,1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[0].Free_time_Thursday, "11:00 to 11:30, 2:00 to 2:45");
    strcpy(Class[0].Free_time_Friday, "11:00 to 11:30, 2:00 to 2:45");
    strcpy(Class[0].Free_time_Saturday, "9:00 to 4:45");
    
    
	Class[1].Room_No = 101;
    strcpy(Class[1].Dept,"TE (2nd Year)");
    strcpy(Class[1].Free_time_Monday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[1].Free_time_Tuesday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[1].Free_time_Wednesday, "11:30 to 12:00, 2:00 to 2:45");
    strcpy(Class[1].Free_time_Thursday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[1].Free_time_Friday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[1].Free_time_Saturday, "11:00 to 11:30, 1:30 to 2:15");
    
    Class[2].Room_No = 102;
    strcpy(Class[2].Dept,"TE (3rd Year)");
    strcpy(Class[2].Free_time_Monday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[2].Free_time_Tuesday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[2].Free_time_Wednesday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[2].Free_time_Thursday, "11:30 to 12:00, 2:00 to 2:45");
    strcpy(Class[2].Free_time_Friday, "11:00 to 11:30, 1:30 to 2:15, 4:15 to 4:45");
    strcpy(Class[2].Free_time_Saturday, "11:00 to 11:30");
}

void Display()
{
	int i,j;
	printf("Day\t\t");
	printf("Room No\t\t");
	printf("Department Name\t\t\t");
	printf("Free Time\n\n");
	for(i=0;i<6;i++)
	{
		switch((i+1))
		{
			case 1:
				printf("Monday\t\t");
				for(j=0;j<3;j++)
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
				putchar('\n');
				break;
			case 2:
				printf("Tuesday\t\t");
				for(j=0;j<3;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Tuesday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Tuesday);
					}
				}
				putchar('\n');
				break;
			case 3:
				printf("Wednesday\t");
				for(j=0;j<3;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Wednesday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Wednesday);
					}
				}
				putchar('\n');
				break;
			case 4:
				printf("Thrusday\t");
				for(j=0;j<3;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Thursday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Thursday);
					}
				}
				putchar('\n');
				break;
			case 5:
				printf("Friday\t\t");
				for(j=0;j<3;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Friday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Friday);
					}
				}
				putchar('\n');
				break;
			case 6:
				printf("Saturday\t");
				for(j=0;j<3;j++)
				{
					if(j<1)
					{
						printf("%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Saturday);
					}
					else
					{
						printf("\t\t%d\t\t", Class[j].Room_No);
						printf("%s\t\t\t", Class[j].Dept);
						printf("%s\n", Class[j].Free_time_Saturday);
					}
				}
				putchar('\n');
				break;
			default: 
				break;
		}
	}
} 
