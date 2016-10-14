import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        
        if(time.substring(8).equalsIgnoreCase("AM")){
            if(time.substring(0,2).equalsIgnoreCase("12"))
                time = time.replaceFirst("12","00");
            time = time.substring(0,8);
        }else{
            if(!time.substring(0,2).equalsIgnoreCase("12"))
                time = time.replace(time.substring(0,2),String.valueOf(Integer.parseInt(time.substring(0,2)) + 12));
            time = time.substring(0,8);
        }
        
        System.out.println(time);
    }
}
