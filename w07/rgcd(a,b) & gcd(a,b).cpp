#include <stdio.h>

int rgcd(int a,int b){
    if(a==0) return b;
    else
      return rgcd(b%a, a);
}
int gcd(int a,int b){
    int i,ans;
    while(i<=a){
        for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0)
                ans=i;
        }
    }
    return ans;
}

int main(){
    int a,b;
    printf("rgcd(%d,%d) = %d\n",48,126,rgcd(48,126));
    printf("gcd(%d,%d) = %d\n\n",48,126,gcd(48,126));
    printf("rgcd(%d,%d) = %d\n",48,128,rgcd(48,128));
    printf("gcd(%d,%d) = %d\n\n",48,128,gcd(48,128));
    printf("rgcd(%d,%d) = %d\n",48,144,rgcd(48,144));
    printf("gcd(%d,%d) = %d\n\n",48,144,gcd(48,144));
    printf("rgcd(%d,%d) = %d\n",48,48,rgcd(48,48));
    printf("gcd(%d,%d) = %d\n\n",48,48,gcd(48,48));
}
