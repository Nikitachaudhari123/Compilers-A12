/*
************************************************************
* COMPILERS COURSE - Algonquin College
* Code version: Winter, 2025
* Author: Avinish Bhattarai, Nikita Chaudhari
* Professors: Sarah Khan
************************************************************
#
#echo -e "\t==================================================="
#echo -e "\t|                 NIVLang Logo                    |"
#echo -e "\t==================================================="
#echo -e "\tNNNNNNNN        NNNNNNNNVVVVVVVV           VVVVVVVV"
#echo -e "\tN:::::::N       N::::::NV::::::V           V::::::V"
#echo -e "\tN::::::::N      N::::::NV::::::V           V::::::V"
#echo -e "\tN:::::::::N     N::::::NV::::::V           V::::::V"
#echo -e "\tN::::::::::N    N::::::N V:::::V           V:::::V "
#echo -e "\tN:::::::::::N   N::::::N  V:::::V         V:::::V  "
#echo -e "\tN:::::::N::::N  N::::::N   V:::::V       V:::::V   "
#echo -e "\tN::::::N N::::N N::::::N    V:::::V     V:::::V	   "
#echo -e "\tN::::::N  N::::N:::::::N     V:::::V   V:::::V	   "
#echo -e "\tN::::::N   N:::::::::::N      V:::::V V:::::V	   "
#echo -e "\tN::::::N    N::::::::::N       V:::::V:::::V	   "
#echo -e "\tN::::::N     N:::::::::N        V:::::::::V		   "
#echo -e "\tN::::::N      N::::::::N         V:::::::V		   "
#echo -e "\tN::::::N       N:::::::N          V:::::V		   "
#echo -e "\tN::::::N        N::::::N           V:::V		   "
#echo -e "\tNNNNNNNN         NNNNNNN            VVV			   "
#echo -e "\t==================================================="
#echo -e "\t|             Lightweight & Fast                  |"
#echo -e "\t==================================================="
/*

/*
************************************************************
* File name: Compilers.h
* Compiler: MS Visual Studio 2022
* Course: CST 8152 – Compilers, Lab Section: 303
* Assignment: A12, A22, A32.
* Date: Feb 2 2025
* Professor: Sarah Khan
* Purpose: This file defines the functions called by main function.
* Function list: mainReader(), mainScanner(), mainParser().
*************************************************************/

#ifndef COMPILERS_H_
#define COMPILERS_H_

#define DEBUG 0

/*
 * ............................................................................
 * ADVICE 1:
 * Please check the "TODO" labels to develop your activity.
 *
 * ADVICE 2: This file must be updated according to each assignment
 * (see the progression: reader > scanner > parser).
 * ............................................................................
 */

/* TO_DO: Adjust your language */

/* TO_DO: Language name */
#define STR_LANGNAME	"NIVLang"

/* TO_DO: Logical constants - adapt for your language */
#define niv_TRUE		1
#define niv_FALSE		0
#define niv_ERROR		(-1)	/* General error message */

#define niv_INVALID	NULL

/*
------------------------------------------------------------
Data types definitions
NOTE: Some types may not be directly used by your language,
		but they can be necessary for conversions.
------------------------------------------------------------
*/


/* TO_DO: Define your typedefs */
typedef char			niv_char;
typedef char*			niv_string;
typedef int				niv_int;
typedef float			niv_float;
typedef void			niv_void;

typedef char			niv_boolean;
typedef unsigned char	niv_byte;

typedef long			niv_long;
typedef double			niv_double;

/*
------------------------------------------------------------
Programs:
1: Reader - invokes MainReader code
2: Scanner - invokes MainScanner code
3: Parser - invokes MainParser code
------------------------------------------------------------
*/
enum PROGRAMS {
	PGM_READER  = '1',
	PGM_SCANNER = '2',
	PGM_PARSER  = '3'
};

/*
------------------------------------------------------------
Main functions signatures
(Code will be updated during next assignments)
------------------------------------------------------------
*/
niv_int mainReader(niv_int argc, niv_string* argv);
/* TO_DO: Remove comment in next assignments */
/*
niv_int mainScanner(niv_int argc, niv_string* argv);
niv_int mainParser(niv_int argc, niv_string* argv);
*/

niv_void printLogo();

#endif
