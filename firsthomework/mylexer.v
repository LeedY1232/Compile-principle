#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 8 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 09/23/19
# Time: 16:40:15
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "/*"

    2  "auto"

    3  "break"

    4  "case"

    5  "char"

    6  "const"

    7  "continue"

    8  "default"

    9  "do"

   10  "while"

   11  "for"

   12  "if"

   13  "else"

   14  "define"

   15  "void"

   16  "int"


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x2f               goto 3
	0x61               goto 4
	0x62               goto 5
	0x63               goto 6
	0x64               goto 7
	0x65               goto 8
	0x66               goto 9
	0x69               goto 10
	0x76               goto 11
	0x77               goto 12


state 2
	^INITIAL

	0x2f               goto 3
	0x61               goto 4
	0x62               goto 5
	0x63               goto 6
	0x64               goto 7
	0x65               goto 8
	0x66               goto 9
	0x69               goto 10
	0x76               goto 11
	0x77               goto 12


state 3
	0x2a               goto 13


state 4
	0x75               goto 14


state 5
	0x72               goto 15


state 6
	0x61               goto 16
	0x68               goto 17
	0x6f               goto 18


state 7
	0x65               goto 19
	0x6f               goto 20


state 8
	0x6c               goto 21


state 9
	0x6f               goto 22


state 10
	0x66               goto 23
	0x6e               goto 24


state 11
	0x6f               goto 25


state 12
	0x68               goto 26


state 13
	match 1


state 14
	0x74               goto 27


state 15
	0x65               goto 28


state 16
	0x73               goto 29


state 17
	0x61               goto 30


state 18
	0x6e               goto 31


state 19
	0x66               goto 32


state 20
	match 9


state 21
	0x73               goto 33


state 22
	0x72               goto 34


state 23
	match 12


state 24
	0x74               goto 35


state 25
	0x69               goto 36


state 26
	0x69               goto 37


state 27
	0x6f               goto 38


state 28
	0x61               goto 39


state 29
	0x65               goto 40


state 30
	0x72               goto 41


state 31
	0x73               goto 42
	0x74               goto 43


state 32
	0x61               goto 44
	0x69               goto 45


state 33
	0x65               goto 46


state 34
	match 11


state 35
	match 16


state 36
	0x64               goto 47


state 37
	0x6c               goto 48


state 38
	match 2


state 39
	0x6b               goto 49


state 40
	match 4


state 41
	match 5


state 42
	0x74               goto 50


state 43
	0x69               goto 51


state 44
	0x75               goto 52


state 45
	0x6e               goto 53


state 46
	match 13


state 47
	match 15


state 48
	0x65               goto 54


state 49
	match 3


state 50
	match 6


state 51
	0x6e               goto 55


state 52
	0x6c               goto 56


state 53
	0x65               goto 57


state 54
	match 10


state 55
	0x75               goto 58


state 56
	0x74               goto 59


state 57
	match 14


state 58
	0x65               goto 60


state 59
	match 8


state 60
	match 7


#############################################################################
# Summary
#############################################################################

1 start state(s)
16 expression(s), 60 state(s)


#############################################################################
# End of File
#############################################################################
