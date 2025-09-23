import sys
import random
from enum import Enum
def play_rps() :
    class Choise(Enum):
        ROCK = 1
        PAPER = 2
        SCISSORS = 3

    playAgain = 1
    while(playAgain) :
            print("Welcome to Rock Paper Scissors game")
            print("")
            playerchoise  = input("Enter ......\n 1 for Rock\n 2 for Paper\n 3 for Scissors\n")
            playerchoise = int(playerchoise)
            if playerchoise < 1 or playerchoise >3:
                sys.exit("you musr enter a valid number")
            computerChoise  = random.choice("123")
            computerChoise = int(computerChoise)
            print("")
            print("you choise: " + str(Choise(playerchoise)).replace('Choise.' ,'') + ".")
            print("computer choise: " + str(Choise(computerChoise)).replace('Choise.' ,'')  + ".")
            print("")
            if playerchoise ==1 and computerChoise ==3:
                print("you win")
            elif playerchoise ==2 and computerChoise ==1:
                print("you win")
            elif playerchoise ==3 and computerChoise ==2:
                print("you win")
            elif playerchoise == computerChoise:
                print("draw")
            else:
                print("you lose")
            temp  = input("do you wanna play again \n yes : Y \n non  : N \n")
            if temp.lower() =="y" :
                playAgain =1
            elif temp.lower() =="n" :
                playAgain =0
                print("good bye !!")
            else :
                sys.exit("wrong choise")



