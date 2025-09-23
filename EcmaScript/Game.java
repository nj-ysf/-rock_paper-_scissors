 import java.util.Scanner;
 public class Game {
    public static void main(String[] args) {
        String playAgain  ;
        Scanner sc = new Scanner(System.in);
        do{
        
        String  player1  ;
        String  player2  ;
        System.out.println("welcome to the game");
        System.out.println("enter player 1 name  : \n");
        player1 = sc.nextLine();
        System.out.println("enter player 2 name : \n");
        player2 = sc.nextLine();
        System.out.println("let's start the game");
        System.out.println(player1 + " vs " + player2);
        System.out.println("the game well be played in 3 rounds");
        System.out.println("each palyer must choise rock, paper or scissors");
        System.out.println("rock beats scissors, scissors beat paper and paper beats rock");
        System.out.println("1 : rock \n 2 : paper \n 3 : scissors");
        int player1_Score=0;
        int player2_Score=0;
       


        for(int i =0 ; i<=3 ; i++){
        System.out.println("round " + (i+1));
        System.out.println(player1 + " choise : " );
        int player1_choise = sc.nextInt();
        System.out.println(player2 + " choise : ");
        int player2_choise = sc.nextInt();
        if(player1_choise == player2_choise){
            System.out.println("it's a tie");
        }else if (player1_choise == 1 && player2_choise == 3){
            System.out.println(player1 + " wins this round");
            player1_Score++;

        }
        else if (player1_choise == 2 && player2_choise == 1){
            System.out.println(player1 + " wins this round");
            player1_Score++;

        }
        else if (player1_choise == 3 && player2_choise == 2){
            System.out.println(player1 + " wins this round");
            player1_Score++;

        }
        else {
            System.out.println(player2 + " wins this round");
            player2_Score++;
        }



    }
    System.out.println("and the final score is : ");
    System.out.println(player1 + " : " + player1_Score);

    if(player1_Score > player2_Score){
        System.out.println(player1 + " wins the game");
    }else if(player1_Score < player2_Score){
        System.out.println(player2 + " wins the game");
    }else{System.out.println("it's a tie game") ;}

    




    System.out.println("do you want to play again ? (yes/no)");
     playAgain  = sc.nextLine().toLowerCase() ;
     if(!playAgain.equals("yes") && !playAgain.equals("no")){
        do{
            System.out.println("please enter yes or no");
            playAgain  = sc.nextLine().toLowerCase() ;
        }while(!playAgain.equals("yes") && !playAgain.equals("no"));
     }
    




            
        }while(playAgain.equals("yes") ); 

        System.out.println("thank you for playing");
        sc.close();

                  

       
    }
}
    
       
    



