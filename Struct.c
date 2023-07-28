
#include <stdio.h>
#include <stdlib.h>
typedef struct Cars Cars;
struct Cars{
    char name[15];
    char color[15];
    int salary;
};
int main() {
    // Write C code here
int cars = 0;
printf("plese enter the count of cars ");
scanf("%d",&cars);
Cars* cars_ptr = (Cars*)malloc(cars,sizeof(Cars));
if(cars_ptr != NULL){
    for(int i=0;i<cars;i++){
      
        printf("please enter the %d car name ",i+1);
        scanf("%s",&cars_ptr[i].name);
        printf("please enter the %d car color ",i+1);
        scanf("%s",&cars_ptr[i].color);
         printf("please enter the %d car salary ",i+1);
        scanf("%d",&cars_ptr[i].salary);
    }
  char option='\0';
    printf("do you want change some info?? N or Y ");
    scanf(" %c",&option);
    switch(option){
        case 'n':
        case 'N':
        case 'q':
        case 'Q': break;
        case 'y':
        case 'Y':printf("please enter the which car you want (number) ");
                    int num;
                    scanf("%d",&num);
                        printf("your car is \n Name: %s\n Color: %s\n Salary: %d\n",&cars_ptr[num-1].name,&cars_ptr[num-1].color,&cars_ptr[num-1].salary);
                        printf("please enter the  car new name ");
                        scanf("%s",&cars_ptr[num-1].name);
                        printf("please enter the  car new color ");
                        scanf("%s",&cars_ptr[num-1].color);
                        printf("please enter the  car new salary ");
                        scanf("%d",&cars_ptr[num-1].salary);
                        break;
                   
                    
        default: printf("you tiped another letter so im continue by default \n");
    }
    
     for(int i=0;i<cars;i++){
      
        printf("the %d car name is %s \n",i+1,&cars_ptr[i].name);
        printf("the %d car color is %s \n",i+1,&cars_ptr[i].color);
          printf("the %d car salary is %d \n",i+1,&cars_ptr[i].salary);
     
    }
}
    
    
    

    return 0;
}
