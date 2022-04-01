/**
 * @file main.c
 * @author Anbarasi.A (e8me199@sairamtap.edu.in)
 * @brief This is the main program where the projecy is run
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
/* Start of the application */
/**
 * @brief Main program
 * 
 * @return int 
 */
int main()
{
    FILE *file;
    struct score
    {
        char name[30];
        int result;
    };
    struct score s;
    int n, ans, count, right, wrong;
    char ch, key;
    printf("\n\t# Welcome to the QUIZ GAME #");
    start:
    printf("\n\n 1. Start Quiz\n 2. Show Scoreboard\n 3. Quit\n\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:

       file = fopen("Quiz score.txt", "a"); // Opening file to store data
       do
       {
           count = 0;
           right = 0;
           wrong = 0;
       q1:
           printf("\n[1] I'm unstoppable..I'm a Porsche with no breaks..I'm invincible..Guess the Singer?\n (1) Missy Elliot\n (2) Sia\n (3) Jewel\n (4) Sophie B. Hawkins\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 2)
           {
               printf("\n\tCorrect!\n");
               right++; // Measuring number of correct answers
           }
           else if (ans == 1 || ans == 3 || ans == 4)
           {
               printf("\n\tWrong!\n\tRight answer: (2)\n");
               wrong++; // Measuring number of incorrect answers
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q1;
           }
           count++; // Measuring number of questions
      q2:
           printf("\n[2] You and I, I..Ridin' Harleys in Hawaii-i-i..Guess the Singer?\n (1) Diana Ross\n (2) Donna Summer\n (3) Katy Perry\n (4) Tina Turner\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 3)
           {
              printf("\n\tCorrect!\n");
              right++;
           }
           else if (ans == 1 || ans == 2 || ans == 4)
           {
              printf("\n\tWrong!\nRight answer: (3)\n");
              wrong++;
           }
           else
           {
              printf("\nYou entered invalid answer. Enter the answer again:\n");
              goto q2;
           }
           count++;
     q3:
           printf("\n[3] You watch me bleed until I can't breatheI'm shaking, falling onto my knees..And now that I'm without your..Guess the Singer?\n (1) Shawn Mendes\n (2) Billy Gilman\n (3) Elvis Presley\n (4) Jason Mraz\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 1)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 2 || ans == 3 || ans == 4)
           {
               printf("\n\tWrong!\nRight answer: (1)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q3;
           }
           count++;
     q4:
           printf("\n[4]'Cause the drinks bring back all the memories..And the memories bring back, memories bring back you Doo doo,..Guess the Composer?\n (1) Dion DiMucci\n (2) Adam Levine\n (3) Brian Wilson\n (4) Sam Cooke\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 2)
           {
               printf("\nCorrect!\n");
               right++;
           }
           else if (ans == 1 || ans == 3 || ans == 4)
           {
               printf("\nWrong!\nRight answer: (2)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q4;
           }
           count++;
     q5:
           printf("\n[5]Here's my dilemma One half of me wants you (oh)..Guess the Singer?\n (1) Ariana Grande\n (2) Selena Gomez\n (3) Lady Gaga\n (4) Jennifer Lopez\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 2)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 1 || ans == 2 || ans == 3)
           {
               printf("\n\tWrong!\nRight answer: (2)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q5;
           }
           count++;
     q6:
           printf("\n[6] I do the same thing I told you that I never would I told you I changed...Guess the Composer?\n (1) Andrea Bocelli\n (2) Justin Bieber\n (3) Avicii\n (4) Josh Groban\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 2)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 1 || ans == 2 || ans == 3)
           {
               printf("\n\tWrong!\nRight answer: (2)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q6;
           }
           count++;
     q7:
           printf("\n[7] Baby, I'm dancing in the dark with you between my arms Barefoot on the grass,..Guess the Singer?\n(1) Michael Buble\n (2) The Weeknd\n (3) Ed Sheeran\n (4) Harry Styles\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 3)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 1 || ans == 2 || ans == 4)
           {
               printf("\n\tWrong!\nRight answer: (3)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q7;
           }
           count++;
     q8:
           printf("\n[8] What band is said to have the most number 1 hits of all time?\n (1) The Beatles\n (2) Pink Floyd\n (3) The Who\n (4) Pearl Jam\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 1)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 4 || ans == 2 || ans == 3)
           {
               printf("\nWrong!\nRight answer: (1)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q8;
           }
           count++;
     

      q9:


           printf("\n[9] Which American pop star had back to back 2015 chart success with singles ‘Sorry’ and ‘Love Yourself’?\n (1) Lady Gaga\n (2) Jason Mraz\n (3) Justin Bieber\n (4) Adam Levine");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);
           if (ans == 3)
           {
               printf("\n\tCorrect!\n");
              right++;
           }
           else if (ans == 1 || ans == 2 || ans == 4)
           {
               printf("\nWrong!\nRight answer: (3)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q9;
           }
           count++;
     q10:
           printf("\n[10] With which Cuban-American singer did Shawn Mendes team up with on the track “Señorita”?\n (1)Camila Cabello\n (2) Missy Elliot\n (3) Sia\n (4) Selena Gomez\n");
           printf("\n\tYour Answer (1,2,3 or 4): ");
           scanf("%d", &ans);

           if (ans == 1)
           {
               printf("\n\tCorrect!\n");
               right++;
           }
           else if (ans == 1 || ans == 4 || ans == 3)
           {
               printf("\nWrong!\nRight answer: (1)\n");
               wrong++;
           }
           else
           {
               printf("\nYou entered invalid answer. Enter the answer again:\n");
               goto q10;
           }
           count++;

           printf("\n\tNumber of questions attempted: %d\n\tCorrect answers: %d\\n\tWrong answers: %d",
           count, right, wrong);

           printf("\nEnter your name: ");
           getchar();
           fgets(s.name,29,stdin);

           s.result = right;

           fprintf(file, "%s %d\n", s.name, s.result); // Storing name and score of user in file

           printf("***************************************");

           printf("\n\nReplay(y/n) ");
           scanf("%c", &key);

      } while (key == 'y');
      fclose(file);
      goto start;

   case 2:
       file = fopen("Quiz score.txt", "r"); // Opening file to read data

       printf("\n\t# Scoreboard #\n");

       while (fscanf(file, "%s %d", s.name, &s.result) != EOF)
           printf(" Name: %s, Score: %d\n", s.name, s.result);

           printf("***************************************");
       fclose(file);
       goto start;

   case 3:
       ;

   return 0;

   default:
       printf("You entered invalid key");
   }
}

