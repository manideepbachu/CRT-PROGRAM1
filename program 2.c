variable:
	
	a=10 // integer size: 2 bytes., range : -32768 to 32767 %d
	b= 12.4 // float size ; 4 bytes ,range: 3.4e-34 to 3.4e+34 %f
	c=12.400000
	        // double  ., size : 8 bytes., range 3.4e-308 to 3.4e+308 %f
    c='a'; // 1 byte -128 to 127 %c
	str[10]="gitamhyd";
	///9
	/// 10 bytes
	%s
	long,short,signed,unsigned
	int 2 bytes
	long int 4 bytes
	-2146473648 to +2146473647
	unsigned int 0 to 65535
	unsigned char 0 to 255
	%u -- unsigned integer
	ASCII
	256 values
	A=65,,,,,,,,,,,,Z=90
	a=97,,,,,,,,,,,,z=122
	0=48,,,,,,,,,,,,,9=57
	space=' '=32
	int a=015; //(015)base8
	printf("%d",a);
	printf("%d",a); // decimal equalent of 15
	int b=0x17;
	printf("%x",b); //(17)base 16
	
Operators:
	
	1.Arthematic operators:
			+,-,/,*and %
		a=10,b=3
		a%b=1
	2. Logical Operators
		&& and 
		or ||
		not ||
		exp1 exp2 exp1&&exp2 exp1||exp2 |exp1
		T     T      T           T        F
		T     F      F           T        F
		F     T      F           T        T 
		F     F      F           F        T
	3. Relational operator
	  < <= > >= == !=
	 4. Assignment operator
	  =
	  +=, -=, /=, *= ---> compound assignments
	  a+=b--------> a=a+b
	5. Sizeof()
	   used to find size of datatype/literals/variable
	6.Conditional or ternary operator
	  exp1:exp2:exp3;
	  ---
	  if(exp1)
	  exp2;
	  else
	  exp3;
	7. increment/decrement operator
	   a=10;
	   ++a---->pre increment
	   a++---->post increment
	   --a---->pre decrement
	   a-- --->post decrement
	   
	8. Bitwise operators
	   & and
	   | or
	   ^ xor
	   << leftshift
	   >> rightshift
	   
	   a b a&b a|b a*b
	   0 0  0   0   0
	   0 1  0   1   1 
	   1 0  0   1   1
	   1 1  1   1   0
	   
 control statements :(selective statements)
 (decision making statements)
 1) simple if statement
 2) if else statement
 3) nested if  else statement
 4) elseif statement
 5) switch statement
 
   1) 
      if(exp)
      statement;
      
   2)
      if(exp) 
	  true-block-statements;
	  else
	  false-block-statements;
	  
   3)
      if(exp1)
	  {
	  	if(exp2)
	  	st1;
	  	else
	  	st2;
	  	else
		  st3;;
		}  
   4)
	 if(exp1)
	 st1;
	 else if(exp2)
	 st2;
	 else fi(exp3)
	 st3;
	 else 
	 st4;
	 
   5)
     switch(exp) 
	{
	case exp1:
	st1;
	break:
	case exp2:
	st2;
	break:
	case expn:
	stn;
	break:
		
		
	  } 
