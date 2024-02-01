#include<stdio.h>
#include<string.h>

int main(){
    char text[100] = "hello bob";
    char key[100] = "usifj evk";
    
    printf("Plain Text: %s", text);
    printf("\nOTP of the same length as KEY: %s", key);

    // ----------------------------------- ENCRYPTION -----------------------------------
    char encrypt[100];
    int i = 0;
    while(text[i] != '\0'){
        if(text[i] == ' '){
            encrypt[i] = ' ';
        } else {
            int text_num = (int)text[i];
            int key_num = (int)key[i];

            int encrypt_num = text_num + key_num;
            if(encrypt_num > 122){
                encrypt_num = encrypt_num - 26;
            }
            encrypt[i] = (char)encrypt_num;
        }

        i++;
    }
    printf("\nEncrypted Text: %s", encrypt);

    // ----------------------------------- DECRYPTION -----------------------------------
    char decrypt[100];
    i = 0;
    while(encrypt[i] != '\0'){
        if(encrypt[i] == ' '){
            decrypt[i] = ' ';
        }
        else{
            int encrypt_num = (int)encrypt[i];
            int key_num = (int)key[i];

            int decrypt_num = encrypt_num - key_num;
            if(decrypt_num < 97){
                decrypt_num = decrypt_num + 26;
            }
            decrypt[i] = (char)decrypt_num;
        }

        i++;
    }
    printf("\nDecrypted Text: %s", decrypt);

    return 0;
}
