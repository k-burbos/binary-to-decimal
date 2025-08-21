#include <stdio.h>
#include <string.h>

int main() {

    char bits[1000]; 
    int decimal = 0;
    int power = 1;

    printf("Input your binary: "); 
    scanf("%s", &bits); 

    int binaryIndex = strlen(bits);

    for(int i= binaryIndex-1; i >= 0; i--) {
        int binary = bits[i] - 48; 
        if(binary < 0 || binary > 1) {
            printf("This is not a valid binary number.");
            return 0;
        }
        decimal += binary * power;
        power *= 2; 
    }

    printf("%d", decimal);
    return 0;
}