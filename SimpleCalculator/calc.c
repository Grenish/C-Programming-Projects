#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Simple C Calculator\n");

    printf("Enter The Sum: \n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch (operator)
    {
    case '/': answer = valueOne/valueTwo; 
        break;

    case '+': answer = valueOne + valueTwo;
        break;

    case '-': answer = valueOne - valueTwo;
        break;

    case '*': answer = valueOne*valueTwo;
        break;

    case '^': answer = pow(valueOne, valueTwo);
        break;
    
    default: goto fail;
    }

    printf("%.9g%c%.9g = %.9g\n\n", valueOne, operator, valueTwo, answer);
    goto exit;
    fail:
        printf("Fail.\n");
    exit:
        return 0;
}