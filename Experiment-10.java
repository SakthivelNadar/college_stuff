import java.util.Scanner;

public class TableofNum {

    public static void main(String[] args) {

        int n,temp;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        n = sc.nextInt();
        System.out.println("The Table of "+n+" is:\n");
        for(int i=1;i<=10;i++)
  {
    temp=i*n;
    System.out.println(n+"x"+i+"="+temp);
  }
    }
}