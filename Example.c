
#include <stdio.h>

int main() {
    // Write C code here
    char str[]="Hello World";
    char sym[]="World";
    int count=0;
    int sizeStr = sizeof(str)-1;
    printf("%d",sizeStr);
    int sizeSym = sizeof(sym)-1;
    for(int i =0;i<sizeStr;i++){
      
        for(int j=0;j<sizeSym;j++){
            printf("Str elemnt %c\n",str[i]);
            printf("Sym elemnt %c\n",sym[j]);
            if(str[i]==sym[j]&&str[i+1]==sym[j+1]){
                count+=1;
                j++;
            }
            printf("count is %d\n",count);
        }
    }
    if(count == sizeSym){
        printf("%s",sym);
    }else{printf("no");}

    return 0;
}
