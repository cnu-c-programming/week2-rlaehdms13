#include <stdio.h>

int main()
{
    int num;
    int isPrime = 1;

    if(scanf("%d", &num) != 1) {
        return 0;
    }
    if(num <= 1){
        isPrime = 0;
    } else{
        for(int i = 2; i*i <= num; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime){
        printf("true\n");
    }else {
        printf("false\n");
    }

    return 0;
}

