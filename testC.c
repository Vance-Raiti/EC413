#include <stdio.h>
// SOLUTION FILE

int main()
{
  int var_int;                    // 2
    signed long a;
    signed char b;
    
  unsigned char uchar1, uchar2;   // 3
  signed char schar1, schar2;


  int x, y;                       // 4

  char i;                         // 5
  char shift_char;

  int A[10] = {0,10,20,30,40,50,60,70,80,90};    // 6

  int B[10], C[10];               // 7
  int *ip, *ip2;
  int j, k;

  char AString[] = "HAL";           // 8

  // 1 -- change "World" to your name
  printf("\n\n PART 1 ---------\n");

  printf("\n Hello World! \n");

  // 2 -- find sizes of the other C datatypes
  printf("\n\n PART 2 ----------\n");
printf("int: %d, long: %d, char: %d ",sizeof(var_int),sizeof(a),sizeof(b));

  printf("\n size of data type int = %d ", sizeof(var_int));


  // 3 -- explore signed versus unsigned datatypes and their interactions
  printf("\n\n PART 3 ----------\n");

  uchar1 = 0xFF;
  uchar2 = 0xFE;
  schar1 = 0xFF;
  schar2 = 0xFE;
  printf("\n uchar1 = %d ", uchar1);
  printf("\n schar1 = %d ", schar1);
    if (uchar1 > uchar2) {
        printf("\nuchar1 is larger");
    } else {
        printf("\nuchar2 is larger");
    }

    if (schar1 > schar2) {
        printf("\nschar1 is larger");
        }else {
            printf("\nschar2 is larger");
        
    }
    
    if (schar1 > uchar1){
        printf("\nschar1 is larger");
    } else {
        printf("\nuchar1 is larger");
    }

    printf("\n The sum of schar1 and schar2 is %d",schar1+schar2);
    printf("\n The sum of uchar1 and uchar2 is %d",uchar1+uchar2);

    printf("\n The sum of schar1 and uchar1 is",uchar1+schar1);

  // 4 -- Booleans
  printf("\n\n PART 4 ----------\n");
  printf("\nBoolean true: %d, Boolean false: %d",0==0,0!=0);
  printf("\nSize of Boolean: %d",sizeof(0==0));
  x = 1; y = 2;
    printf("\n1&&2 => %d 1&2 => %d", x&&y,x&y);
    printf("\n ~1 => %d !1 => %d",~x,!x);



  // 5 -- shifts
  printf("\n\n PART 5 ----------\n");

  shift_char = 15;
  i = 1;
  printf("\nshift_char: %c",shift_char);
    printf("\nShifted shift_char: %c %c",shift_char>>1, shift_char<<1);
  printf("\n shift_char << %c = %c", i, shift_char << i);
    printf("\nShifted 4 left: %c", shift_char << 4);
    printf("\nShfiter 8 left: %c", shift_char << 8);

  // 6 -- pointer basics
  printf("\n\n PART 6 ----------\n");

  ip = A;
  printf("\nstart %d %d %d %d %d %d %d \n",
	 A[0], *(ip), *(ip+1), *ip++, *ip, *(ip+3), *(ip-1));
  ip = A;
  printf("\nmodified %d %d %d %d %d %d %d \n",
	 A[0+1], *(ip+1), *(ip+1), *((ip++)+1), *(ip+1), *(ip+4), *(ip));
  int fed = 1;
  printf("\nsize of int pointer: %d",sizeof(&fed));
  printf("\naddress of a: %x",a);

  // 7 -- programming with pointers
  printf("\n\n PART 7 ----------\n");
  for (int i = 0; i<10; i++){
    B[i] = A[9-i];
  }
  for (int i = 0; i<10; i++){
    *(C+i)=*(A+9-i);
  }
  printf("\n");
  for (int i = 0; i<10; i++){
    printf("%d ",B[i]);
  }
  printf("\n");
  for(int i = 0; i < 10; i++){
    printf("%d ",C[i]);
  }

  // 8 -- strings
  printf("\n\n PART 8 ----------\n");

  printf("\n %s \n", AString);
  printf("\nAscii values: ");
  for (int i = 0; AString[i]!='\0'; i++){
    printf("%c ",AString[i]);
  }
  printf("\nLast byte: %d ",AString[i]);
  printf("\nIncremented Ascii Values: ");
  for (int i = 0; AString[i]!='\0'; i++){
    printf("%c ",AString[i]+1);
  }
  printf("\nIncremented by 60 Ascii Values: ");
  for (int i = 0; AString[i]!='\0'; i++){
    printf("%c ",AString[i]+60);
  }
  


  // 9 -- address calculation
  printf("\n\n PART 9 ----------\n");
  
  for (k = 0; k < 10; k++) {
    B[k] = A[k];         // direct reference to array element
    printf("%x ",(B+k));
  }
  ip = A;
  ip2 = B;
  printf("\n");
  for (k = 0; k < 10; k++) {
    printf("%x ",ip);
    *ip2++ = *ip++;     // indirect reference to array element
    
  }
  // all done
  printf("\n\n ALL DONE\n");
  return 1;
}