#include <stdio.h>
#include<math.h>

int main(){
    int a,b,c ; 
	double x1,x2;
    printf("Enter a b c :");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c>=0){
       x1=(-b+sqrt(b*b-4*a*c))/2/a;
       x2=(-b-sqrt(b*b-4*a*c))/2/a;
        printf("For equation 2 x^2 -3 x + 1 =0, two roots are\n");
		printf("x1=%.1f\nx2=%.1f\n ", x1,x2);
      
	}
	else{
		printf("no real roots\n");
	}

}


/*
Enter a b c: 2 -3 1
For equation 2 x^2 -3 x + 1 =0, two roots are
x1 = 1.0
x2 = 0.5
*/
