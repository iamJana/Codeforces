import java.util.*;

class A_Anton_and_Letters {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String[] x = s.split("[{},]+");

        for (int i = 0; i < x.length; i++) {
            System.out.print(x[i]);
        }
        if (x.length == 0) {
            System.out.print('0');
        } else {
            LinkedHashSet<Character> set = new LinkedHashSet<>();   
            
            for(int i=0;i<x.length;i++)   
                set.add(x);   
        }
        in.close();
    }
}