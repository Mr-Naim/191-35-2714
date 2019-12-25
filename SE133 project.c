#include<stdio.h>
#include<stdlib.h>
void quiz1 ();
void quiz2 ();

int main ()
{
int ch,n;
    printf("\t\t\t\t\t\tTHE QUIZ GAME");
printf("\n\n\n\t Welcome to the game\n");
printf("\t---------------------\n");
printf("\t*#How many time do you want to play the game?\n");
scanf("%d",&n);
while (n!=0){
    printf("\tEnter your option according to the menu:\n\n");
    printf("1.\tQuiz on world cup\n");
    printf("2.\tQuiz on Football\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:quiz1();
        break;

        case 2:quiz2();
        break;

        default :printf("Wrong option");
        break;
    }

     n--;
}
printf("______________________________________");
printf("WELL PLAYED______________________________\n\n\tTHANKS FOR PLAYING");
getch();
return 0;
}
void quiz1 ()
{
    int option[3];
    printf("This quiz will consist of 4 questions\n");

    printf("Question 1:\nThe champion of icc world cup 2018 was?\n");
    printf("1.India\t\t2.Bangladesh\n3.Australia\t4.England\n");
    scanf("%d",&option[0]);
    if (option [0]==4) {
        printf("CORRECT ANSWER!!\n");
    }
    else


        printf("Sorry incorrect answer\nCorrect ans : 4\n");



    printf("Question 2:\nBangladesh has __ trophy in world cup\n");
    printf("1.0\t2.1\n3.2\t4.3\n");
    scanf("%d",&option[1]);
    if (option[1]==1){
        printf("CORRECT ANSWER!!\n");
    }
    else {
        printf("Sorry\nCorrect ans : 1\n");
    }
        printf("Question 3:Who is The number one batsman according to icc ranking?\n");
    printf("1.Sir Liton Das\t2.Imrul bro\n3.Virat Kholi\t4.David Warner\n");
    scanf("%d",&option[2]);
    if (option[2]==3){
        printf("CORRECT ANSWER!!\n");
    }
    else{
        printf("Sorry\nCorrect ans : 3\n");
    }
        printf("Question 4:Who is the number one all rounder?\n");
    printf("1.Ravindra Jadeja\t2.Sunil Narain\n3.Shakib al Hasan\t4.Andre Russle\n");
    scanf("%d",&option[3]);
    if (option[3]==3){
        printf("CORRECT ANSWER!!\n");
    }
    else{
       printf("Sorry\nCorrect ans : 3\n");
    }
}

    void quiz2()
    {
    int option[3];
    printf("This quiz will consist of 4 questions\n");

    printf("Question 1:\nBrazil have won the world cup __?\n");
    printf("1.2 time\t2.3 time\n3.4 time\t4.5 time\n");
    scanf("%d",&option[0]);
    if (option [0]==4) {
        printf("CORRECT ANSWER!!\n");
    }
    else


        printf("Sorry incorrect answer\nCorrect ans is 4\n");



    printf("Question 2:\nWhen will Bangladesh play Fifa World Cup?\n");
    printf("1.After my death\t2.2022\n3.2026\t\t\t4.2030\n");
    scanf("%d",&option[1]);
    if (option[1]==1){
        printf("CORRECT ANSWER!!\n");
    }
    else {
        printf("Sorry\nCorrect ans is 1\n");
    }
        printf("Question 3:2022 world cup will held in __?\n");
    printf("1.Noakhali\t2.Somalia\n3.Bangladesh\t4.Qatar\n");
    scanf("%d",&option[2]);
    if (option[2]==4){
        printf("CORRECT ANSWER!!\n");
    }
    else{
        printf("Sorry\nCorrect ans is 4\n");
    }
        printf("Question 4:Who will won the 2022 World Cup?\n");
    printf("1.Argentina\t2.Brazil\n3.England\t4.France\n");
    scanf("%d",&option[3]);
    if (option[3]==1){
        printf("CORRECT ANSWER!!\n");
    }
    else{
       printf("Sorry\nCorrect ans is 1\n");
    }



}
