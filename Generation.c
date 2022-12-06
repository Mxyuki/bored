// Author   : Mxyuki
// Version  : 2.0
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

int curX = 0;
int curY = 0;

int inv = 0;

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
    cursor(tab);
}



void cursor(int tab[][tailley]){

    int c;

    system ("/bin/stty raw");
    while((c=getchar())!= 27) {
       
        if(c == '8') curY--;
        if(c == '4') curX--;
        if(c == '6') curX++;
        if(c == '5') curY++; 

        if(curX < 0) curX++;
        if(curX == taillex) curX--;
        if(curY < 0)curY++;
        if(curY == tailley)curY--;

        if(c == '8' || c == '4' || c == '6' || c == '5'){

            system("@cls||clear");

            system("/bin/stty cooked");

            printf("\n");

            while(posy < tailley){

                while(posx < taillex){
            
                    if(posx == curX && posy == curY){ 
                        printf("[]");
                        posx++;
                    }

                    else{

                        if(tab[posy][posx] == 1) printf("▓▓");
                        else if(tab[posy][posx] == 2) printf("▒▒");
                        else if(tab[posy][posx] == 3) printf("░░");

                        posx++;
                    }
                }
                printf("\n");
                posx = 0;
                posy++;
            }
            printf("Inventory : %d\n", inv);
            posx = 0;
            posy = 0;
            system ("/bin/stty raw"); 
            c = 0;
        }

        else if(c == '9'){
            if(tab[curY][curX] != 3 && inv > 0){ 
                tab[curY][curX] = tab[curY][curX] + 1;
                inv = inv - 1;
            }
        }
        else if(c == '7'){
            if(tab[curY][curX] != 1){ 
                tab[curY][curX] = tab[curY][curX] - 1;
                inv = inv + 1;
            }
        }
    }

    system("/bin/stty cooked");
  
}
