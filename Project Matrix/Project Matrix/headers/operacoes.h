//
//  operacoes.h
//  Project Matrix
//
//  Created by Felipe Alexandre de Barros Pinto on 13/10/17.
//  Copyright © 2017 Felipe Alexandre de Barros Pinto. All rights reserved.
//


#ifndef operacoes_h
#define operacoes_h

#include <stdio.h>
#include "edit.h"

/**
 * @brief Soma de Matrizes ( Y + X ).
 * @details Verifica a existencia e soma as matrizes localizadas em X e Y.
 * Guardando o resultado em X e alocando coluna de matrizes para baixo.
 * @warning Os espaços X e Y devem conter matrizes.
 * @see sub, mtim, vtim, mpow.
 */
void    sum                                  (void);
/**
 * @brief Subtração de Matrizes ( Y - X ).
 * @details Verifica a existencia e subtrai da matriz localizada em Y a matriz localizada em X.
 * Guardando o resultado em X e alocando coluna de matrizes para baixo.
 * @warning X e Y devem conter matrizes!
 * @see sum, mtim, vtim, mpow.
 */
void    sub                                  (void);
/**
 * @brief Multiplicação de Matrizes ( Y * X ).
 * @details Verifica a existencia e multiplica as matrizes localizadas em X e Y.
 * Guardando o resultado em X e alocando coluna de matrizes para baixo.
 * @warning X e Y devem conter matrizes.
 * @see sum, sub, vtim, mpow.
 */
void    mtim                                 (void);
/**
 * @brief Multiplica matriz por um escalar
 * @details Multiplica cada valor da matriz de X por um escalar do tipo float
 * @param v Escalar que irá multiplicar X
 * @warning X deve conter uma matriz
 * @see sum, sub, mtim, mpow.
 */
void    vtim                              (float v);
/**
 * @brief Eleva X á potencia
 * @detais Multiplica X * X =>\n\t=> salva resultado em R =>\n
 * \t=> Multiplica R * X =>\n\t=> repete N vezes =>\n\t
 * => Salva resultado final em X.
 * @param v Potencia a ser elevadad de X.
 * @see sum, sub, mtim, vtim.
 */
void    mpow                                (int v);
/**
 * @brief Calcula o determinante de uma matriz.
 * @param x Matriz para calcular o determinante.
 * @param dc Numero de colunas da matriz.
 * @param dl Numero de linhas  da matriz.
 * @return Retorna o determiante da matriz.
 * @see minfo and inv.
 */
float   mdet    (float x[100][100], int dc, int dl);

#endif /* operacoes_h */
