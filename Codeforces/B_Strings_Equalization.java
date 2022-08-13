/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

import java.util.Scanner;

class CF_1241B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int q=input.nextInt();
        while(q-->0){
            String s=input.next(),t=input.next();
            char[] sc=s.toCharArray(),tc=t.toCharArray();
            int eq=0;
            for(int i=0;i<sc.length;i++){
                for(int j=0;j<tc.length;j++){
                    if(sc[i]==tc[j]){
                        eq++;
                        break;
                    }
                }
            }
            if(eq>0) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
