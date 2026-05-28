#include<stdio.h>
intmain(){
int n , flag=1,i;

printf("Enter the number pf terms :");
scanf("%d",&n);

if(n <= 1) {
        flag = 0;
    }

    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}
