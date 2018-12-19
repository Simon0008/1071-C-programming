#include <stdio.h>
int sumodd1(int n){
   if(n==1)
    return 1;
   else
    return sumodd1(n-1)+(2*n-1);
}
int sumodd2(int x){
   if(x==1)
    return 1;
   else
    return sumodd2(x-2)+x;
}
int main(){
int n,x;
int sumodd;
while(n>=0)
{
    printf("Enter n: ");
    scanf("%d",&n);
    sumodd1(n);
    printf("sumodd1(%d)=%d\n",n,sumodd1(n));
    printf("sumodd2(%d)=%d\n",n,sumodd2(n));
}

}
