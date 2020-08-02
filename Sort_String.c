#include <stdio.h>
#include <stdlib.h>


int main()
{
  char str[20];
  gets(str);
  int i,j,m=strlen(str1);
  
  for(i=1;i<m;i++){
        for(j=0;j<m-1;j++){
            if(str1[j]>str1[j+1]){
                temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }
    
    
    return 0;
    

}
