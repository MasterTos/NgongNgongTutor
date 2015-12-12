#include <stdio.h>

int main() {
    char student[4][5] = {"1st","2nd","3rd","4th"};
    int data[4][7] = {  {80, 75, 90, 90, 90, 50, 60},
                        {70, 75, 90, 96, 40, 70, 65},
                        {75, 80, 80, 95, 40 ,65, 60},
                        {70, 60, 90, 85, 55, 60, 60} };

    /*int num1[1][7] = {{80, 75, 90, 90, 90, 50, 60}};
    int num2[1][7] = {{70, 75, 90, 96, 40, 70, 65}};
    int num3[1][7] = {{75, 80, 80, 95, 40 ,65, 60}};
    int num4[1][7] = {{70, 60, 90, 85, 55, 60, 60}};*/

    /*int data[4][7];
    data[0][0] = 80;
    data[0][1] = 75;
    data[0][2] = 90;
    data[0][3] = 90;
    data[0][4] = 90;
    data[0][5] = 50;
    data[0][6] = 60;

    data[1][0] = 70;
    data[1][1] = 75;
    data[1][2] = 90;
    data[1][3] = 96;
    data[1][4] = 40;
    data[1][5] = 70;
    data[1][6] = 65;

    data[2][0] = 75;
    data[2][1] = 80;
    data[2][2] = 80;
    data[2][3] = 95;
    data[2][4] = 40;
    data[2][5] = 65;
    data[2][6] = 60;

    data[3][0] = 70;
    data[3][1] = 60;
    data[3][2] = 90;
    data[3][3] = 85;
    data[3][4] = 55;
    data[3][5] = 60;
    data[3][6] = 60;*/

    int i, j, sum = 0;
    int sumPerYear[4] = {0};
    for(i = 0 ; i < 4 ; i++) {
        for(j = 0 ; j < 7 ; j++) {
            sumPerYear[i] += data[i][j];
            sum += sumPerYear[i];
        }
        printf("%s year student  %d\n", student[i], sumPerYear[i]);
    }
    printf("Total            %d\n",sum);

    return 0;
}
