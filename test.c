#include <stdio.h>
#include <stdlib.h>
#include <openssl/aes.h>

static const unsigned char key[] = {
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x34, 0x45, 0x55, 0x65, 0x43, 0x77, 0x33, 0x44,

};

int main()
{
    unsigned char text[]="asdf";
    unsigned char * enc_out = malloc(80*sizeof(char)); 
    unsigned char * dec_out = malloc(80*sizeof(char));

    AES_KEY aeskey;

    AES_set_encrypt_key(key, 128, &aeskey);
    AES_encrypt(text, enc_out, &aeskey);  


    AES_set_decrypt_key(key,128,&aeskey);
    AES_decrypt(enc_out, dec_out, &aeskey);

    int i;

    printf("original:\t");
    for(i=0;*(text+i)!=0x00;i++)
        printf("%X ",*(text+i));
    printf("\nencrypted:\t");
    for(i=0;*(enc_out+i)!=0x00;i++)
        printf("%X ",*(enc_out+i));
    printf("\ndecrypted:\t");
    for(i=0;*(dec_out+i)!=0x00;i++)
        printf("%X ",*(dec_out+i));
    printf("\n");
    free(enc_out);
    free(dec_out);

    return 0;
}
