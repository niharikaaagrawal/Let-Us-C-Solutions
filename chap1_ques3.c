#include<stdio.h>

int main(){
	
    int num, width=841, height=1189, temp;
    
     for(num=0;num<9;num++){
     	
         printf("\n A%d: %d x %d", num, width, height);
         
         temp = height;
         height = width;
         width = temp/2;
        
     }
     
     return (0);
}
