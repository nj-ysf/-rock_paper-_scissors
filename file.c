#include <stdio.h>

#include <stdlib.h>
#include <string.h>

#include <unistd.h>


enum {
    dead = 0,
    alive = 1
};

// donner une explacation genirale sur idee de jeu

// idee de base : une matrice 2D avec des cellules vivantes et mortes 
void print_matrix(char *m, const int ml, const int mc)
{
	for(int i = 0; i < mc+2; i++)
		printf("--");
	printf("\n");
	for(int i = 0; i < ml; i++)
	{
		printf("| ");
		for(int j = 0; j < mc; j++)
		{
			if(*(m+i*mc+j))
			{
				printf("\033[105m  \033[0m");
				//printf("\033[105m \033[0m ");
			}
			else
			{
				printf("  ");
			}
		}
		printf(" |\n");
	}
	for(int i = 0; i < mc+2; i++)
		printf("--");
	printf("\n");
}


char update_cell(char * m  , const int ipos  , const int jpos , const int ml  , const int mc  ){
    int nb = 0 ;
    int i  , j ; 
    for(i = ipos -1  ;i<=ipos +1 ; i++){
        if(i>=0 && i<ml){
            for(j = jpos -1  ;j<=jpos +1 ; j++){
                if(j>=0 && j<mc){
                    if(!(i==ipos && j==jpos)){
                        if(*(m + i*mc + j) == alive){
                            nb++ ;
                        }
                    }
                }
            }
        }


    }
    if(*(m + ipos*mc + jpos) == alive){
        if(nb < 2 || nb > 3){
            return alive ;
        }else{
            return dead ;
        }
}else
    {
        if(nb == 3){
            return alive ;
        }else{
            return dead ;
        }
    }

}











void intail_matrix(char  * m  , const int ml  , const int mc){
    // initialiser la matrice avec des cellules vivantes et mortes aleatoirement
    for(int i = 0 ; i<ml ; i++){
        for(int j =0  ; j<mc ; j++){
            *(m + i*mc + j) = dead ;
        }
    }

}
void change_random_dead_to_alive(char * m  , const int ml  , const int mc){
    // changer une cellule morte en cellule vivante aleatoirement
    int i = rand()%ml ;
    int j = rand()%mc ;
    *(m + i*mc + j) = alive ;
}
void updateV1(char * m  , char * bis  , const int ml , const int mc){
    for(int i = 0 ; i <ml  ; i++){
        for(int j =0  ; j<mc ; j++ ){
            *(bis + i*mc + j) = update_cell(m , i ,j , ml , mc) ;

        }
    }
    for(int i = 0 ; i <ml  ; i++){
        for(int j =0  ; j<mc ; j++ ){
            *(m + i*mc + j) = *(bis + i*mc + j) ;

        }
    }

}
















// Pour sleep sur Windows, utilisez <unistd.h> pour Linux

// void print_matrix(char *m, int ml, int mc) {
//     // Bordure supérieure
//     for(int i = 0; i < mc + 2; i++) {
//         printf("--");
//     }
//     printf("\n");
    
//     // Contenu de la matrice
//     for (int i = 0; i < ml; i++) {
//         printf("| ");
//         for (int j = 0; j < mc; j++) {
//             if(*(m + i*mc + j)== alive) {
//                 printf("\033[105m O \033[0m");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("|\n");
//     }
    
//     // Bordure inférieure
//     for(int i = 0; i < mc + 2; i++) {
//         printf("---");
//     }
//     printf("\n");
// }

//
// char update_cell(char *m , const int i , const int j   ,  const int ml  , cont int mc){
    

// }
//une fonction pour mettre a jour la matrice
// void update(char * m , char * bis  , const int ml  , const int mc){
//     for(int i = 0 ; i<ml ; i++){
//         for(int j =0  ; j<mc ; j++){
//             bis[i][j] = update_cell(m , i , j );



//         }
//     }
//     for(int i = 0 ; i<ml ; i++){
//         for(int j =0  ; j<mc ; j++){
//             m[i][j] = bis[i][j];
//         }}

// }


void set_matrix(char *m, const int mml, const int mmc, int ybeg, int xbeg, char *s, const int ml, const int mc)
{
	for(int i = ybeg; i < ybeg+ml; i++)
	{
		for(int j = xbeg; j < xbeg+mc; j++)
		{
			*(m + i * mmc + j) = *(s + (i-ybeg) * mc + (j-xbeg));
		}
	}
}



int main() {
    const int ml  = 40 ;
    const int mc = 80 ;
    

    char mmat[ml][mc]  ;
    intail_matrix((char *)mmat , ml , mc);
    char bis[ml][mc]  ;
    intail_matrix((char *)bis , ml , mc);
    // intail_matrix((char *)bis , ml , mc);
    char s[20][20] = {
        // configartion plus fort 

        
    } ;

    	char set[9][36] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};
    // set_matrix((char *)mmat , ml , mc , (char *)s , 3 , 10 , 10) ;

    set_matrix((char *)mmat , ml , mc , 10 , 10 , (char *)set , 9 , 36) ;

    print_matrix((char *)mmat, ml, mc);


    
    while(1){
        //mettre a jour la matrice  

        sleep(0.1);
        system("clear");
        updateV1((char *)mmat , (char *)bis , ml , mc);
         
        // update((char *)mmat , (char *)bis , ml , mc);
        print_matrix((char *)mmat, ml, mc);
        

    }
    return 0;
}
