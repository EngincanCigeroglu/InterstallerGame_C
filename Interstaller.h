#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float GuessNumber()
{
	int num, guess,enter;
	float zaman=0.00; 
	int tries = 0;
	srand(time(0)); 
    num = rand() % (10-1+1)+ 1; 
    
    printf("\n----------------------------------------------------------\n");
	printf("--Welcome to the XUNIA --\n\n");
	printf("--Welcome to the Guess My Number Game--\n\n");
	printf("-> Computer will select a number between 1 and 10.\n-> And You have to find it.\n");
	printf("-> Each guess is 6.85 YEARS in earth.\n");
    printf("\nFor begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
	printf("\n");

	if(enter != 0)
	{
		do
    	{
        	printf("Enter a guess between 1 and 10: ");
        	scanf("%d", &guess);
        	tries++;
        
        	if (guess > num)
        	{
            	printf("\nYour guess is higher than the number!!\n");
        	}
        	else if (guess < num)
        	{
            	printf("\nYour guess is lower than the number!!\n");
        	}
        	else
        	{
        		printf("------------------------------------------------------------------------------\n");
            	printf("\n-> Correct! You find the number..\n");
				printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
        	}
		
    	}while (guess != num);
    
    	zaman = tries*((float)60000/(float)8765);

		printf("-> Your passed time in earth is %.2f years\n",zaman);
		printf("\nGOODBYE\n");
		return zaman;
	}	
	printf("GOODBYE\n");
	return zaman;
}
 
float EvilGuessNumber()
{
	int num, guess,enter;
	float zaman=0.00; 
	int tries = 0;
	srand(time(0)); 
    num = rand() % (20-1+1)+ 1; 
    printf("\n----------------------------------------------------------\n");
	printf("--Welcome to the VERON X--\n\n");
	printf("--Welcome to the Evil Guess My Number Game--\n\n");
	printf("-> Computer will select a number between 1 and 20 and you have to find it..\n");
	printf("-> But computer helps to user 50 chance to wrong. So be careful...\n");
	printf("-> Each guess is 2.28 YEARS in earth.\n\n");
    printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
    printf("\n");
	
	if(enter != 0)
	{
		do
    	{
        	printf("Enter a guess between 1 and 20: ");
        	scanf("%d", &guess);
        	tries++;
        	int evil = rand() % (2-1+1)+1;
        	if(evil==1)
        	{
        	    if (guess > num)
        		{
            		printf("\nYour guess is higher than the number!!\n");
        		}
        		else if (guess < num)
        		{
            		printf("\nYour guess is lower than the number!!\n");
        		}
        		else
        		{
        			printf("------------------------------------------------------------------------------\n");
            		printf("\n-> Correct! You find the number ! \n");
        		}
			}
			if(evil==2)
        	{
        	    if (guess > num)
        		{
            		printf("\nYour guess is lower than the number!!\n");
        		}
        		else if (guess < num)
        		{
            		printf("\nYour guess is higher than the number!!\n");
        		}
        		else
        		{
        			printf("------------------------------------------------------------------------------\n");
            		printf("\n-> Correct! You find the number ! \n");
        		}
			}

    	}while (guess != num);
    
    	zaman = tries*((float)20000/(float)8765);
		printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
		printf("-> Your passed time in earth is %.2f years \n",zaman);
		printf("\nGOODBYE\n");

		return zaman;
	}	
	
	printf("GOODBYE\n");
	return zaman;
}


float CumulativeAddition()
{
	int num,guess,enter;
	float zaman=0.00;
    int toplam = 0;
	int tries = 0;
	srand(time(0)); 
   	num = rand() % (23-7+1)+7;

    printf("\n----------------------------------------------------------\n");
	printf("--Welcome to the GENOASIS--\n\n");
	printf("--Welcome to Cumulative Addition Game--\n\n");
	printf("-> Computer will select a number between 7 and 23.\n");
	printf("-> You have to reach the number only add 2,3 or 5.\n");
	printf("-> If you pass the number, game will start from the beginning and computer will select a different number.\n");
	printf("-> Each add is 136.9 YEARS in earth.\n\n");
	printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
	printf("\n");
	
	if(enter != 0)
	{
		do
		{
			if(toplam<num)
			{
				printf("Enter a number (2,3 or 5):");
        		scanf("%d", &guess);
        		if (guess == 3 || guess == 2 || guess == 5)
				{
					toplam = toplam + guess;
        			tries++;
        		}
        		else
				{
        			printf("\nYou Can Only Add 2 , 3 or 5\n");
        		}
        
        		if(toplam>num)
        		{
        			printf("\n-> Your sum is passed the number, your sum will be 0\n");
        			printf("-> (Computer's number changed)\n\n");
        			toplam = 0;
        			num = rand() % (23-7+1)+7;
        		}
			}
	
		}while(num != toplam);	
		
	printf("------------------------------------------------------------------------------\n");	
	printf("\n-> You find the number in %d tries !!!!\n",tries);
	printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
	zaman = tries*((float)1200000/(float)8765);
	printf("-> Your passed time in earth is %.2f years \n",zaman);
	printf("\nGOODBYE\n");

	return zaman;
	}

	printf("GOODBYE\n");
	return zaman;
	
}



int random1_6()
{  return ((rand() % 6) + 1);}

float DiceRoll()
{
	float zaman=0.00;
	int enter,user,comp,BOS;
    printf("\n----------------------------------------------------------\n");	
	printf("--Welcome to the JARVIS VX6--\n\n");
	printf("--Welcome to the Super Duper Master Dice Roll Championship--\n\n");
	printf("-> Winner will be the best of 3 dice roll match\n");
	printf("-> Each roll is 3.99 YEARS in earth.\n\n");
    printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
    printf("\n");

    static int roll,userpoint,comppoint,tries=0;
    int exit = 1;
    if(enter != 0)
    {
    	do
    	{
    		printf("For roll the dice enter 1:");
    		scanf("%d",&BOS);
    		srand(time(NULL));
    		user = random1_6();
			comp = random1_6();
		
			if(user>comp)
			{
				printf("User Rolled: %d ,Computer Rolled: %d , Winner is user\n\n",user,comp);
				roll++;
				userpoint++;
				tries++;
			}  
			else if(user==comp)
			{
				printf("User Rolled: %d ,Computer Rolled: %d , Draw\n\n",user,comp);
				tries++;
			}
    		else if(comp>user)
    		{
				printf("User Rolled: %d ,Computer Rolled: %d , Winner is computer\n\n",user,comp);
    			roll++;
    			comppoint++;
    			tries++;
			}
			
			if(roll==3)
			{
				if(userpoint>comppoint)
				{
					printf("------------------------------------------------------------------------------\n");
					printf("\n-> Bravo! You Won The Game..!\n");
					printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
					zaman = tries*((float)35000/(float)8765);
					printf("-> Your passed time in earth is %.2f years \n",zaman);
					printf("\nGOODBYE\n");
					exit = 0;
					return zaman;
				}
				else if(comppoint>userpoint)
				{
					printf("-> You Lost the Game..\n");
					printf("-> Game will start again\n\n");
					userpoint = 0;
					comppoint = 0;
					roll = 0;
				}
			}
    	}while(exit !=0);  	
    }
	printf("GOODBYE\n");     
	return zaman;
}

int random1_3()
{  return ((rand() % 3) + 1);}

float RPS()
{
	int enter,user,comp;
	float zaman=0.00;
    printf("\n----------------------------------------------------------\n");
	printf("--Welcome to the PANDORA--\n\n");
	printf("--Welcome to the Rock & Paper & Scissor (Roshambo) Game--\n\n");
	printf("-> Winner will be the best of 3 Roshambo match\n");
	printf("-> Each round is 11.40 YEARS in earth.\n\n");
    printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
    printf("\n");
    int exit=1;
    static int round,userpoint,comppoint,tries=0;
	
	if(enter==1)
	{
		do
		{
			printf("Rock:1 , Paper:2 , Scissor:3\nEnter a number:");
        	scanf("%d", &user);
        	if(user== 1 || user == 2 || user == 3)
        	{
        		srand(time(NULL));
        		comp = random1_3();    
				   		
				if(user == comp)
				{
					printf("User Selected: %d ,Computer Selected: %d , Draw\n\n",user,comp);
					tries++;
				}
        		else if(user == 1 && comp ==2)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , Computer Won\n\n",user,comp);
        			tries++;
    				round++;
    				comppoint++;         			
        		}
				else if(user == 1 && comp ==3)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , User Won\n\n",user,comp);
        			tries++;
					round++;
					userpoint++;
        		}
	        	else if(user == 2 && comp ==1)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , User Won\n\n",user,comp);
        			tries++;
 					round++;
					userpoint++;
        		}	
        		else if(user == 2 && comp ==3)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , Computer Won\n\n",user,comp);
        			tries++;
    				round++;
    				comppoint++;        			
        		}		
        		else if(user == 3 && comp ==1)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , Computer Won\n\n",user,comp);
        			tries++;
    				round++;
    				comppoint++;         			
        		}		
        		else if(user == 3 && comp ==2)
        		{
        			printf("User Selected: %d ,Computer Selected: %d , User Won\n\n",user,comp);
        			tries++;
					round++;
					userpoint++;        			
        		}
				
				if(round==3)
				{
					if(userpoint>comppoint)
					{
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Bravo! You Won The Game..!\n");
						printf("\n-------!!!!------THERE IS A LIFE ON THIS PLANET LIFE CODE IS : 1903------!!!!-------\n");
						zaman = tries*((float)100000/(float)8765);
						printf("\n-> Your passed time in earth is %.2f years \n\n",zaman);
						printf("------------------------------------\n");
						printf("-> If you don't have enough fuel to go earth, you can choose live in PANDORA..\n");
						printf("-> For choose to live in PANDORA write the life code to 'which planet do you want to go?' part.");
						printf("\nGOODBYE\n");
						return zaman;
						exit = 0;
					}
					else if(comppoint>userpoint)
					{
						printf("\n-> You Lost the Game..\n");
						printf("-> Game will start again\n\n");
						userpoint = 0;
						comppoint = 0;
						round = 0;
					}
				}		
			}
			else
			{
        		printf("\n!You Can Only Choose 1 , 2 and 3!\n");
       		}	
						
		}while(exit!=0);
	}
	printf("GOODBYE\n"); 
	return zaman;
}

int digitize_into_array(long long num, int arr[])
{
	int digit;
	int num_digits = 0;
	if(num!=0) {
		for(;num!=0;) {				
			digit = num % 10;
			arr[num_digits] = digit;
			num = num / 10;
			num_digits = num_digits + 1;
		}
	}
	else {
		arr[num_digits] = 0;
		num_digits = num_digits + 1;
	}
	return num_digits;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}


int CountDigit(long long m)
{
	int count = 0;	
	for(;m != 0;)
	{
		m /= 10;
		count += 1;
	}
    return count;
}

float BinaryDecimal()
{
	int enter,num,arrsize,temp,i,digit,answer;
	float zaman=0.00;
    printf("\n----------------------------------------------------------\n");	
	printf("--Welcome to the RENIA--\n\n");
	printf("--Binary Decimal / Decimal Binary Game--\n\n");
	printf("-> Computer will select a number between 0 and 255 and convert this number to the binary form\n");
	printf("-> Then computer will ask to user 3 times a random digit of binary value of that number\n");
    printf("-> If user enters wrong number for a digit, then program will select another random number and ask random digit.\n");
	printf("-> Each time user's answer will be counted as 1 hour in this planet\n");
	printf("-> Each answer is 34.22 YEARS in earth.\n\n");
	printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
    printf("\n");
	int numques = 1,exit= 1,exitdo=1; 
	long long NumBin;
    int numpoint = 0,tries = 0;
    if(enter != 0)
    {
    	do
    	{
    		exitdo = 1;
    		srand(time(NULL));
    		num= ((rand() % 255-0+1) + 0); 
    		printf("\nComputer selected number as %d \n",num);
    		NumBin = convertDecimalToBinary(num); 
    		arrsize = CountDigit(NumBin); 
    		int array[arrsize]; 
    		digitize_into_array(NumBin , array); 
				
    		for(i=0 ; i<(int)arrsize/2 ; i++)
			{
				temp = array[i];      
				array[i] = array[arrsize-(i+1)];	
				array[arrsize-(i+1)] = temp;
			}	
			
			do
			{
				srand(time(NULL));
				digit = ((rand() % arrsize-1+1) + 1);
				printf("What is the digit %d (question %d / 3) :",digit,numques);
				scanf("%d",&answer);
				tries++;
				
				if(answer==array[digit-1])
				{
					printf("\nCorrect answer!\n");
					numpoint++;
					numques++;
				}
				else if(answer!=array[digit-1])
				{
					printf("\n-> False answer! \n-> Game will start again..\n");
					numpoint = 0;
					numques = 0;
					exitdo = 0;
				}
				
				if(numpoint==3)
				{
					printf("------------------------------------------------------------------------------\n");
					printf("\n-> Correct! You finished the game with %d tries !!!!\n",tries);
					zaman = tries*((float)300000/(float)8765);
					printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
					printf("-> Your passed time in earth is %.2f years \n",zaman);
					printf("\nGOODBYE\n");
					return zaman;					
					exitdo=0;
					exit=0;
				}
			
			}while(exitdo != 0);
    			
    	}while(exit != 0);
    }
    
    printf("GOODBYE\n");
	return zaman;
}
    
int random1_30()
{
	return ((rand() % 21) + 10);
}

float FastMulp()
{
    printf("\n----------------------------------------------------------\n");
	int enter,usernum,num1,num2,seconds;
	float zaman=0.00;
	printf("--Welcome to the LUTHEA--\n\n");
	printf("--Welcome to the Fast Multiplier Game--\n\n");
	printf("-> Computer will generate 2 number between 10 and 30, then ask user to multiplication of these 2 numbers.\n");
	printf("-> A timer will start when the question asked and it will stop when the user answered the question.\n");
	printf("-> If the answer is true, program will take the duration as seconds\n"); 
	printf("-> If the answer is false, program will ask another question and take the duration as seconds\n"); 
	printf("-> Each second in this planet is 1 hour again in this planet\n");
	printf("-> Each second is 10.26 YEARS in earth.\n\n");
	printf("For begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
    scanf("%d", &enter);
    printf("\n");
    double time_sum = 0;
    int exit = 1;
    if(enter != 0)
    {
    	do
    	{    	
			srand(time(NULL));    	
    		num1 = random1_30();
			num2 = random1_30();
			
			clock_t t;
			t = clock(); 
			
			printf("%d x %d :",num1,num2);
			scanf("%d",&usernum);
			
			t = clock() - t; 
    		double time_taken = ((double)t)/CLOCKS_PER_SEC;
    		
    		time_sum = time_sum + time_taken;
			
			if(num1*num2 == usernum)
			{
				printf("------------------------------------------------------------------------------\n");
				printf("\n-> Correct! You find the number!!\n");
				printf("-> *** THERE IS NO LIFE ON THIS PLANET ***\n");
				printf("-> You spent %f seconds in this game\n",time_sum);
				zaman = time_sum*(90000/8765);
				printf("-> Your passed time in earth is %.2f years \n",zaman);
				exit = 0;
			}
			else
			{
				printf("-> Your answer is false.\n");
			}
				printf("\n");
			

    	}while(exit != 0);	
    }
	printf("GOODBYE\n");
	return zaman;
}  

int planettoplanet(int a,int b)
{
	return abs(a-b);
}

