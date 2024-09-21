#include<stdio.h>
int main()
{ int num,i=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(i<=num){
    if(i%2!=0){
     printf("odd number: %d\n",i);
        int count=0;
         if(i>1){
        for(int j=2;j<=i;j++){
            
           if(i%j==0){
            count++;
       } 
      }
        if(count==1){
            printf("%d is also a prime number\n",i);
            }
        }
        }
        else{
          printf("even number: %d\n",i);
          if(i==2){
              printf("%d is also an even prime number\n",i);
          }
        }
         i++;
      }
      return 0;
}