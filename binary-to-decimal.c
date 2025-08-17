#include <stdio.h>
#include <string.h>

int main() {

    char bits[1000]; 
    int binary = 1;
    int decimal = 0;
    int power = 1;

    printf("Input your binary: "); 
    scanf("%s", bits); 

    int binaryIndex = strlen(bits);

    for(int i= binaryIndex-1; i >= 0; i--) {
        if(bits[i] == '1') {
            decimal += binary * power;
        } if(bits[i] == '0') {
            decimal = decimal;
        }
        power *= 2; 
    }

    printf("%d", decimal);
    return 0;
}