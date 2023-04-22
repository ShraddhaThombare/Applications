
class Base
{
     public int A,B;
     public Base()
     {
          System.out.println("Base constructor");
          this.A = 10;
          this.B = 20;
     }
     public void fun()   // Defination
     {
          System.out.println("Inside Base fun");
     } 
     public void gun()   // Defination
     {
          System.out.println("Inside Base gun");         
     }
     public void fun(int No)  // Overloaded Defination
     {
          System.out.println("Inside Base fun with one integer");
     } 
}
class Derived extends Base    // class Derived : public Base
{
     public int X,Y;
     public Derived()
     {
          System.out.println("Derived constructor");
          this.X = 30;
          this.Y = 40;
     }
     public void sun()   // Defination
     {
          System.out.println("Inside Derived sun");         
     }
     public void gun()   // Overrided Defination
     {
          System.out.println("Inside Derived gun");
     }
}

class Single
{
     public static void main(String arg[])
     {
        //  Base bobj1 = new Base();           // No casting
        //  Derived dobj1 = new Derived();     // No casting
          Base bobj2 = new Derived();        // Upcasting
        //   Derived dobj2 = new Base();        // Downcasting (Not allowed)

        bobj2.fun();          // Base fun
        bobj2.fun(11);        // Base fun
        bobj2.gun();          // Derived gun
        //bobj2.sun();          // Derived sun
     }
}