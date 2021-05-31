import java.util.*;
class A_Even_Odds{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        long a=in.nextLong();
        long b=in.nextLong();
     Vector v=new Vector();
        int j=0;
        for(int i=1;i<=a;i++)
        {
            if (i%2!=0)
            {
                v.add(i);
                
            }
            
        }
        for(int i=1;i<=a;i++)
        {
            if (i%2==0)
            {
                v.add(i);
            }
            
        }
        System.out.print(v.elementAt((int)b-1));
        in.close();
    }
}