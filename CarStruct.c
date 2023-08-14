
#include <stdio.h>
#include <stdlib.h>
//making a basic struct with some types:
typedef struct {
    int id;
    char name[30];
    char color[30];
    int data;
    float salary;
} Car;
//functions proto adding, editing,printing,changing salary
Car * add_car(int a);
void edit_car(int a,Car * d);
void print_cars(int a,Car *b);
void change_salary(Car *e);


int main() {
    int car_count=0;
    char options;
            printf(" \t Hello, welcome to program \n");
            printf("please say how many cars you want write: ");
             scanf("%d",&car_count);
             Car *x=add_car(car_count);
            while(options !='x'|| options !='X'){
                printf("what do you want to do?\n to edit press(E)\n to adding salary press(S)\n to print all press(P)\n to exit program press(X)  ?: ");
                scanf(" %c",&options);
                switch(options){
                    case 'E':
                    case 'e': edit_car(car_count,x);break;
                    case 'S':
                    case 's': change_salary(x);break;
                    case 'P':
                    case 'p': print_cars(car_count,x);break;
                    case 'x':
                    case 'X': return;
                    default: printf("sorry we dont have that command try another letter:");break;
                }

            }
    
        free(x);

    return 0;
}
void change_salary(Car *e){
    int id=0;
    float proc = 0;
    printf("please enter the ID of car: ");
    scanf("%d",&id);
    printf("please enter the % you want to add salary: ");
    scanf("%f",&proc);
        e[id-1].salary+= e[id-1].salary*proc/100;
    
}
void print_cars(int a,Car *b){
       for(int i=0;i<a;i++){
            printf("ID:%d \n",b[i].id);
            printf("name:%s \n",b[i].name);
            printf("color:%s \n",b[i].color);
            printf("data:%d \n",b[i].data);
            printf("salary: %.2f $ \n",b[i].salary);
            printf("\n");
        }
}
void edit_car(int a,Car * d){
    int count = a;
    Car *y= d;
    char option;
    printf("are you shure to change somthing ? Y or N : ");
        scanf(" %c",&option);
        if(option=='Y' || option == 'y'){
          
               for(int i=0;i<count;i++){
                    printf("ID:%d \n",y[i].id);
                    printf("name:%s \n",y[i].name);
                    printf("color:%s \n",y[i].color);
                    printf("data:%d \n",y[i].data);
                    printf("salary: %.2f $ \n",y[i].salary);
            printf("\n");
                 }
            int car_id=0;
            printf("here is all infomation, choose id of car : ");
            scanf("%d",&car_id);
            char mood;
            
                    printf("what you want to change? name(N),color(C),data(D) or salary(S) : ");
                    scanf(" %c",&mood);
                    switch(mood){
                        case 'N':
                        case 'n': printf("please enter the new name of car: ");
                                    scanf("%s",&y[car_id-1].name);
                                    break;
                        case 'C':
                        case 'c': printf("please enter the new color of car: ");
                                    scanf("%s",&y[car_id-1].color);
                                    break;
                        case 'D':
                        case 'd': printf("please enter the new data of car: ");
                                    scanf("%d",&y[car_id-1].data);
                                    break;
                        case 'S':
                        case 's': printf("please enter the new salary of car: ");
                                    scanf("%s",&y[car_id-1].salary);
                                    break;
                    }
        }
}
Car * add_car(int a){
       Car *s= calloc(a,sizeof(Car));
        for(int i=0;i<a;i++){
            printf("please enter the %d name of car: ",i+1);
            scanf("%s",&s[i].name);
            printf("please anter the color of %d car: ",i+1);
            scanf("%s",&s[i].color);
            printf("please anter the data  of %d car: ",i+1);
            scanf("%d",&s[i].data);
            printf("please anter the salary of %d car: ",i+1);
            scanf("%f",&s[i].salary);
            s[i].id=i+1;
            
        }
        return s;
}

