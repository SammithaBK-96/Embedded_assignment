#include <stdio.h>
#include<string.h>
int memcopy(void *param_1,void *param_2,int size){
  char *src= (char*)param_2;
     char *des= (char*)param_1;
     int i=0;
     for(i=0;i<size;i++){
         des[i]=src[i];
     }
    
}

int main()
{
   char p[] = "source content copied to destination";
   char pp[100];
   memcopy(pp,p,strlen(p)+1);
  printf("New value : %s ",pp); 
    
}


//output
//source content copied to destination
