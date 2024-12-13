#include<stdio.h>
#include<stdlib.h>
void main(){
    int buffer[10],bufsize,in,out,produce,consume,choice=0;
    in=0;
    out=0;
    bufsize=10;
    while(choice!=3){
        printf("\n 1.Produce 2.Consume 3.Exit \n");
        printf(" Enter your choice \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if((in+1)%bufsize==out){
                printf("\n Buffer is full ");
            }
            else{
                printf("\n Enter the product \n");
                scanf("%d",&produce);
                buffer[in]=produce;
                in=(in+1)%bufsize;
            break;
            }

        case 2:
            if(in==out){
                printf("Buffer if empty");
            }
            else{
                consume=buffer[out];
                printf("\n THe consumed product is %d \n ",consume);
                out=(out+1)%bufsize;
            break;
            }
    
      
        }
    }
}