// Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

// Global Variables
int v = 0;
int l = 0;

// Structure
typedef struct patient
{
    char age[3];
    char gender;
    char first_name[20];
    char address[30];
    char phone[15];
    char problem[50];
    char doctor[20];
} patient;

patient patient_info;

// Functions
void name();
void main_m();
void add_r();
void view_r();
void search_r();
void update_r();
void delete_r();
void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
// Main Function
int main()
{
    name();
    main_m();
    return 0;
}

// name function is used to display the name of the hospital
void name()
{
    printf("\t***************************************\n");
    printf("\t*       Welcome to Green Hospital       *\n");
    printf("\t***************************************\n\n");
}

// main_menu function is used to display the services provided by the hospital
void main_m()
{
    system("cls");
    name();
    int c;

    printf("\n\t1.Add Patients Record\n\n");
    printf("\t2.View Patients Record\n\n");
    printf("\t3.Search Patients Record\n\n");
    printf("\t4.Update Patients Record\n\n");
    printf("\t5.Remove Patients Record\n\n");
    printf("\t6.Exit\n\n");

    printf("\n\tPlease Input Your Choice : ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        add_r();
        break;

    case 2:
        view_r();
        break;

    case 3:
        search_r();
        break;

    case 4:
        update_r();
        break;

    case 5:
        delete_r();
        break;

    case 6:
        printf("\n\t\t\tThanks, Have a nice day !");
        exit(1);
        break;

    default:
        printf("\n\n\t\t\tInvalid Input");
        break;
    }
}

// add_record is to add new patients record
void add_r()
{
    system("cls");
    name();

    printf("\n\t**********************Add Patient Records**************************\n");
    char add;
    FILE *fp;

    fp = fopen("data.txt", "a");
    fflush(stdin);
    printf("\n\tEnter Your Name         : ");
    gets(patient_info.first_name);

    printf("\n\tEnter Your Gender (F/M) : ");
    scanf("%c", &patient_info.gender);
    fflush(stdin);

    printf("\n\tEnter Your Age          : ");
    gets(patient_info.age);

    printf("\n\tEnter Your Contact No   : ");
    gets(patient_info.phone);

    printf("\n\tEnter Your Address      : ");
    gets(patient_info.address);
    patient_info.address[0] = toupper(patient_info.address[0]);

    printf("\n\tEnter Your Problem      : ");
    gets(patient_info.problem);

    printf("\n\tEnter Your Pescribed Doctor : ");
    gets(patient_info.doctor);
    patient_info.doctor[0] = toupper(patient_info.doctor[0]);

    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fprintf(fp, "%s %c %s %s %s %s %s \n", patient_info.first_name, patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor);
    printf("\n\n\t        Record Added\n");
    fclose(fp);

    getch();
    main_m();
}
// view_record function is used to view the total patients record
void view_r()
{
    system("cls");
    name();

    int r;
    FILE *fp;
    fp = fopen("data.txt", "r");

    printf("\n\t*********************View Patient Records*************************\n");
    gotoxy(1, 8);
    printf("Name");

    gotoxy(15, 8);
    printf("Gender");

    gotoxy(25, 8);
    printf("Age");

    gotoxy(35, 8);
    printf("Contact No");

    gotoxy(47, 8);
    printf("Address");

    gotoxy(64, 8);
    printf("Problem");

    gotoxy(78, 8);
    printf("Prescribed Doctor");

    printf("\n********************************************************************************************\n");

    r = 10;
    while (fscanf(fp, "%s %c %s %s %s %s %s\n", patient_info.first_name, &patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor) != EOF)
    {
        gotoxy(1, r);
        printf("%s", patient_info.first_name);

        gotoxy(18, r);
        printf("%c", patient_info.gender);

        gotoxy(26, r);
        printf("%s", patient_info.age);

        gotoxy(34, r);
        printf("%s", patient_info.phone);

        gotoxy(50, r);
        printf("%s", patient_info.address);

        gotoxy(65, r);
        printf("%s", patient_info.problem);

        gotoxy(78, r);
        printf("%s", patient_info.doctor);
        r++;
    }
    fclose(fp);
    getch();
    main_m();
}

// search_record to search the records by name
void search_r()
{
    name();
    char name[20];
    char s;

    system("cls");

    FILE *fp;
    fp = fopen("data.txt", "r");
    printf("\n\t*************************Search Patient Records************************\n");

    fflush(stdin);
    printf("\n\n\n\tEnter the Name of the Patient : ");
    gets(name);

    name[0] = toupper(name[0]);

    while (fscanf(fp, "%s %c %s %s %s %s %s\n", patient_info.first_name, &patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor) != EOF)
    {
        if (strcmp(name, patient_info.first_name) == 0)
        {
            gotoxy(1, 14);
            printf("Full Name");

            gotoxy(15, 14);
            printf("Gender");

            gotoxy(25, 14);
            printf("Age");

            gotoxy(35, 14);
            printf("Contact No");

            gotoxy(47, 14);
            printf("Address");

            gotoxy(64, 14);
            printf("Problem");

            gotoxy(78, 14);
            printf("Prescribed Doctor");
            printf("\n****************************************************************************************************\n");

            gotoxy(1, 17);
            printf("%s", patient_info.first_name);

            gotoxy(18, 17);
            printf("%c", patient_info.gender);

            gotoxy(26, 17);
            printf("%s", patient_info.age);

            gotoxy(34, 17);
            printf("%s", patient_info.phone);

            gotoxy(50, 17);
            printf("%s", patient_info.address);

            gotoxy(65, 17);
            printf("%s", patient_info.problem);

            gotoxy(78, 17);
            printf("%s", patient_info.doctor);
            break;
        }
    }

    if (strcmp(name, patient_info.first_name) != 0)
        printf("\n\n\t   Record is not available\n");

    fclose(fp);

    getch();
    main_m();
}

// update_record function to update the existing data
void update_r()
{
    system("cls");
    name();
    printf("\n\t******************************Update Patients Record*****************************\n");

    FILE *fp, *n_p;
    char first_name[20];

    char ch;
    int v = 0;

    n_p = fopen("ndata.txt", "w+");
    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("\n\n\tProblem opening file.");
        getch();
        main_m();
    }

    fflush(stdin);
    printf("\n\tEnter the Name of the Patient : ");
    gets(first_name);

    first_name[0] = toupper(first_name[0]);

    if (n_p == NULL)
    {
        printf("\n\n\tFile cannot be opened.");
        getch();
        main_m();
    }

    printf("\n\t******************Record Found****************\n\n");
    while (fscanf(fp, "%s %c %s %s %s %s %s\n", patient_info.first_name, &patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor) != EOF)
    {
        if (strcmp(first_name, patient_info.first_name) == 0)
        {
            v = 1;
            gotoxy(1, 12);

            printf("Full Name");
            gotoxy(15, 12);

            printf("Gender");
            gotoxy(25, 12);

            printf("Age");
            gotoxy(35, 12);

            printf("Contact No");
            gotoxy(47, 12);

            printf("Address");
            gotoxy(64, 12);

            printf("Problem");
            gotoxy(78, 12);

            printf("Prescribed Doctor");
            printf("\n****************************************************************************************************\n");

            gotoxy(1, 14);
            printf("%s", patient_info.first_name);

            gotoxy(18, 14);
            printf("%c", patient_info.gender);

            gotoxy(26, 14);
            printf("%s", patient_info.age);

            gotoxy(34, 14);
            printf("%s", patient_info.phone);

            gotoxy(50, 14);
            printf("%s", patient_info.address);

            gotoxy(65, 14);
            printf("%s", patient_info.problem);

            gotoxy(78, 14);
            printf("%s", patient_info.doctor);

            fflush(stdin);
            printf("\n\n\tEnter Your New     Name   : ");
            gets(patient_info.first_name);

            printf("\n\tEnter Your Gender (F/M)     : ");
            scanf("%c", &patient_info.gender);
            fflush(stdin);

            printf("\n\tEnter Your Age              : ");
            gets(patient_info.age);

            printf("\n\tEnter Your Contact No       : ");
            gets(patient_info.phone);

            printf("\n\tEnter Your Full Address     : ");
            gets(patient_info.address);
            patient_info.address[0] = toupper(patient_info.address[0]);

            printf("\n\tEnter Your Problem          : ");
            gets(patient_info.problem);

            printf("\n\tEnter Your Pescribed Doctor : ");
            gets(patient_info.doctor);
            patient_info.doctor[0] = toupper(patient_info.doctor[0]);

            printf("\n\tEnter 'U' to Confirm : ");
            scanf("%c", &ch);

            if (toupper(ch) == 'U')
            {
                fprintf(n_p, "%s %c %s %s %s %s %s \n", patient_info.first_name, patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor);
                printf("\n\n\t         Record Updated\n");
            }
        }
        else
        {
            fprintf(n_p, "%s %c %s %s %s %s %s \n", patient_info.first_name, patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor);
        }
    }
    if (!v)
    {
        printf("\t            No Record Found\n");
    }
    fclose(n_p);
    fclose(fp);

    remove("data.txt");
    rename("ndata.txt", "data.txt");
    getch();
    main_m();
}

void delete_r()
{
    system("cls");
    name();
    printf("\n\t*********************Delete Patients Record****************************\n");

    FILE *fp, *n_p;
    int f = 0;

    char first_name[20];
    char ch;

    n_p = fopen("ndata.txt", "w+");
    fp = fopen("data.txt", "r");

    fflush(stdin);
    printf("\n\tEnter the Name of the Patient : ");
    gets(first_name);

    first_name[0] = toupper(first_name[0]);

    printf("\n\t****************Existing Record****************\n\n");

    while (fscanf(fp, "%s %c %s %s %s %s %s\n", patient_info.first_name, &patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor) != EOF)
    {
        if (strcmp(first_name, patient_info.first_name) != 0)
        {
            fprintf(n_p, "%s %c %s %s %s %s %s \n", patient_info.first_name, patient_info.gender, patient_info.age, patient_info.phone, patient_info.address, patient_info.problem, patient_info.doctor);
        }
        else
        {
            f = 1;

            gotoxy(1, 12);
            printf("Full Name");

            gotoxy(15, 12);
            printf("Gender");

            gotoxy(25, 12);
            printf("Age");

            gotoxy(35, 12);
            printf("Contact No");

            gotoxy(47, 12);
            printf("Full Address");

            gotoxy(64, 12);
            printf("Problem");

            gotoxy(78, 12);
            printf("Prescribed Doctor");
            printf("\n************************************************************************************************\n");

            gotoxy(1, 14);
            printf("%s", patient_info.first_name);

            gotoxy(18, 14);
            printf("%c", patient_info.gender);

            gotoxy(26, 14);
            printf("%s", patient_info.age);

            gotoxy(34, 14);
            printf("%s", patient_info.phone);

            gotoxy(50, 14);
            printf("%s", patient_info.address);

            gotoxy(65, 14);
            printf("%s", patient_info.problem);

            gotoxy(78, 14);
            printf("%s", patient_info.doctor);
        }
    }

    if (f == 0)
    {
        printf("\t\t\t             No Record Found\n");
        getch();
        main_m();
    }
    else
    {
        fclose(n_p);
        fclose(fp);

        printf("\n\n\t\t\tEnter 'D' to Confirm : ");
        scanf("%c", &ch);
        if (toupper(ch) == 'D')
        {
            remove("data.txt");
            rename("ndata.txt", "data.txt");
            printf("\n\n\t\t\t      Record Deleted\n");
        }
        getch();
        main_m();
    }
}

