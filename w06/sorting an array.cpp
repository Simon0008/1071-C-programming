#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void Sorting(int d[],int n){
int temp;
for(int i=0;i<=n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(d[j]>d[j+1]){
            temp=d[j];
            d[j]=d[j+1];
            d[j+1]=temp;
        }
    }
}
}
void prArray(int d[],int n){
     for(int i=0; i<n; i++){
        printf("%3d",d[i]);
     }
}


int main(){
int d[10]{34,78,12,9,87,66,88,99,56,11};
int n=10;
    printf("oringinal:");
    prArray(d,n);
    printf("\nsorting:");
    Sorting(d,n);
    prArray(d,n);

    return 0;
}
