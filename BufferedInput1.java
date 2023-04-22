import java.io.*;

class BufferedInput1
{
    public static void main(String A[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        
        //BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
        String name = null;
        int Age = 0;
        float marks = 0.0f;

        System.out.println("Enter your name : ");
        name = bobj.readLine();

        System.out.println("Enter your age : ");
        Age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter your marks : ");
        marks = Float.parseFloat(bobj.readLine());    

        System.out.println("Name : "+name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+marks);
    }
}