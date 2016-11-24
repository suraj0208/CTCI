import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


//change file name before compiling
public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int m = in.nextInt();
        int n = in.nextInt();
        String magazine[] = new String[m];
        for(int magazine_i=0; magazine_i < m; magazine_i++){
            magazine[magazine_i] = in.next();
        }
        String ransom[] = new String[n];
        for(int ransom_i=0; ransom_i < n; ransom_i++){
            ransom[ransom_i] = in.next();
        }
        
        HashMap<String, Integer> hm = new HashMap<>();
        
        for(int magazine_i=0; magazine_i < m; magazine_i++){
            hm.put(magazine[magazine_i], hm.containsKey(magazine[magazine_i]) ? hm.get(magazine[magazine_i])+1 : 1 );
        }
        
        for(int ransom_i=0; ransom_i < n; ransom_i++){
            if(hm.containsKey(ransom[ransom_i]) && hm.get(ransom[ransom_i])>0){
                hm.put(ransom[ransom_i],hm.get(ransom[ransom_i])-1);
            }else if (hm.containsKey(ransom[ransom_i]) && hm.get(ransom[ransom_i])==0){
                         System.out.println("No");
                         return;
                
            }
        }
         System.out.println("Yes");
        
    }
}

