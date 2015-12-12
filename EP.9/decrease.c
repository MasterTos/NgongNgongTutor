#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countNonDecreasingWithASCII(int num1, int num2) {
    int i, j, count = 0;
    char numInString[10];
    for(i = num1 ; i <= num2 ; i++) {
        int check = 1;
        ///itoa(i, numInString, 10);
        sprintf(numInString, "%d", i);
        for(j = 1 ; j < strlen(numInString) ; j++) {
            if(numInString[j-1] > numInString[j]) {
                check = 0;
                break;
            }
        }
        if(check)
            count++;
    }
    return count;
}

int countNonDecreasingWithModulo(int num1, int num2) {
    int i, j, count = 0;
    for(i = num1 ; i <= num2 ; i++) {
        int check = 1, num = i;
        int temp1 = num%10, temp2;
        num /= 10;
        while(num > 0) {
            temp2 = num%10;
            num /= 10;
            if(temp1 < temp2) {
                check = 0;
                break;
            }
            temp1 = temp2;
        }
        if(check)
            count++;
    }
    return count;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", countNonDecreasingWithASCII(num1,num2));
    printf("%d\n", countNonDecreasingWithModulo(num1,num2));

    return 0;
}
