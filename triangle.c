#include <stdio.h>
int main(){
	int len = 0;
	printf("please enter the lenght of triangle ");
	scanf("%d",&len);
	/* upside triangle
			for(int i = 0; i<len;i++){
					printf("* ");
						for(int j=1;j<len-i;j++){
								printf("* ");
							}
					printf("\n");
				}
	*/
	// Left side triangle
	/*
			for(int i =0;i<len;i++){
	
					printf("* ");
						for(int j=0;j<=i-1;j++){
							printf("* ");
							}
					printf("\n");
	
				}
	*/
	// another left side
	/*
			for(int i=0;i<len;i++){
					for(int j=0;j<len;j++){
						if(j<=i){
							printf("* ");
						}	
					}
				printf("\n");
				}	
*/
//upside down triangle center
 	
		int himq=0;
			if(len%2!=0){
				himq=(len-1)/2;
		 			for(int i=0;i<himq+1;i++){
                			for(int j=0;j<len;j++){
                        		if(j<i||j+i>=len){
                                	printf("  ");
                        		}else{
                            		printf("* ");
									}

								}
		               		printf("\n");         
                		}
					}

			
	}
