/*
Including the Libraries

*/
#include<stdio.h>
//function declarations
int givenyear,givendate,givenmonth,day;
int option,myyear;
int yearcode,monthcode,leapyearcode;
//Main function
int main()
{

    system("cls"); // to clear the screen Ecery time
    printf("\n\t\tWelcome to Day finder project\n");
    /*
    Showing the user The menu drive code for taking input and printing the output
    */
    printf("\n\t\tPlease enter the following Details: \n\n");
    //Scanning day month and year from user
    printf("\nPlease Enter your date: ");
    scanf("%d",&givendate);
    printf("\nPlease Enter your month: ");
    scanf("%d",&givenmonth);
    printf("\nPlease Enter your year: ");
    scanf("%d",&givenyear);
    date(); // calling the Respective functions
    month();
    year();
    leapyear();
    days();
    printf(" \n\n\n enter 1 to exit : \n\n enter 2 to run again: ");
    scanf("%d",&option);

    if (option == 1) // if no
    {
        close();
    }

    if (option == 2) // if yes
    {
        main();
        date();
        year();

    }

    return 0;
}
//function definitions
//Function to check whether date is valid or not
void date()
{
    if (!(0<givendate&&givendate<=31))//there are at most 30 days in a week
    {
        printf("the given date is not valid");
        main();

    }

    return;
}

//printing day name for given date
void days()
{
int daycode,daycodeday;
   char *week[7]={"Saturday","Sunday","Monday", "Tuesday","Wednesday","Thursday","Friday"};//there are 7 days in a week
    int day[7] ={0,1,2,3,4,5,6}; // 7 days code values
    yearcode = 6;
   daycode = givendate+monthcode+myyear+yearcode+leapyearcode; //calculating day code
   daycodeday = daycode%7;
  printf("\n\n\t\tThe given day of date is \"%s\"",week[daycodeday]);
 return;
}
//Function to check whether given month is valid or not
void month()
{

  if (givenmonth<13&&givenmonth>0)//There are only 12 months in a year
 {
      int  monthcodes[12]= {1,4,4,0,2,5,0,3,6,1,4,6};
      monthcode= monthcodes[(givenmonth-1)];
 }

 else {
    printf(" given month is not valid please try again\n\n it should be in between 1 to 12");
    main();//returning to main function
 }

    return;
}
//Closing function after output
void close()
{
    printf("\n\nThis program is developed by Pavan Kalyan\n\n");
    getch();//function used to hold the screen
    exit(0);
    return;
}
//To check whether year is valid or not  and to get the year code
void year()
{

    int yearcode;

    if (2000<givenyear&&givenyear<2099)
    {

        yearcode = 6;

    }
        if (2100<=givenyear&&givenyear<=2199)
    {

        yearcode = 4;

    }
        if (2200<=givenyear&&givenyear<=2299)
    {
        yearcode = 2;

    }

    return;
}
//To check whether the given year is leap year or not
// to produce the leap year code
void leapyear()
{
    int yearcopy = givenyear;
    int digit1 = yearcopy%10;
    yearcopy = yearcopy/10;
    int digit2 = yearcopy%10;
    myyear = digit2*10 + digit1;
    leapyearcode = myyear/4;
    return;
}
