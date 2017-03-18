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
    strcpy(Class[0].Free_time_Monday, "10:00 to 10:30 & 4:00 to 4:30");
}

void Display()
{
	printf("Room No = %d ", Class[0].Room_No);
	printf("Department Name = %s\n", Class[0].Dept);
	printf("Free Time on Monday: %s\n", Class[0].Free_time_Monday);
} 
