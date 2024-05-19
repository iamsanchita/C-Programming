#include<stdio.h>
int checkPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
        else return 1;
    }
}

int main(){
    int n;
    printf("\nenter a no :");
    scanf("%d",&n);
    checkPrime(n);
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
                if(checkPrime(i)==1 && checkPrime(j)==1){
                    if(i+j==n){
                    printf("%d + %d = %d\n",i,j,n);
                }
            }      
        }
    }
    return 0;
}
