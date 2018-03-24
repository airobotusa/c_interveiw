/*
packed_struct
*/

struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;
} pack;

/*
https://www.tutorialspoint.com/cprogramming/c_structures.htm

Bit Fields
Bit Fields allow the packing of data in a structure.
This is especially useful when memory or data storage is at a premium.
Typical examples include −

Packing several objects into a machine word. e.g. 1 bit flags can be compacted.

Reading external file formats -- non-standard file formats could be read in, e.g., 9-bit integers.

C allows us to do this in a structure definition by putting :bit length after the variable. For example −

struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;
} pack;
Here, the packed_struct contains 6 members: Four 1 bit flags f1..f3, a 4-bit type and a 9-bit my_int.

C automatically packs the above bit fields as compactly as possible, provided that
the maximum length of the field is less than or equal to the integer word length of the computer.
If this is not the case, then some compilers may allow memory overlap for the fields
while others would store the next field in the next word.
*/