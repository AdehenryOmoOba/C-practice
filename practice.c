#include<stdio.h>
// #include<conio.h>

int main(){

    // printf("%d\n", 5 | 6);

    int a,b,sum;

    scanf("Provide two numbers %d %d", &a, &b);

    sum = a + b;

    printf("Sum is: %d", sum);

}

//       2^3, 2^2, 2^1, 2^0
//        8,   4,   2,   1

// 5 =    0    1    0    1
// 6 =    0    1    1    0

// 5|6 =  0    1    1    1 = 7
// 5&6 =  0    1    0    0 = 4
// 5^6 =  0    0    1    1 = 3