import java.util.*; 

class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter Plain Text: ");
        String plain = sc.nextLine();
        
        System.out.print("Enter Key for AutoKey Cipher: ");
        String key = sc.nextLine();
        key = key + plain.substring(0,plain.length()-1);
        
        String cipher1 = "";
        for(int i = 0;i < plain.length();i++){
            int ciphernum = (int)plain.charAt(i) + (int)key.charAt(i) - (97 - 1); 
            
            if(ciphernum > 122){
                ciphernum = ciphernum - 26;
            }
            
            cipher1 += (char)(ciphernum);
        }
        System.out.println("Cipher Text of AutoKey: " + cipher1);
        
//        =======================================================
        
        System.out.print("Enter Depth: ");
        int depth = sc.nextInt();
        String cipher2 = "";
        for(int i = 0;i <= depth - 1;i++){
            for(int j = i;j < cipher1.length();j = j+depth){
                cipher2 += cipher1.charAt(j);
            }
        }
        System.out.println("Cipher Text of Rail Fence: " + cipher2);
    }
}

