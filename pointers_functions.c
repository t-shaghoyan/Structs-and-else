
#include <stdio.h>

        void math_square(int a,int *reg,int *r);
        //void math_twice(int b,int *r);
int main() {
    int num=0;
    int square=0;
    int twice=0;
    printf("please enter the number: ");
    scanf("%d",&num);
        math_square(num,&square,&twice);
        //math_twice(num,&twice);
        printf("square is : %d\n",square);
        printf("twice is : %d\n",twice);
        printf("num is : %d\n",num);

    return 0;
}
        void math_square(int a,int *reg,int * r){
            *reg=a*a;
            math_twice(a,r);
        }
        void math_twice(int b,int *r){
            *r=b+b;
        }
