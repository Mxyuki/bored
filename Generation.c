// Author   : Mxyuki
// Version  : 1.0
// Compil   : gcc -Wall Gene.c -o Gene

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int taillex = 20;
int tailley = 20;

int lowPerc = 1;
int highPerc = 99;
int medPerc = 98;

int posx = 0;
int posy = 0;

time_t t;

int main (){
    srand((unsigned) time(&t));

    GenTab();
    
}



void GenTab(){

    int tab[taillex][tailley];

    while(posy < tailley){
        while(posx < taillex){
            int r = rand() % 101;

            if(posx == 0 && posy == 0){
                if(r <= 33){ 
                    tab[posx][posy] = 1;
                    printf("░░");
                }
                else if(r >= 66){
                    tab[posx][posy] = 3;
                    printf("▓▓");
                }
                else{ 
                    tab[posx][posy] = 2;
                    printf("▒▒");
                }
            }



            else if(posx > 0 && posy == 0){
                if(tab[posx-1][posy] == 1){
                    if(r <= medPerc){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }

                else if(tab[posx-1][posy] == 2){
                    if(r <= lowPerc){ 
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else if(r >= highPerc){ 
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }

                if(tab[posx-1][posy] == 3){
                    if(r <= medPerc){
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }
            }



            else if(posx == 0 && posy > 0){

                if(tab[posx][posy-1] == 1){
                    if(r <= medPerc){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }

                else if(tab[posx][posy-1] == 2){
                    if(r <= lowPerc){ 
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else if(r >= highPerc){ 
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }

                if(tab[posx][posy-1] == 3){
                    if(r <= medPerc){
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                }
            }



            else if(posx > 0 && posy > 0){

                if(tab[posx-1][posy] == 1 && tab[posx][posy-1] == 1){
                    if(r <= medPerc){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    } 
                }

                else if(tab[posx-1][posy] == 2 && tab[posx][posy-1] == 2){
                    if(r <= lowPerc){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else if(r >= highPerc){
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    } 
                }

                else if(tab[posx-1][posy] == 3 && tab[posx][posy-1] == 3){
                    if(r <= medPerc){
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    } 
                }



                else if(tab[posx-1][posy] == 1 && tab[posx][posy-1] == 2){
                    if(r <= 50){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    } 
                }

                else if(tab[posx-1][posy] == 2 && tab[posx][posy-1] == 3){
                    if(r <= 50){
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                    else{ 
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    } 
                }

                else if(tab[posx-1][posy] == 1 && tab[posx][posy-1] == 3){
                        tab[posx][posy] = 2;
                        printf("▒▒");
                }



                else if(tab[posx][posy-1] == 1 && tab[posx-1][posy] == 2){
                    if(r <= 50){
                        tab[posx][posy] = 1;
                        printf("░░");
                    }
                    else{ 
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    } 
                }

                else if(tab[posx][posy-1] == 2 && tab[posx-1][posy] == 3){
                    if(r <= 50){
                        tab[posx][posy] = 2;
                        printf("▒▒");
                    }
                    else{ 
                        tab[posx][posy] = 3;
                        printf("▓▓");
                    } 
                }

                else if(tab[posx][posy-1] == 1 && tab[posx-1][posy] == 3){
                        tab[posx][posy] = 2;
                        printf("▒▒");
                }

            }

            posx++;
        }
        printf("\n");
        posx = 0;
        posy++;
    }
}
