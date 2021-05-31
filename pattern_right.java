import java.util.*;

/**
 * pattern_right
 */
public class pattern_right {

    public static void solution() {
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        if (a>=1 && a<=26){
        char[] arr = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                't', 'u', 'v', 'w', 'x', 'y', 'z' };
        for (int i = 0; i < a; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(arr[i]);
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    else{
        System.out.print("Invalid");
    }
        inp.close();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        solution();
        in.close();

    }
}