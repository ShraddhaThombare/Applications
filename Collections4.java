import java.util.*;

class Book
{
    public String Name;
    public int Price;

    public Book(String s, int i)
    {
        this.Name = s;
        this.Price = i;
    }

    public void Display()
    {
        System.out.println("Book name : "+this.Name+" Price : "+this.Price);
    }
}

class Collections4
{
    public static void main(String arg[])
    {
        LinkedList <Book>lobj= new LinkedList<Book>();

        Book bobj1 = new Book("Let us C",400);
        Book bobj2 = new Book("Data Strctures",580);
        Book bobj3 = new Book("C++ Programming",980);
        Book bobj4 = new Book("Angular web development",790);
        
        lobj.add(bobj1);
        lobj.add(bobj2);
        lobj.add(bobj3);
        lobj.add(bobj4);

        Iterator iobj = lobj.iterator();
        Book bref = null;

        System.out.println("Elements of linked list are : ");
        while(iobj.hasNext())
        {
            bref = (Book)iobj.next();
            bref.Display();
        }

        lobj.clear();
    }
}