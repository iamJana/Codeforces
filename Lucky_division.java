import java.util.*;
public class Lucky_division{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        if (a%4==0 || a%47==0)
        {
            System.out.print("YES");
        }
        else
        {
            System.out.print("NO");
        }
        in.close();
    }
}