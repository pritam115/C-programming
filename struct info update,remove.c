#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Variable to keep track of number of students.
int i = 0;
// Structure to store the student details.
struct sinfo {
	char fname[50];
	char lname[50];
	char dname[50];
	int id;
} st[55];
// Function to add the student
void add_student()
{

	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first "
		"name of student\n");
	scanf("%s", &st[i].fname);
	printf("Enter the last name"
		" of student\n");
	scanf("%s", &st[i].lname);
	printf("Enter the department name"
		" of student\n");
	scanf("%s", &st[i].dname);
	printf("Enter the ID Number\n");
	scanf("%d", &st[i].id);
	i = i + 1;
}
// Function to show the student details.
void find_rl()
{
	int x;
	printf("Enter the ID Number"
		" of the student\n");
	scanf("%d", &x);
	for (int j = 1; j <= i; j++) {
		if (x == st[i].id) {
			printf(
				"The Students Details are\n");
			printf(
				"Name : %s",
				st[i].fname);
			printf(
				" %s\n",
				st[i].lname);
            printf(
				"Student of %s Department\n",
				st[i].dname);
		}
		break;
	}
}
// Function to delete a student details.
void del_s()
{
	int a;
	printf("Enter the ID Number"
		" which you want "
		"to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == st[j].id) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The ID Number"
		" is removed Successfully\n");
}
// Function to update a students data
void up_s()
{

    printf("Enter the id number"
           " to update the entry: ");
    int x;
    x = 1;
    for (int j = 0; j < i; j++) {
        if (st[j].id == x) {

            printf("1. first name\n"
                   "2. last name\n"
                   "3. department name\n"
                   "4. id no.\n");
            int z;
            z = 4;
            switch (z) {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter the new last name : \n");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter the new department name : \n");
                scanf("%s", st[j].dname);
                break;
            case 4:
                printf("Enter the new id number : \n");
                scanf("%d", &st[j].id);
                break;
            }
            printf("UPDATED SUCCESSFULLY.\n");
        }
    }
}
void main()
{
	int choice, count;
	while (i = 1) {
        //printf("\n\n");
		printf("The Task that you "
			"want to perform\n");
		printf("1. Add the Student Details\n");
		printf("2. Show the Student Details\n");
		printf("3. Delete the Students Details\n");
		printf("4. Update the Students Details\n");
		printf("5. To Exit\n");
		printf("Enter your choice to "
			"find the task\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find_rl();
			break;
		case 3:
			del_s();
			break;
		case 4:
			up_s();
			break;
		case 5:
			exit(0);
			break;
		}
	}
}
