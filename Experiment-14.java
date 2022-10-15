import java.util.*;

public class PrimeNum {

    public static void main(String[] args) {

        int num,temp;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        num = sc.nextInt();

    for(int i=2;i<=num/2;i++)
    {
      temp=num%i;
      if(temp==0)
      {
        System.out.println("The Number is not Prime");
        System.exit(0);
      }
      else
      {
        System.out.println("The Number is Prime");
        System.exit(0);
      }
    }

    }
}