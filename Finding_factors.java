import java.util.*;
class Finding_factors{
    public static void solution(){
            Scanner inp=new Scanner(System.in);
            int a=inp.nextInt();
            Vector<Integer> v=new Vector<Integer>();
            for(int i=1;i<=a;i++)
            {
                if(a%i==0)
                {
                    v.add(i);
                }
            }
            for(int i=0;i<v.size();i++)
            {
                System.out.print(v.elementAt(i));
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