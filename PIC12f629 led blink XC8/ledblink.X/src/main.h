/* 
 * File:   main.h
 * Author: Krishna
 *
 * Created on March 9, 2017, 11:19 PM
 */
// includes xc8 compiler files
#include<xc.h>
#include<pic12f629.h>
#include <stdio.h>
#include <stdlib.h>

__CONFIG(FOSC_INTRCIO & WDTE_OFF & PWRTE_OFF & MCLRE_OFF & BOREN_ON & CP_OFF & CPD_OFF);

#define led        GP2
