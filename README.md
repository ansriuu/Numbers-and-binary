# Numbers-and-binary

This repository contains small conversion c programs for binary numbers (8 bit) and decimal numbers. The programs are in regard with consideration of Two's complement.

***NumbersToBinary.c***

This program follows a basic algorithm that comes up from how we genrally represent number, to convert a decimal number into a binary 8 bit number.


there is a simple and better way, which we use normally use too, that I have implemented in the ***numtobin.c*** program.

***BinaryToNumber.c***

This program too follows the basic algorithm that we use in general to convert a binary 8 bit number into a decimal number.

The general way to turn a binary to a decimal, which the code uses in the function changer is to multiply the individual digits of the number with 2 to the power i , where i is the index of that digits starting from 0 read right to left.


The code, apart from the usual algorithm, also contains an easy way around using standard library function strtoll.

--- 

As we have considered Two's complement and as it is written for 8 bit representation , all  the programs can only convert decimal numbers between -128 and 127. This range can easily be broadened by changing a few numbers in the programm, i believe anyone who is looking at the program can find how.


---

The motivation for the programs came while writing another program to answer the question how do computers add, so the programs are based on the first intinct and may not be the best way to do the work. 

The code for the adder is present in the repository called computer and operations, on my profile.

have a good day.



