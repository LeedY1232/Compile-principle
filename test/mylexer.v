#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 1 of your 30 day trial period.
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
# Date: 10/10/19
# Time: 19:36:29
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [0-9]+

    2  void

    3  int

    4  main

    5  while

    6  for

    7  "=="|">"|"<"|">="|"<="|"!="

    8  "&&"|"||"|"!"

    9  =

   10  ;

   11  #define

   12  struct

   13  scanf

   14  printf

   15  [A-Za-z_0-9]*

   16  "+"|"-"|"*"|"/"|"%"|"^"

   17  "("

   18  ")"

   19  "'"|"'"

   20  "\""|"\""

   21  "{"

   22  "}"

   23  ("//"[A-Za-z_0-9]*)|("/*"[A-Za-z_0-9\t\n ]*"*/")

   24  ,

   25  "%d"|"%s"|"%f"

   26  [\t\n ]*

   27  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22               goto 6
	0x23               goto 7
	0x24               goto 3
	0x25               goto 8
	0x26               goto 9
	0x27               goto 10
	0x28               goto 11
	0x29               goto 12
	0x2a - 0x2b (2)    goto 13
	0x2c               goto 14
	0x2d               goto 13
	0x2e               goto 3
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3a               goto 3
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 18
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 20
	0x5b - 0x5d (3)    goto 3
	0x5e               goto 13
	0x5f               goto 20
	0x60               goto 3
	0x61 - 0x65 (5)    goto 20
	0x66               goto 21
	0x67 - 0x68 (2)    goto 20
	0x69               goto 22
	0x6a - 0x6c (3)    goto 20
	0x6d               goto 23
	0x6e - 0x6f (2)    goto 20
	0x70               goto 24
	0x71 - 0x72 (2)    goto 20
	0x73               goto 25
	0x74 - 0x75 (2)    goto 20
	0x76               goto 26
	0x77               goto 27
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 28
	0x7c               goto 29
	0x7d               goto 30
	0x7e - 0xff (130)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22               goto 6
	0x23               goto 7
	0x24               goto 3
	0x25               goto 8
	0x26               goto 9
	0x27               goto 10
	0x28               goto 11
	0x29               goto 12
	0x2a - 0x2b (2)    goto 13
	0x2c               goto 14
	0x2d               goto 13
	0x2e               goto 3
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3a               goto 3
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 18
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 20
	0x5b - 0x5d (3)    goto 3
	0x5e               goto 13
	0x5f               goto 20
	0x60               goto 3
	0x61 - 0x65 (5)    goto 20
	0x66               goto 21
	0x67 - 0x68 (2)    goto 20
	0x69               goto 22
	0x6a - 0x6c (3)    goto 20
	0x6d               goto 23
	0x6e - 0x6f (2)    goto 20
	0x70               goto 24
	0x71 - 0x72 (2)    goto 20
	0x73               goto 25
	0x74 - 0x75 (2)    goto 20
	0x76               goto 26
	0x77               goto 27
	0x78 - 0x7a (3)    goto 20
	0x7b               goto 28
	0x7c               goto 29
	0x7d               goto 30
	0x7e - 0xff (130)  goto 3


state 3
	match 27


state 4
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4

	match 26


state 5
	0x3d               goto 31

	match 8


state 6
	match 20


state 7
	0x64               goto 32

	match 27


state 8
	0x64               goto 33
	0x66               goto 33
	0x73               goto 33

	match 16


state 9
	0x26               goto 34

	match 27


state 10
	match 19


state 11
	match 17


state 12
	match 18


state 13
	match 16


state 14
	match 24


state 15
	0x2a               goto 35
	0x2f               goto 36

	match 16


state 16
	0x30 - 0x39 (10)   goto 16
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 1


state 17
	match 10


state 18
	0x3d               goto 31

	match 7


state 19
	0x3d               goto 31

	match 9


state 20
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 15


state 21
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 37
	0x70 - 0x7a (11)   goto 20

	match 15


state 22
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 38
	0x6f - 0x7a (12)   goto 20

	match 15


state 23
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 39
	0x62 - 0x7a (25)   goto 20

	match 15


state 24
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 40
	0x73 - 0x7a (8)    goto 20

	match 15


state 25
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x62 (2)    goto 20
	0x63               goto 41
	0x64 - 0x73 (16)   goto 20
	0x74               goto 42
	0x75 - 0x7a (6)    goto 20

	match 15


state 26
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6e (14)   goto 20
	0x6f               goto 43
	0x70 - 0x7a (11)   goto 20

	match 15


state 27
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x67 (7)    goto 20
	0x68               goto 44
	0x69 - 0x7a (18)   goto 20

	match 15


state 28
	match 21


state 29
	0x7c               goto 34

	match 27


state 30
	match 22


state 31
	match 7


state 32
	0x65               goto 45


state 33
	match 25


state 34
	match 8


state 35
	0x09 - 0x0a (2)    goto 35
	0x20               goto 35
	0x2a               goto 46
	0x30 - 0x39 (10)   goto 35
	0x41 - 0x5a (26)   goto 35
	0x5f               goto 35
	0x61 - 0x7a (26)   goto 35


state 36
	0x30 - 0x39 (10)   goto 36
	0x41 - 0x5a (26)   goto 36
	0x5f               goto 36
	0x61 - 0x7a (26)   goto 36

	match 23


state 37
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 47
	0x73 - 0x7a (8)    goto 20

	match 15


state 38
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 48
	0x75 - 0x7a (6)    goto 20

	match 15


state 39
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 49
	0x6a - 0x7a (17)   goto 20

	match 15


state 40
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 50
	0x6a - 0x7a (17)   goto 20

	match 15


state 41
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61               goto 51
	0x62 - 0x7a (25)   goto 20

	match 15


state 42
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x71 (17)   goto 20
	0x72               goto 52
	0x73 - 0x7a (8)    goto 20

	match 15


state 43
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 53
	0x6a - 0x7a (17)   goto 20

	match 15


state 44
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x68 (8)    goto 20
	0x69               goto 54
	0x6a - 0x7a (17)   goto 20

	match 15


state 45
	0x66               goto 55


state 46
	0x2f               goto 56


state 47
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 6


state 48
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 3


state 49
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 57
	0x6f - 0x7a (12)   goto 20

	match 15


state 50
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 58
	0x6f - 0x7a (12)   goto 20

	match 15


state 51
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6d (13)   goto 20
	0x6e               goto 59
	0x6f - 0x7a (12)   goto 20

	match 15


state 52
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x74 (20)   goto 20
	0x75               goto 60
	0x76 - 0x7a (5)    goto 20

	match 15


state 53
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x63 (3)    goto 20
	0x64               goto 61
	0x65 - 0x7a (22)   goto 20

	match 15


state 54
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x6b (11)   goto 20
	0x6c               goto 62
	0x6d - 0x7a (14)   goto 20

	match 15


state 55
	0x69               goto 63


state 56
	match 23


state 57
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 4


state 58
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 64
	0x75 - 0x7a (6)    goto 20

	match 15


state 59
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x65 (5)    goto 20
	0x66               goto 65
	0x67 - 0x7a (20)   goto 20

	match 15


state 60
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x62 (2)    goto 20
	0x63               goto 66
	0x64 - 0x7a (23)   goto 20

	match 15


state 61
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 2


state 62
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x64 (4)    goto 20
	0x65               goto 67
	0x66 - 0x7a (21)   goto 20

	match 15


state 63
	0x6e               goto 68


state 64
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x65 (5)    goto 20
	0x66               goto 69
	0x67 - 0x7a (20)   goto 20

	match 15


state 65
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 13


state 66
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x73 (19)   goto 20
	0x74               goto 70
	0x75 - 0x7a (6)    goto 20

	match 15


state 67
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 5


state 68
	0x65               goto 71


state 69
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 14


state 70
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 12


state 71
	match 11


#############################################################################
# Summary
#############################################################################

1 start state(s)
27 expression(s), 71 state(s)


#############################################################################
# End of File
#############################################################################
