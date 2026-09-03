#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showStats(int cgpa, int money, int energy, int social, int attendance)
{
    printf("\n==============================\n");
    printf("        YOUR CURRENT STATS\n");
    printf("==============================\n");
    printf("CGPA Score      : %d/100\n", cgpa);
    printf("Money           : Rs. %d\n", money);
    printf("Energy          : %d/100\n", energy);
    printf("Social Life     : %d/100\n", social);
    printf("Attendance      : %d%%\n", attendance);
    printf("==============================\n");
}

void randomEvent(int *money, int *energy, int *social, int *cgpa)
{
    int event = rand() % 5;

    printf("\n--- RANDOM EVENT ---\n");

    switch (event)
    {
    case 0:
        printf("Surprise quiz announced! You somehow do well.\n");
        *cgpa += 5;
        break;

    case 1:
        printf("Your friends convince you to order food.\n");
        *money -= 300;
        *social += 5;
        break;

    case 2:
        printf("You slept badly last night.\n");
        *energy -= 15;
        break;

    case 3:
        printf("You found Rs. 200 in your old bag. Lucky day!\n");
        *money += 200;
        break;

    case 4:
        printf("You attended a club event and met new people.\n");
        *social += 10;
        *energy -= 5;
        break;
    }
}

void limitStats(int *cgpa, int *energy, int *social, int *attendance)
{
    if (*cgpa > 100)
        *cgpa = 100;

    if (*cgpa < 0)
        *cgpa = 0;

    if (*energy > 100)
        *energy = 100;

    if (*energy < 0)
        *energy = 0;

    if (*social > 100)
        *social = 100;

    if (*social < 0)
        *social = 0;

    if (*attendance > 100)
        *attendance = 100;

    if (*attendance < 0)
        *attendance = 0;
}

int main()
{
    int day = 1;
    int choice;

    int cgpa, money, energy, social, attendance;

    printf("\nEnter your current stats:\n");

    printf("CGPA Score (0-100): ");
    scanf("%d", &cgpa);

    printf("Money (Rs.): ");
    scanf("%d", &money);

    printf("Energy (0-100): ");
    scanf("%d", &energy);

    printf("Social Life (0-100): ");
    scanf("%d", &social);

    printf("Attendance (0-100): ");
    scanf("%d", &attendance);

    limitStats(&cgpa, &energy, &social, &attendance);

    printf("\nYour starting stats have been set!\n");
    showStats(cgpa, money, energy, social, attendance);

    srand(time(0));

    printf("====================================\n");
    printf("        COLLEGE LIFE RPG\n");
    printf("====================================\n");
    printf("Survive 30 days of college life!\n");
    printf("Balance your CGPA, money, energy,\n");
    printf("attendance and social life.\n");
    printf("====================================\n");

    while (day <= 30)
    {
        printf("\n\n====================================\n");
        printf("              DAY %d\n", day);
        printf("====================================\n");

        showStats(cgpa, money, energy, social, attendance);

        printf("\nIt's 7:45 AM.\n");
        printf("Your class starts at 8:00 AM.\n");

        printf("\nWhat do you want to do?\n");
        printf("1. Attend class\n");
        printf("2. Sleep more\n");
        printf("3. Skip class and study\n");
        printf("4. Go out with friends\n");
        printf("5. Order food and chill\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("\n");

        switch (choice)
        {
        case 1:
            printf("You somehow made it to class.\n");
            printf("Academic weapon behaviour.\n");

            cgpa += 3;
            attendance += 2;
            energy -= 15;
            money -= 50;

            break;

        case 2:
            printf("You chose sleep over education.\n");
            printf("Honestly... understandable.\n");

            energy += 25;
            attendance -= 5;
            cgpa -= 2;

            break;

        case 3:
            printf("You skipped class but studied seriously.\n");
            printf("Risky strategy.\n");

            cgpa += 5;
            attendance -= 5;
            energy -= 10;

            break;

        case 4:
            printf("You went out with your friends.\n");
            printf("Social life increased, bank balance didn't.\n");

            social += 15;
            money -= 500;
            energy -= 15;
            attendance -= 5;

            break;

        case 5:
            printf("You ordered food and spent the evening chilling.\n");

            money -= 350;
            energy += 10;
            social += 2;

            break;

        default:
            printf("Invalid choice.\n");
            printf("You wasted the entire day deciding what to do.\n");

            energy -= 5;

            break;
        }

        if (day % 3 == 0)
        {
            randomEvent(&money, &energy, &social, &cgpa);
        }

        limitStats(&cgpa, &energy, &social, &attendance);

        if (money <= 0)
        {
            printf("\n====================================\n");
            printf("            GAME OVER\n");
            printf("====================================\n");
            printf("You are officially broke 💀\n");
            printf("Your hostel survival has ended.\n");
            break;
        }

        if (energy <= 0)
        {
            printf("\n====================================\n");
            printf("            GAME OVER\n");
            printf("====================================\n");
            printf("Your energy reached zero.\n");
            printf("You desperately need rest.\n");
            break;
        }

        if (attendance < 50)
        {
            printf("\nWARNING: Attendance is below 50%%!\n");
            printf("You are entering dangerous territory.\n");
        }

        day++;
    }

    if (day > 30)
    {
        printf("\n\n====================================\n");
        printf("        30 DAYS COMPLETED!\n");
        printf("====================================\n");

        showStats(cgpa, money, energy, social, attendance);

        printf("\nFINAL RESULT:\n");

        if (cgpa >= 80 && attendance >= 75 && money > 0)
        {
            printf("ACADEMIC WEAPON 🗿\n");
            printf("You somehow managed college perfectly.\n");
        }
        else if (cgpa >= 60 && money > 0)
        {
            printf("SURVIVOR 😎\n");
            printf("Not perfect, but you survived college.\n");
        }
        else
        {
            printf("ABSOLUTELY COOKED 💀\n");
            printf("At least you survived 30 days.\n");
        }
    }

    printf("\nThanks for playing College Life RPG!\n");

    return 0;
}
