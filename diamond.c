#include <stdio.h>

int main() {
     
		int len = 0;
        	printf("please enter the lenght of diamond ");
        	scanf("%d",&len);
        int himq=0;
        	himq=(len-1)/2;
      
        if(len%2!=0){
            for(int i=0;i<len;i++){
                for(int j=0;j<len;j++){
                      if((i==himq||j==himq)||(i+j>=himq && j-i<=himq && i<himq)||
								(i>himq && i-j<=himq && j<himq )||(j>himq && i > himq && j+i<=len+himq-1))
								{
                          			printf("* ");
                      			}else{
                          			printf("  ");
                      				}
                       
                	}
                        printf("\n");
        		}
        }else{
            return 0;
        }
        
        


    return 0;
}
