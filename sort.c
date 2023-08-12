#include <stdio.h>


int main() {
    int arr[]={30,25,54,23,3,9,100,170};
    int len = sizeof(arr)/sizeof(arr[0]);
    int swap=0;

    for(int i =0;i<len;i++){
       
		 for(int j=0;j<len;j++){
         
				 if(arr[j]>arr[j+1]){
            	
					swap=arr[j];
              		arr[j]=arr[j+1];
              		arr[j+1]=swap;
          			}
       			 }
    	}
    
   		 for(int k =0;k<len;k++){
        		printf("%d ",arr[k]);
   			 }

    return 0;
}


