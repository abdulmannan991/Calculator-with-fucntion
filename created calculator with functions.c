#include <stdio.h>


int New_Function(int x, int y,char operations){
      switch(operations){
        case '+' :
        return x+y;
        
        case '-' :
        return x-y;
        
        case '*' :
        return x*y;
        
        case '/' :
         if(y!=0)
             return x/y;
         
        else{
            printf("Error ! division by zero");
            
            return 0;
        }
        default : 
        printf("You enter a valid argument kindly enter a valid argument");
         return 0;
    };
}


int main(){
    
int x ;
int y ;
char operations;

printf("Enter 1 number to perform operations :");
scanf("%d",&x);

printf("Enter 2 number to perform operations :");
scanf("%d",&y);

printf("Enter any 1 operator to perform task + , - ,* , /:");
scanf(" %c",&operations);

int result = New_Function(x,y,operations);

printf("The result of two numbers is :%d\n",result);


    return 0;
}
