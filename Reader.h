/*
************************************************************
* COMPILERS COURSE - Algonquin College
* Code version: Winter, 2025
* Author: Avinish Bhattarai ,Nikita Chaudhari
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
* File name: Reader.h
* Compiler: MS Visual Studio 2022
* Course: CST 8152 – Compilers, Lab Section: 303
* Assignment: A12.
* Date: Feb 01 2025
* Professor: Sarah khan
* Purpose: This file is the main header for Reader (.h)
************************************************************
*/

/*
 *.............................................................................
 * MAIN ADVICE:
 * Please check the "TODO" labels to develop your activity.
 *.............................................................................
 */

#ifndef COMPILERS_H_
#include "Compilers.h"
#endif

#ifndef READER_H_
#define READER_H_

/* TIP: Do not change pragmas, unless necessary .......................................*/
/*#pragma warning(1:4001) *//*to enforce C89 type comments  - to make //comments an warning */
/*#pragma warning(error:4001)*//* to enforce C89 comments - to make // comments an error */

/* standard header files */
#include <stdio.h>  /* standard input/output */
#include <malloc.h> /* for dynamic memory allocation*/
#include <limits.h> /* implementation-defined data type ranges and limits */

/* CONSTANTS DEFINITION: GENERAL (NOT LANGUAGE DEPENDENT) .................................. */

/* Modes (used to create buffer reader) */
enum READER_MODE {
	MODE_FIXED = 'f', /* Fixed mode (constant size) */
	MODE_ADDIT = 'a', /* Additive mode (constant increment to be added) */
	MODE_MULTI = 'm'  /* Multiplicative mode (constant increment to be multiplied) */
};

/* Constants about controls (not need to change) */
#define READER_TERMINATOR	'\0'							/* General EOF */

/* CONSTANTS DEFINITION: PREFIXED BY LANGUAGE NAME (niv) .................................. */

/* You should add your own constant definitions here */
#define READER_MAX_SIZE	INT_MAX   -1	/* maximum capacity */ 

#define READER_DEFAULT_SIZE			250		/* default initial buffer reader capacity */
#define READER_DEFAULT_INCREMENT	10		/* default increment factor */

#define NCHAR				128			/* Chars from 0 to 127 */

#define CHARSEOF			(-1)		/* EOF Code for Reader */

/* STRUCTURES DEFINITION: SUFIXED BY LANGUAGE NAME (niv) .................................. */

/* TODO: Adjust datatypes */

/* Offset declaration */
typedef struct flag {
	niv_boolean isEmpty;			/* indicates if the buffer is empty */
	niv_boolean isFull;			/* indicates if the buffer is full */
	niv_boolean isRead;			/* indicates if the buffer was completely read */
	niv_boolean isMoved;			/* indicates if the buffer memory was changed */
} Flag;

/* Offset declaration */
typedef struct position {
	niv_int wrte;			/* the offset to the add chars (in chars) */
	niv_int read;			/* the offset to the get a char position (in chars) */
	niv_int mark;			/* the offset to the mark position (in chars) */
} Position;

/* Buffer structure */
typedef struct bufferReader {
	niv_string	    content;			/* pointer to the beginning of character array (character buffer) */
	niv_int		size;				/* current dynamic memory size (in bytes) allocated to character buffer */
	niv_int		increment;			/* character array increment factor */
	niv_char		mode;				/* operational mode indicator */
	Flag			flags;				/* contains character array reallocation flag and end-of-buffer flag */
	Position		positions;			/* Offset / position field */
	niv_int		histogram[NCHAR];	/* Statistics of chars */
	niv_int		numReaderErrors;	/* Number of errors from Reader */
	niv_byte		checksum;
} Buffer, * BufferPointer;

/* FUNCTIONS DECLARATION:  .................................. */
/* General Operations */
BufferPointer	readerCreate		(niv_int, niv_int, niv_char);
BufferPointer	readerAddChar		(BufferPointer const, niv_char);
niv_boolean		readerClear		    (BufferPointer const);
niv_boolean		readerFree		    (BufferPointer const);
niv_boolean		readerIsFull		(BufferPointer const);
niv_boolean		readerIsEmpty		(BufferPointer const);
niv_boolean		readerSetMark		(BufferPointer const, niv_int);
niv_int		readerPrint		    (BufferPointer const);
niv_int		readerLoad			(BufferPointer const, FILE* const);
niv_boolean		readerRecover		(BufferPointer const);
niv_boolean		readerRetract		(BufferPointer const);
niv_boolean		readerRestore		(BufferPointer const);
niv_void		readerCalcChecksum	(BufferPointer const);
niv_boolean		readerPrintFlags	(BufferPointer const);
niv_void		readerPrintStat     (BufferPointer const);
/* Getters */
niv_char		readerGetChar		(BufferPointer const);
niv_string	readerGetContent	(BufferPointer const, niv_int);
niv_int		readerGetPosRead	(BufferPointer const);
niv_int		readerGetPosWrte	(BufferPointer const);
niv_int		readerGetPosMark	(BufferPointer const);
niv_int		readerGetSize		(BufferPointer const);
niv_int		readerGetInc		(BufferPointer const);
niv_char		readerGetMode		(BufferPointer const);
niv_int		readerGetNumErrors	(BufferPointer const);

#endif
