//
//  Funcoes.c
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "Funcoes.h"

int     interface               (int rs) {

#define H 15
#define L 90
    
    int r=1;
    
    switch (rs) {
        case 1: /* Pagina de Inicialisacao  */  {
            
            do{
            
            pbreak(50);
            
            Box(H,L,
                 "##             ##    ##                                     ##      #\n"
                 " #              #     #                                      #      #\n"
                 " ####   ###    #      #    ###        ##  ##  ###   ## ##   #    ####\n"
                 " #  #  #   #   #     #    #  ##       # ###  ##  #   ##     #   ## ##\n"
                 " #  # ######   #     #   #    #       # # #  #   #   #      #   #   #\n"
                 " #  # #        #     #   #   #        ####   #   #  #      ##   #  ##\n"
                 "## ##  ####  #### #####  ####        ## ##   ####  ####   ####  #####\n");
            printf("\n\t\t\t\t1 - INITIALIZE PROGRAM\n"
                   "\t\t\t\t0 - SAIR\n\n$ ");
            scanf("%d",&rs);
            pbreak(50);
                
            } while (rs!=0&&rs!=1);
            
        } break;
        case 2: /* Menu inicial             */  {
            
            do{
                Box (H,L,
                     "Menu Principal\n"
                     "1 - Editar Valores\n"
                     "2 - Operacoes\n"
                     "3 - Mostrar Matrizes\n"
                     "0 - Sair\n");
                
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                switch (rs){
                    case 1: rs = interface(3); r=0; break;
                    case 2: rs = interface(4); r=0; break;
                    case 3: rs = interface(5); r=0; break;
                    case 0: r=0;
                }
            } while (r!=0);
        } break;
        case 3: /* Menu de Edicao           */  {
            
            r=1;
            do{
                Box (H,L,
                     "Editar qual Matriz?\n"
                     "1 - Matriz A\n"
                     "2 - Matriz B\n"
                     "0 - Voltar\n");
                
                printf("$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch (rs) {
                    case 1: rs = interface(6); r=0; break;
                    case 2: rs = interface(7); r=0; break;
                    case 0: rs = interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
        case 4: /* Menu de Operacoes        */  {
            
            r=1;
            do{
                Box(H,L,
                    "Realizar quais opercaoes com matrizes?\n"
                    "1 - Somar        ( A + B )\n"
                    "2 - Subtrair     ( A - B )\n"
                    "3 - Multiplicar  ( A * B )\n"
                    "0 - Voltar\n");
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch (rs) {
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 0: interface(2); r=0; break;
                }
            } while (r!=0);
        } break;
        case 5: /* Menu Show                */  {
            
            r=1;
            do{
                Box(H,L,
                    "1 - Mostrar matriz A\n"
                    "2 - Mostrar matriz B\n"
                    "3 - Mostrar matriz C\n"
                    "0 - Voltar\n");
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch(rs){
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 0: interface(2); r=0; break;
                }
            
            } while (r!=0);
        } break;
        case 6: /* Menu Edicao de A        */  {
         
            do{
            Box(H,L,
                "Para a matriz A:\n\n"
                "1 - Alterar as dimensoes da matriz   2 - Alterar todos os valores em sequencia\n"
                "3 - Alterar um valor especifico      4 - Inverter a matriz\n"
                "5 - Transpor a matriz                6 - substituir por uma matriz identidade\n"
                "0 - Voltar");
            
            printf("\n$ ");
            scanf("%d",&rs);
            pbreak(50);
            
            switch(rs){
                case 1: rs = 99; r=0; break;
                case 2: rs = 99; r=0; break;
                case 3: rs = 99; r=0; break;
                case 4: rs = 99; r=0; break;
                case 5: rs = 99; r=0; break;
                case 6: rs = 99; r=0; break;
                case 0: rs = interface(3); r=0; break;
            }
        } while (r!=0);
        } break;
        case 7: /* Menu Edicao de B        */  {
            
            do{
                Box(H,L,
                    "Para a matriz B:\n\n"
                    "1 - Alterar as dimensoes da matriz   2 - Alterar todos os valores em sequencia\n"
                    "3 - Alterar um valor especifico      4 - Inverter a matriz\n"
                    "5 - Transpor a matriz                6 - substituir por uma matriz identidade\n"
                    "0 - Voltar");
                
                printf("\n$ ");
                scanf("%d",&rs);
                pbreak(50);
                
                switch(rs){
                    case 1: rs = 99; r=0; break;
                    case 2: rs = 99; r=0; break;
                    case 3: rs = 99; r=0; break;
                    case 4: rs = 99; r=0; break;
                    case 5: rs = 99; r=0; break;
                    case 6: rs = 99; r=0; break;
                    case 0: rs = interface(3); r=0; break;
                }
            } while (r!=0);
        } break;
    }
    
    return rs;
    
}
void    Box   (int h,int l, char txt[100]){
    
    int i=1,j,k=0;
    char line[100];
    FILE *box;
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/Materiais/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/.Resources/box/texto.txt", "w");
    
    fprintf(box, "%s", txt);
    
    fclose(box);
    
    box = fopen("/Users/felipepinto/Documents/Engenharia\ Eletrica/Materiais/A\&L\ Prog/FelipePint0.github.io/Project-Matrix/Project\ Matrix/.Resources/box/texto.txt", "r");
    
    while (i<=3){
        switch (i) {
            case 1: {
                
                for(j=0;j<l;j++){
                    printf("_");
                } printf("\n");
                
                printf("|");
                for (j=2;j<l;j++){
                    printf(" ");
                }
                printf("|\n");
                
            } break;
            case 2: {
                k=4;
                while(fgets(line, sizeof(line), box)){
                    line[strlen(line)-1]='\0';
                    k++;
                    printf("|  ");
                    printf("%s",line);
                    for (j=strlen(line);j<l-6;j++){
                        printf(" ");
                    } printf("  |\n");
                }
                for (j=k;j<H;j++){
                    printf("|  ");
                    for (k=0;k<l-6;k++){
                        printf(" ");
                    } printf("  |\n");
                }
            } break;
            case 3: {
                
                printf("|");
                for (j=2;j<l;j++){
                    printf(" ");
                }
                printf("|\n");
                
                printf("|");
                for(j=2;j<l;j++){
                    printf("_");
                } printf("|\n");
                
            } break;
        }
        i++;
    }
    
    
    }
void    pbreak               (int n) {
    
    while (n>0){
        printf("\n");
        n--;
    }
}













