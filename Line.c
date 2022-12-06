// Author   : Mxyuki
// Version  : 1.0
// Compil   : gcc -Wall line.c -o line

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int taillex = 50;                           // Taille plateau sur x
int tailley = 50;                           // Taille plateau sur y

int aX = 1;
int aY = 1;

int bX = 12;
int bY = 49;

int posx = 1;
int posy = 1;

int x = 1;
int y = 1;

int main(){

    screen();

}

void screen(){   

    int tab[taillex][tailley];

    while(posy < tailley){
        while(posx < taillex){
            tab[posx][posy] = 0;

            if(posx == aX && posy == aY || posx == bX && posy == bY){
                printf("▓▓");
            }
            else printf("░░");

            tab[posx][posy] = 0;

            posx++;
        }
        printf("\n");
        posx = 1;
        posy++;
    }

    tab[aX][aY] = 1;
    tab[bX][bY] = 1;


    if(bY > aY){
        x = aX;
        y = aY;

        float error = 0;

        float a = bY-aY;
        float b = bX-aX;

        if(bX > bY){

            float r = a/b;
    

            while(x < bX){

                error = error + r;

                if(error >= 0.5){

                    y = y+1;

            
            

                    error = error - 1;
                    tab[x][y] = 1;

                }
                else tab[x][y] = 1;

                x ++;
            }
        }

        else if(bY > bX){

            float r = b/a;

            while(y < bY){

                error = error + r;

                if(error >= 0.5){

                    x = x+1;            

                    error = error - 1;
                    tab[x][y] = 1;

                }
                else tab[x][y] = 1;

                y ++;
            }
        }

        posx = 1;
        posy = 1;

        while(posy < tailley){
            while(posx < taillex){

                if(tab[posx][posy] == 1) printf("▓▓");
                else if (tab[posx][posy] == 0) printf("░░");

                posx++;

            }
            printf("\n");
            posx = 1;
            posy++;
        }
    }
}
