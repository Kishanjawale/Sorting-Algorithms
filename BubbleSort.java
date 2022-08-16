import java.lang.*;
import java.util.*;

import javax.security.sasl.SaslException;
import javax.swing.plaf.synth.SynthPasswordFieldUI;
class Array
{
    public int Arr[];
    public Array(int iSize)
    {
        Arr= new int[iSize];
    }
    public void Accept() //Accepting Array Elements 
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter Array Elements");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }
    public void Display() //Display Array Elements  
    {
        System.out.println("Array elements are:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]+" ");
        }
        System.out.println();
    }
    public void Bubble_Sort(char type ) // Sort the Array elements in Increasing or Decresing Order.
    {
        int i=0;
        int j=0;
        int temp=0;
        
        boolean swap = false;
        if(type == 'I' || type =='i')
        {
            for(i=0;i<Arr.length;i++)
            {
                for(j=0;j<Arr.length-i-1;j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        temp=Arr[j];
                        Arr[j]=Arr[j+1];
                        Arr[j+1]=temp;
                        
                        swap=true;
                    }
                }
            if(swap==false)
            {
                break;
            }
        }
    }
        else if(type == 'D' || type =='d')
        {
            for(i=0;i<Arr.length;i++)
            {
                for(j=0;j<Arr.length-i-j;j++)
                {
                    if(Arr[j] < Arr[j+1])
                    {
                        temp=Arr[j];     //   
                        Arr[j]=Arr[j+1]; // Logic for Swapping
                        Arr[j+1]=temp;   //   
                        
                        swap=true;
                    }
                }
                if(swap==false) 
                {
                    break;
                }
            }
        }
    }
}
    
class BubbleSort
{
    public static void main(String arg[])
    {

        Scanner sobj= new Scanner(System.in);
        System.out.println("Enter the size of array");
        int size= sobj.nextInt();
        Array aobj= new Array(size);
        aobj.Accept();
        aobj.Display();
        System.out.println("In Which order you want to Display ? \n for Increasing oeder enter 'I' \n for Decreasing order ppress 'D' ");
        char ch= sobj.next().charAt(0);
        
        aobj.Bubble_Sort(ch);
        System.out.println("After Sorting:");
        aobj.Display();

    }
}