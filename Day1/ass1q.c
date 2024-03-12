#include <stdio.h>

struct Date{
    int day;
    int month ;
    int year;

};
void initDate(struct Date *ptrDate)
{
    ptrDate->day=0;
    ptrDate->month=0;
    ptrDate->year=0;

}
void printDateOnConsole(struct Date* ptrDate){
    printf("Enter the day, month, and year\n");
    scanf("%d%d%d ",&ptrDate->day,&ptrDate->month,&ptrDate->year);


}
void printDateFromConsole(struct Date* ptrDate){

    printf("entered the date is %d : %d : %d",ptrDate->day,ptrDate->month,ptrDate->year);


}
int menu(){
    int choice;
    printf("\n");
    printf("enter the choices\n");
    printf("1.entered date\n");
    printf("2.show the data\n");
    printf("3.enter the values\n");
    scanf("%d",&choice);
    return choice;
}
int main ()
{
    struct Date d1;
    int choice ;
    while ((choice=menu())!=0)
    {
    
    switch (choice)
    {
    case 1:
    initDate(&d1);
    break;
    case 2:
    printDateFromConsole(&d1);
    break;
    printDateOnConsole(&d1);
    break;
     
    
    default:
    printf("wrong choice ");

        break;
    }
    }

}
