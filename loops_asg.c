/*
        CSCI 1101
        
        Loop Assignment
        
        loops_asg.c

        Your assignment is to fill in the following functions 
        with loops that will output the given output!(Listed as 
        a comment at the end of the program)
         You may have to count up or count down or even nest the loops.
        Good Luck!
        By the way you need to do at least one:
        for(,,),
        while(),
        and do{}while()
        
        example.
        
        Do not do your work in main. Do it in the functions.

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h> //sqrt

//function prototypes
void loop_1(void);
void loop_2(void);
void loop_3(void);
void loop_4(void);
void loop_5(void);
void loop_6(void);
void loop_7(void);
void loop_8(void);


int main()
{	
//do not do your coding in main
    printf("Problem 1\n");
    loop_1();
    
    printf("Problem 2\n");
    loop_2();
    
    printf("Problem 3\n");
    loop_3();	
    
    printf("Problem 4\n");
    loop_4();
    
    printf("Problem 5\n");
    loop_5();
    
    printf("Problem 6\n");
    loop_6();
    
    printf("Problem 7\n");
    loop_7();
    
    printf("Problem 8\n");
    loop_8();

    system("pause");
	return EXIT_SUCCESS;
}

void loop_1(void)
{
  int i;

  i = 1; 

  while (i<=20)
  {
    printf("%4d", i);
    i++;
  }
 
  printf("\n\n"); 
}//loop_1

void loop_2(void)
{
  int i; 

  i = 100;

  do
  {
    printf("%4d", i );
    i = i - 5;
  } while (i>=5);
  
  
  printf("\n\n"); 
}



void loop_3(void)
{
  
  char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  for (int i = 0; i < sizeof letters; i++)
  {
    printf("%c ", letters[i]);
  }
  
  
  printf("\n\n");
}

void loop_4(void)
{
  char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  printf("\n\n");  
}

void loop_5(void)
{
  
    printf("\n\n"); 
}

void loop_6(void)
{
  


  printf("\n\n"); 
}

void loop_7(void)
{
  
	
  printf("\n\n"); 
}



void loop_8(void)
{
int i, j;

  for (i = 1; i <= 10; i++) // travel through the rows
  {
    
    for (j = 1; j <= 10; j++) //travel through the column
    {
      printf("%4d", j*i); // multiply i * j
    }
    printf("\n");
  }
  
  printf("\n\n");
}//loop_8




/*
    output
    
Problem 1
  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20

Problem 2
100 95 90 85 80 75 70 65 60 55 50 45 40 35 30 25 20 15 10  5

Problem 3
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

Problem 4
 Z X V T R P N L J H F D B

Problem 5
   1  4  9  16  25  36  49  64  81  100  121  144

Problem 6
    A1    A2    A3    A4    A5    A6    A7    A8    A9
    B1    B2    B3    B4    B5    B6    B7    B8    B9
    C1    C2    C3    C4    C5    C6    C7    C8    C9
    D1    D2    D3    D4    D5    D6    D7    D8    D9

Problem 7
 1
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5
 1  2  3  4  5  6
 1  2  3  4  5  6  7
 1  2  3  4  5  6  7  8
 1  2  3  4  5  6  7  8  9
 1  2  3  4  5  6  7  8  9 10
 1  2  3  4  5  6  7  8  9 10 11
 1  2  3  4  5  6  7  8  9 10 11 12
 1  2  3  4  5  6  7  8  9 10 11 12 13
 1  2  3  4  5  6  7  8  9 10 11 12 13 14
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19
 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20


Problem 8
   1   2   3   4   5   6   7   8   9  10
   2   4   6   8  10  12  14  16  18  20
   3   6   9  12  15  18  21  24  27  30
   4   8  12  16  20  24  28  32  36  40
   5  10  15  20  25  30  35  40  45  50
   6  12  18  24  30  36  42  48  54  60
   7  14  21  28  35  42  49  56  63  70
   8  16  24  32  40  48  56  64  72  80
   9  18  27  36  45  54  63  72  81  90
  10  20  30  40  50  60  70  80  90 100

*/


