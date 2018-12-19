#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

struct Date
{
    int year;
    int month;
    int day;
};

struct Lotto
{
    Date date;
    int num[6];
};

int duplicate(int num[], int pos){
   for(int i=0;i<pos;i++){
    if(num[i]==num[pos]) return 1;
   }
   return 0;
}
int main(){
    Lotto lotto[MAX];
    int n;
    int tem;
    srand(time(NULL));
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        lotto[i].date.year = rand()%11+2010;
        lotto[i].date.month = rand()%12+1;
        lotto[i].date.day = rand()%31+1;
        printf("%d/%02d/%02d ", lotto[i].date.year, lotto[i].date.month, lotto[i].date.day);
        for(int j=0; j<6; j++)
    {do{
        tem = rand()%49+1;
        lotto[i].num[j]=tem;
        }while(duplicate(lotto[i].num,j));
        printf("%02d ",lotto[i].num[j]);
    }
    printf("\n");
    }
}
