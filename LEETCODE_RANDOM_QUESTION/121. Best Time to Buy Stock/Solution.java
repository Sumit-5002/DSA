import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        try {
            // Redirect input from input.txt
            System.setIn(new FileInputStream("input.txt"));
            
            // Redirect output to output.txt
            PrintStream out = new PrintStream(new FileOutputStream("output.txt"));
            System.setOut(out);
            
            // Your solution code starts here
            Scanner sc = new Scanner(System.in);
            
            // Example: Read input and process
            // int n = sc.nextInt();
            // System.out.println("Result: " + n);
            
            sc.close();
            
        } catch (FileNotFoundException e) {
            System.err.println("Error: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
