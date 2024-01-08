#include <stdio.h>

int main() {
    int output1,output2,output3,output4,output5,output6,output7,output8,output9,output10;

int score1,score2,score3,score4,score5,score6,score7,score8,score9,score10;
int marks;
int first_entry;
char name[50];


printf(" WELCOME TO THE CODE GAMES:\n\n");

printf(" TO ENTER THE GAME PRESS '1':\n\n");
printf(" TO EXIT THE GAME PRESS '0'\n\n ");
scanf("%d",&first_entry);
if (first_entry == 1){
    printf(" \n\n ENTER YOUR NAME:");
    fgets(name,sizeof(name),stdin);
    
    printf(" \n\n LETS START WE C PROGRAM QUIZS :\n\n");
}

else if(first_entry == 0 ){
    printf(" THANKS FOR GIVING YOUR TIME\n\n");
    printf(" WE HOPE TO SEE YOU AGAIN...");
     return 0;
     
}
if ( first_entry == 1){
    
    printf(" 1.WHEN C LANGUAGE WAS INVENTED :  ");
    printf(" \n\n 1. RITCHIE , 1972 ");
    printf(" \n 2. BJARNE  STROUSTRUP , 1979 ");
    printf(" \n 3. JAMES GOSLING , 1995  ") ;
    printf(" \n 4. GUIDO  VAN  ROSSUM , 1991 ");
    printf(" \n\n ENTER YOUR ANSWER:");
    scanf("%d",&output1);
    
    
    
    if(output1 == 1){
        printf(" \n\n YOUR SCORED 5 MARKS.");
        score1 = 5;
    }
    else if (output1 == 2 || output1== 3 || output1 ==4){
        printf("\n\n YOUR SCORED 0 MARKS.");
        score1 = 0;
    }
    
    printf(" \n\n2. HOW MANY BYTES SPACE IS REQUIRED FOR DOUBLE DATA TYPE:");
         printf(" \n\n 1. 4 BYTES.");
         printf(" \n 2. 8 BYTES.");
         printf(" \n 3. 10 BYTES.");
         printf(" \n 4. 1 BYTES.");
    printf(" \n\n ENTER YOUR ANSWER:");
       scanf("%d",&output2);
       
       if(output2 == 3){
           printf(" \n\n YOU SCORED 5 MARKS.");
           score2 = 5;
       }
       else if ( output2 == 1 || output2 == 2 || output2 ==4){
        printf("\n\n YOUR SCORED 0 MARKS.");
        score2 = 0;
    }
    printf("\n\n 3.WHICH ONE IS NOT THE HEADER FILE : ");
    printf(" \n\n 1. <stdio.h> ");
    printf(" \n 2. int main>");
    printf(" \n 3. <stdmaths.h>");
    printf(" \n 4. <stdbool.h");
    printf(" \n\n ENTER YOUR ANSWER :");
    scanf("%d",&output3);
    
    if( output3 == 2){
        printf(" \n YOU SCORED 5 MARKS");
        score3 = 5;
    }
    else if(output3 == 1 || output3 ==3 || output3 == 4){
        printf(" YOU SCORED 0 MARKS.");
        score3 = 0;
    
    }
    
     printf("\n\n 4.  WHICH LOOP IS USE FOR REVERSE COUNTING FROM 10 TO 1 : ");
    printf(" \n\n 1. WHILE LOOP ");
    printf(" \n 2.  DO WHILE LOOP");
    printf(" \n 3.  FOR WHILE  LOOP");
    printf(" \n 4.  FOR  LOOP ");
    printf(" \n\n ENTER YOUR ANSWER :");
    scanf("%d",&output4);
    
    if( output4 == 4){
        printf(" \n YOU SCORED 5 MARKS");
        score4 = 5;
    }
    else if(output4 == 1 || output4 ==3 || output4 == 2){
        printf(" YOU SCORED 0 MARKS.");
        score4 = 0;
    
    }
     printf("\n\n 5.WHAT IS THE WORK OF '||' THIS SYMBOL  : ");
    printf(" \n\n 1. ADD TWO VARIABLE ");
    printf(" \n 2. OR ");
    printf(" \n 3. MULTIPLY");
    printf(" \n 4.  NOT EQUAL ");
    printf(" \n\n ENTER YOUR ANSWER :");
    scanf("%d",&output5);
    
    if( output5 == 2){
        printf(" \n YOU SCORED 5 MARKS");
        score5 = 5;
    }
    else if(output5 == 1 || output5 ==3 || output5 == 4){
        printf(" YOU SCORED 0 MARKS.");
        score5 = 0;
    
    }
    marks = score1 + score2 + score3 + score4 + score5 ;
    
    
    
    
    
}
printf(" \n\n TOTAL SCORED OF %s IS  %d.",name , marks );
printf(" \n\n THANKS FOR PLAYING CODE GAMES .");
printf(" \n\n WE HOPE  TO SEE YOU AGAIN...."); 
printf(" \n\n\n THE END ");





    return 0;
}