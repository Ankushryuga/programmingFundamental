/* BIG ENDIAN & LITTLE ENDIAN: Computers doesn't store the bytes in same order it depend on processor's endian.
ENDIANS:  it is ordering of bits, in computer . (NOTE: it only refers to how bytes are stored in memory, not to deal with them.

######  LITTLE ENDIANS: LOW ORDER BYTE IS STORED ON STARTING ADDRESS (A) AND HIGH ORDER BYTE IS STORED ON NEXT ADDRESS (A+1).
######  BIG ENDIAN: HIGH ORDER BYTE IS STORED ON STARTING ADDRESS (A) AND LOW ORDER BYTE IS STORED ON NEXT ADDRESS (A+1).

To allow machines with different byte order conventions to communicate with each other, the internet protocols specify canonical byte order to communicate over 
the internet, known as network byte order.

#32-BIT UNSIGNED INTEGAR:
  "HIGH-ORDER BYTE": is the one for the largest power of 2: 2^31......2^24.
  "LOW-LEVEL BYTE": is the one for the smallest power of 2: 2^7.......2^0.
  

NOTE: EACH BYTE HAS A UNIQUE ADDRESS IN MEMORY. EACH ADDRESS IDENTIFY 1 BYTE IN MEMORY.
===>  ADDRESS OF MUTLTI-BYTE OBJECT=LOWEST ADDRESS OF ALL BYTES IT CONTAINS.

EXAMPLE:
  ADDRESS           CONTENTS
0X20000003            0X04
0X20000002            0X03
0X20000001            0X02
0X20000000            0X01

WORD STORED AT: 0X20000000 
##### EITHER:   0X04030201 OR 0XO1O2O3O4. IT DEPENDS ON ENDIAN.
                    MSB                     LSB
                   BYTE3 | BYTE2 | BYTE1 | BYTE0
MSB: MOST SIGNIFICANT BYTE.
LSB: LEAST SIGNIFICANT BYTE.
LITTLE ENDIAN: LSB OF A WORD STORED AT THE SMALLEST MEMORY ADDRESS, AND THE MSB AT THE LARGEST ( if processor is based on little endian then word at 0X20000000 is:  0X01020304).
BIG ENDIAN:    MSB OF A WORD STORES IN OPPOSITE WAY, MSB AT THE LOWEST ADDRESS AND LSB AT THE LARGEST (if processor is based on big endian then word at 0X20000000 is: 0X04030201).

intel x86 and AMD64/x86-64 use little endian.
Atmel AVR32 and OpenRISC use big endian.
Arm Cortex-M supports both little endian and big endian
*/



/*  BITWISE OPERATOR: in computer everything works in bit, there are different types of bit operator.
1. & operator: 
A    B    A&B
1    0    0
0    1    0
1    1    1

2. | operator:
A    B    A|B
1    0    1
0    1    1
1    1    1

3. ~ operator:
A    ~A  
1    0   
0    1

4. ^ operator:  BITWISE XOR OPERATOR: if both bits are differnet then XOR of A^B is 1. following truth table.
A     B     A^B
1     0      1
0     1      1
0     0      0
1     1      0



