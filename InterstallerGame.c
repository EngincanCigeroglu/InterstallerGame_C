#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Interstaller.h"

int main()
{
	printf("\n--------WELCOME TO THE INTERSTALLER GAME----------\n");
	printf("\n-> In 2019 Earth is ruins and there are sand storms everywhere.\n");
	printf("-> Nothing grows, so humanity is lack of food.\n");
	printf("-> So we built a space ship with our last resources, and decided to send you to space.\n");
	printf("-> You will search for the life code on 7 planets and try to save our world.\n");
	printf("-> You will face with different challenges on each planet.\n");
	printf("-> GOOD LUCK!...\n");
	printf("\n--------------------------------------------------\n");
	int enter,code,planet,fuel=1500,p0=0,p1=30,p2=210,p3=270,p4=720,p5=610,p6=580,p7=790,e=0;
	static int locationfirst=0,location,locationfinal;
	int key=1903;
	int exitgame = 0;
	float time=0.00;
	printf("\nFor begin the game press '1'\n");
	printf("For exit the game press '0'\n");
	printf("Enter:");
	scanf("%d", &enter);
	printf("\n");
	
	if(enter != 0)
	{
		printf("\n-> You are on Earth right now!\n");
		printf("\nList of planets and how far from the earth:\n");
		printf("1- XUNIA -> 30 Light Year\n");
		printf("2- VERON X -> 210 Light Year\n");
		printf("3- GENOASIS -> 270 Light Year\n");
		printf("4- JARVIS VX6 -> 720 Light Year\n");
		printf("5- PANDORA -> 610 Light Year\n");
		printf("6- RENIA  -> 580 Light Year\n");
		printf("7- LUTHEA -> 790 Light Year\n");
		
		do
		{	
			printf("\n-> You have fuel enough to go %d light year distance\n",fuel);
			printf("\nWhich Planet do you want to go?\n");
			printf("Planet:");
			scanf("%d",&planet);
				
			location = planet;
			
			if(location==0)
			{
				locationfinal=p0;	
			}
			else if(location==1)
			{
				locationfinal=p1;				
			}
			else if(location==2)
			{
				locationfinal=p2;
			}
			else if(location==3)
			{
				locationfinal=p3;
			}
			else if(location==4)
			{
				locationfinal=p4;
			}
			else if(location==5)
			{
				locationfinal=p5;
			}				
			else if(location==6)
			{
				locationfinal=p6;
			}			
			else if(location==7)
			{
				locationfinal=p7;
			}
			else if(location==1903)
			{
				locationfinal==p5;
			}
			
			fuel -= planettoplanet(locationfirst,locationfinal);

			if(fuel>=0)
			{
				if(planet==0 || planet==1 || planet==2 || planet==3 || planet==4 || planet==5 || planet==6 || planet==7 || planet==1903) 
				{
					if(fuel>=0 && planet==0 )
					{
						locationfirst = p0;
						printf("------------------------------------------------------------------------------\n");
						printf("\n-----------WELCOME TO EARTH-----------\n");
						if(time>919)
						{
							printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
							printf("\n******** I'm sorry everyone is DEAD in 2938 :( ********\n\n");
							printf("-> If you COULD NOT FIND the life code yet keep searching it.\n");
							printf("-> If you FOUND the life code -> write it down to the 'which planet do you want to go?' part.\n");

							printf("\nList of planets and how far from the earth:\n");
							printf("1- XUNIA -> 30 Light Year\n");
							printf("2- VERON X -> 210 Light Year\n");
							printf("3- GENOASIS -> 270 Light Year\n");
							printf("4- JARVIS VX6 -> 720 Light Year\n");
							printf("5- PANDORA -> 610 Light Year\n");
							printf("6- RENIA  -> 580 Light Year\n");
							printf("7- LUTHEA -> 790 Light Year\n");							
														
						}
						else
						{
							printf("\nHumankind: What did you find for us ?\n");
							printf("\n-If you found the life code write it-\n-If you did not find it yet enter 0-\n");
							printf("Code:");
							scanf("%d",&code);
							
							if(code == key)
							{
								printf("\n----!!!!!! EXCELLENT YOU SAVE THE EARTH !!!!!!-----\n");
								exitgame=1903;
							}
							else
							{
								printf("\nList of planets and how far from the earth:\n");
								printf("1- XUNIA -> 30 Light Year\n");
								printf("2- VERON X -> 210 Light Year\n");
								printf("3- GENOASIS -> 270 Light Year\n");
								printf("4- JARVIS VX6 -> 720 Light Year\n");
								printf("5- PANDORA -> 610 Light Year\n");
								printf("6- RENIA  -> 580 Light Year\n");
								printf("7- LUTHEA -> 790 Light Year\n");	
							}							
						}
					}
					else if(planet==1)
					{
						locationfirst = p1;
						time = time + GuessNumber();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the XUNIA:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p1,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p1,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p1,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p1,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p1,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p1,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p1,p7));
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p1,p0));
					
					}
					else if(planet==2)
					{
						locationfirst = p2;
						time = time + EvilGuessNumber();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the VERON X:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p2,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p2,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p2,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p2,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p2,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p2,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p2,p7));
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p2,p0));
				
					}							
					else if(planet==3)
					{
						locationfirst = p3;
						time = time + CumulativeAddition();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the GENOASIS:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p3,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p3,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p3,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p3,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p3,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p3,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p3,p7));	
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p3,p0));		
					}			
					else if(planet==4)
					{
						locationfirst = p4;
						time = time + DiceRoll();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the JARVIS VX6:\n");
						printf("0- XUNIA -> %d Light Year\n",planettoplanet(p4,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p4,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p4,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p4,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p4,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p4,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p4,p7));	
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p4,p0));
					}			
					else if(planet==5)
					{
						locationfirst = p5;
						time = time + RPS();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the PANDORA:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p5,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p5,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p5,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p5,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p5,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p5,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p5,p7));	
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p5,p0));	
					}			
					else if(planet==6)
					{
						locationfirst = p6;
						time = time + BinaryDecimal();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the RENIA:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p6,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p6,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p6,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p6,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p6,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p6,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p6,p7));
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p6,p0));
					}			
					else if(planet==7)
					{
						locationfirst = p7;
						time = time + FastMulp();
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
						printf("\nList of planets and how far from the LUTHEA:\n");
						printf("1- XUNIA -> %d Light Year\n",planettoplanet(p7,p1));
						printf("2- VERON X -> %d Light Year\n",planettoplanet(p7,p2));
						printf("3- GENOASIS -> %d Light Year\n",planettoplanet(p7,p3));
						printf("4- JARVIS VX6 -> %d Light Year\n",planettoplanet(p7,p4));
						printf("5- PANDORA -> %d Light Year\n",planettoplanet(p7,p5));
						printf("6- RENIA  -> %d Light Year\n",planettoplanet(p7,p6));
						printf("7- LUTHEA -> %d Light Year\n",planettoplanet(p7,p7));
						printf("0- EARTH -> %d Light Year\n",planettoplanet(p7,p0));		
					}
					else if(planet == 1903)
					{
						printf("------------------------------------------------------------------------------\n");
						printf("\n-> You came back to the PANDORA.\n-> You lived your life in this planet with nice coctails and exotic outer space fruits");
						exitgame=1903;
					}			
				}
				else
				{
					printf("\n!Please input a correct planet!\n");
				}
			}
			else
			{
				printf("\n------------------------------------------------------------------------------");
				printf("\n-> You spent all of your fuel.\n-> You could not reach where you want.\n-> You lost in space and died with suffering.");
				exitgame=1903;
		 	}

		}while(exitgame!=1903);
		printf("\n-> Your TOTAL passed time in earth is %.2f years\n",time);
		printf("\n ---------------THANKS FOR PLAY--------------- ");
	}
	printf("\n-------------------GOODBYE!---------------------\n");
}

