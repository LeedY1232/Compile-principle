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
# Date: 09/30/19
# Time: 05:59:26
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [a-zA-Z]+

    2  \n

    3  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x09 (10)   goto 3
	0x0a               goto 4
	0x0b - 0x40 (54)   goto 3
	0x41 - 0x5a (26)   goto 5
	0x5b - 0x60 (6)    goto 3
	0x61 - 0x7a (26)   goto 5
	0x7b - 0xff (133)  goto 3


state 2
	^INITIAL

	0x00 - 0x09 (10)   goto 3
	0x0a               goto 4
	0x0b - 0x40 (54)   goto 3
	0x41 - 0x5a (26)   goto 5
	0x5b - 0x60 (6)    goto 3
	0x61 - 0x7a (26)   goto 5
	0x7b - 0xff (133)  goto 3


state 3
	match 3


state 4
	match 2


state 5
	0x41 - 0x5a (26)   goto 5
	0x61 - 0x7a (26)   goto 5

	match 1


#############################################################################
# Summary
#############################################################################

1 start state(s)
3 expression(s), 5 state(s)


#############################################################################
# End of File
#############################################################################
