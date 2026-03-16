#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    if(scamf("%d %d %c",&num1, &num2, &op) != 3){
        return 0;
    }

    if(op == '+'){
        printf("%d\n", num1 + num2);
    }else if(op == '-'){
        printf("%d\n", num1 - num2);
     }else if(op == '*'){
        printf("%d\n", num1 * num2);
    }else if(op == '/'){
        if(num2 != 0){
            printf("%d\n", num1 / num2);
        }
    }
    return 0;
}

