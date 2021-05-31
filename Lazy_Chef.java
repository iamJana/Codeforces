import java.util.*;
class Lazy_Chef{
    public static void solution(){
            Scanner input=new Scanner(System.in);
            int x=input.nextInt();
            int m=input.nextInt();
            int d=input.nextInt();
            int one=x*m;
            int two=x+d;
            if (one>two){
                System.out.print(two);
            }
            else{
                System.out.print(one);
            }
            input.close();
        }
        public static void main(String[] args) {
            Scanner in=new Scanner (System.in);
            int t=in.nextInt();
            while(t-->0){
                solution();
            }
            
            in.close();
    
        }
}