import java.util.*;
class Random_Number_Generator_5{
    public static void solution(){
            Scanner sol=new Scanner(System.in);
            int a=sol.nextInt();
            int count=0;
            int xnext=a;
            while(xnext!=1){
            if (xnext%2==0)
            {
                xnext=xnext/2;
             
            }
            else{
                xnext=(3*xnext)+1;
               
            }
            count++;
        }
        System.out.print(count);
            sol.close();
        }
        public static void main(String[] args) {
            Scanner in=new Scanner (System.in);
            solution();
            in.close();
    
        }
}