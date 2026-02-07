# ProjectEuler0016
My work on 

problem #16 of projecteuler.net:

Power Digit Sum

$2^{15} = 32768$ and the sum of its digits is $3 + 2 + 7 + 6 + 8 = 26$.

What is the sum of the digits of the number $2^{1000}$?

Completed on Sun, 21 Feb 2021, 02:03

#######################################################################################
Please note: Project Euler's policy allows publication of solutions for the first 100 problems,
that's why I am sharing my work here for reference and educational purposes.
#######################################################################################

Using Python's native big number and string operations, the task is incredibly easy.
Just directly compute the result, then read it as string one by one digit and add them up.
And it takes just $0.1$ms for $2^{1000}$.

In C++ without such cheats the task is more difficult.


