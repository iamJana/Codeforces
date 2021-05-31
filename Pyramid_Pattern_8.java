import java.util.*;
/**
 * Pyramid_Pattern_8
 */
public class Pyramid_Pattern_8 {

    public static void solution(){
            Scanner inp=new Scanner(System.in);
            int a=inp.nextInt();
            int ans=a*2;
            for (int i=1;i<=ans;i++)
            {
                if (i%2!=0)
                {
                    for (int j=1;j<=i;j++)
                    {
                        System.out.print("*");
                    }
                    System.out.println();
                }
            }
            inp.close();
        }
        public static void main(String[] args) {
            Scanner in=new Scanner (System.in);
            solution();
            in.close();
    
        }
}