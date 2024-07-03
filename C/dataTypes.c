#include<stdio.h>
#include<stdbool.h>

int main()
{
    char a = 'C';//single charcter %c
    char b[]="Bro";//array of characters %s
    float c = 3.14192;//%f 4 bytes 32 bit 6-7
    double d = 3.141592653589793;// %lf 8 bytes 64 bit 15-16
    bool e = true;//1 byte (true or false)%d
    char f = 100;// 1 byte (-128 to +127) %d or %c
    unsigned char g = 256;//1 byte (0 to +255) %d or %c
    short int h = 32767;//2 bytes %d
    unsigned short int i = 65535; // 2 bytes
    int j = 2147483647;//4 bytes %d
    unsigned int k = 4294967295;//4 bytes %u
    long long int l = 98876544567890865;//8 bytes %lld
    unsigned long long int m = 123456780088654324U;//8 bytes %llu

    printf("%c\n",a);
    printf("%s\n",b);
    printf("%f\n",c);
    printf("%lf\n",d);
    printf("%d\n",e);
    printf("%c\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);


}