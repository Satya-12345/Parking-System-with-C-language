#include <stdio.h>
#include<stdlib.h>

int Menu();
void Delete();
void ShowDetail();
void Riksha();
void Bus();
void Cycle();
int Exit();

int noR = 0, noB = 0, noC = 0, count = 0, amount = 0;

int main()
{
    while (1)
    {
        switch (Menu())
        {
        case 1:
            Bus();
            break;
        case 2:
            Cycle();
            break;
        case 3:
            Riksha();
            break;
        case 4:
            ShowDetail();
            break;

        case 5:
            Delete();
            break;
        case 6:
            printf("Thanks for using\n");
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}

int Menu()
{
    int ch;
    printf("\n\n1. Enter Bus\n");
    printf("2. Enter Cycle\n");
    printf("3. Enter Riksha\n");
    printf("4. Show Status\n");
    printf("5. Delete Data\n");
    printf("6. Exit\n");
    printf("Enter ur choice: ");
    scanf("%d", &ch);
    return ch;
}

void Delete()
{
    noC = 0;
    noR = 0;
    noB = 0;
    amount = 0;
    count = 0;
}
void ShowDetail()
{
    printf("Number of Bus: %d\n", noB);
    printf("Number of Cycle: %d\n", noC);
    printf("Number of Riksha: %d\n", noR);
    printf("Total Number of Vehicle: %d\n", (count));
    printf("Total amount gain: %d\n", amount);
}

// int Exit()
// {
//     printf("Thanks For using\n");
//     return 0;
// }
void Riksha()
{
    printf("Entry Successful\n");
    noR++;
    amount = amount + 50;
    count++;
}

void Cycle()
{
    printf("Entry Successful\n");
    noC++;
    amount = amount + 20;
    count++;
}

void Bus()
{
    printf("Entry Successful\n");
    noB++;
    amount = amount + 100;
    count++;
}
