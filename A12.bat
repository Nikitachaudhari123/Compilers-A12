:: ---------------------------------------------------------------------
:: COMPILERS COURSE - SCRIPT                                           -
:: SCRIPT A22 - CST8152 - Fall 2024                                    -
:: ---------------------------------------------------------------------

CLS
SET COMPILER=Compilers.exe

SET FILE1=BIG
SET FILE2=SMALL
SET FILE3=HELLO


SET ASSIGNMENT=A12
SET EXTENSION=nl
SET OUTPUT=out
SET ERROR=err

SET PARAM=1

:: ---------------------------------------------------------------------
:: Begin of Tests (A12 - F24) ------------------------------------------
:: ---------------------------------------------------------------------

@echo off

ECHO "=--------------------------------------------------="
ECHO "|              NIVLang Logo             			 |"
ECHO "=--------------------------------------------------="
ECHO "NNNNNNNN        NNNNNNNNVVVVVVVV           VVVVVVVV ”
ECHO "N:::::::N       N::::::NV::::::V           V::::::V ”
ECHO "N::::::::N      N::::::NV::::::V           V::::::V ”
ECHO "N:::::::::N     N::::::NV::::::V           V::::::V ”
ECHO "N::::::::::N    N::::::N V:::::V           V:::::V  ”
ECHO "N:::::::::::N   N::::::N  V:::::V         V:::::V   ”
ECHO "N:::::::N::::N  N::::::N   V:::::V       V:::::V    ”
ECHO "N::::::N N::::N N::::::N    V:::::V     V:::::V	  ”
ECHO "N::::::N  N::::N:::::::N     V:::::V   V:::::V 	  ”
ECHO "N::::::N   N:::::::::::N      V:::::V V:::::V		  ”
ECHO "N::::::N    N::::::::::N       V:::::V:::::V		  ”
ECHO "N::::::N     N:::::::::N        V:::::::::V		  ”
ECHO "N::::::N      N::::::::N         V:::::::V	  	  ”
ECHO "N::::::N       N:::::::N          V:::::V			  ”
ECHO "N::::::N        N::::::N           V:::V	   		  ”
ECHO "NNNNNNNN         NNNNNNN            VVV	 	      ”
ECHO "=================================================== ”
ECHO "|             Lightweight & Fast                  | "
ECHO "==================================================="                  
ECHO "[READER SCRIPT .........................]"
ECHO "                                         "

ren *.exe %COMPILER%

::
:: BASIC TESTS  ----------------------------------------------------------
::
:: Basic Tests (A12 - F24) - - - - - - - - - - - - - - - - - - - - - -

%COMPILER% %PARAM% %FILE1%.%EXTENSION%	> %FILE1%-%ASSIGNMENT%.%OUTPUT%	2> %FILE1%-%ASSIGNMENT%.%ERROR%
%COMPILER% %PARAM% %FILE1%.%EXTENSION%	> %FILE1%-%ASSIGNMENT%.%OUTPUT%	2> %FILE1%-%ASSIGNMENT%.%ERROR%
%COMPILER% %PARAM% %FILE3%.%EXTENSION%	> %FILE3%-%ASSIGNMENT%.%OUTPUT%	2> %FILE3%-%ASSIGNMENT%.%ERROR%

::
:: ADVANCED TESTS  -------------------------------------------------------
::
:: Advanced Tests (A12 - F24) - - - - - - - - -- - - - - - - - - - - -

%COMPILER% %PARAM% %FILE1%.%EXTENSION%	f 100 10	> %FILE1%-%ASSIGNMENT%-f-100-10.%OUTPUT%	2> %FILE1%-%ASSIGNMENT%-f-100-10.%ERROR%
%COMPILER% %PARAM% %FILE2%.%EXTENSION%	a 100 10	> %FILE2%-%ASSIGNMENT%-a-100-10.%OUTPUT%	2> %FILE2%-%ASSIGNMENT%-a-100-10.%ERROR%
%COMPILER% %PARAM% %FILE3%.%EXTENSION%	m 100 10	> %FILE3%-%ASSIGNMENT%-m-100-10.%OUTPUT%	2> %FILE3%-%ASSIGNMENT%-m-100-10.%ERROR%

:: SHOW OUTPUTS - - - - - - - - - - - - - - - - - - - - - - - - - - -
DIR *.OUT
DIR *.ERR
pause

:: ---------------------------------------------------------------------
:: End of Tests (A12 - F24) --------------------------------------------
:: ---------------------------------------------------------------------
