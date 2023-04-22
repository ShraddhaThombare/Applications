package Marvellous;

public class Arithematic
{
     public int Value1;
     public int Value2;

     public Arithematic(int A, int B)
     {
          Value1 = A;
          Value2 = B;
     }

     public int Addition()
     {
          return Value1 + Value2;
     }

     public int Substraction()
     {
          return Value1 - Value2;
     }
}

                    // javac  Arithematic.java     -d   .