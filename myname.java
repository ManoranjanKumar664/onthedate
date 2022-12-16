import java.util.Scanner;
import java.lang.System;

class myname
{
 int a, b, c
  void show()
 {
   System.out.println("this is my first program on this project");
 }
 
 void input()
 {
// this is only for inputs
 }
 
 public static void main(String []args)
 {
 System.out.println("enter any two no.");
 Scanner mano=new Scanner(System.in);
 myname baskey=new myname();
 baskey.a=mano.nextInt();
 baskey.b=mano.nextInt();
 baskey.c=baskey.a+baskey.b;
 System.out.prinln("sum="+baskey.c);
  baskey.show();
 }
 }
 
