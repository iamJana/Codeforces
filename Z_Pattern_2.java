import java.util.*;

public class Z_Pattern_2 {

    public static void solution(){
            Scanner inp=new Scanner(System.in);
            int n=inp.nextInt();
            int arr[]=new int[n];
            int x=1;
            for(int i=0;i<n;i++)
            {
                arr[i]=x;
                x++;
            }
            int temp=n-2;
            for(int i=0;i<n;i++)
            {
                System.out.print(arr[i]);
                System.out.print(" ");
            }
            System.out.println();
            int t=n-2;
            for(int i=1;i<=temp;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(j==t)
                    {
                        System.out.print(arr[t]);
                        System.out.print(" ");
                    }
                    else
                    {
                        System.out.print(" ");
                        System.out.print(" ");
                    }
                }
                System.out.println();
                t--;
                
            }
            for(int i=0;i<n;i++)
            {
                System.out.print(arr[i]);
                System.out.print(" ");
            }
            inp.close();
        }
        public static void main(String[] args) {
            Scanner in=new Scanner (System.in);
            solution();
            in.close();
    
        }
}