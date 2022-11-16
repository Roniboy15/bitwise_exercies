//
//  bitwise_internet_exercises.c
//  bits_shachaf
//
//  Created by Jaron Treyer on 14.11.22.
//

#include <stdio.h>
#include <stdlib.h>

//check LSB least significant bit

/*
int main () {
    
    int num;
    
    printf("Type in number to check the LSB:\n");
    scanf("%d", &num);
    
    if(num & 1) printf("LSB of %d is on\n", num);
    else printf("LSB of %d is off\n", num);
    
    return 0;
}
 */

//Check if MSB is on

/*
int main () {
    
    char num;
    
    printf("Type in number to check the MSB:\n");
    scanf("%c", &num);
    
    int move = sizeof(num)*8;
    
    if(num>>(move-1) & 1)printf("MSB of %d is on\n", num);
    else printf("MSB of %d is off\n", num);
    
    return 0;
}
*/

//Check if n-th bit is on

/*
int main () {
    
    int num, n;
    
    printf("Type in number to check: (0-31)\n");
    scanf("%d", &num);
    
    printf("Type in the position of bit to check:\n");
    scanf("%d", &n);
        
    if(num >> n & 1)printf("%d rd bit of %d is on\n", n, num);
    else printf("%d rd bit of %d is off\n",n, num);
    
    return 0;
}
 */

//set n-th bit of number to (0)

/*
int main () {
    
    int num, n;
    
    printf("Type in number to check:\n");
    scanf("%d", &num);
    
    printf("Type in the position of bit to turn on: (0-31)\n");
    scanf("%d", &n);
            
    num >>= n;
    num |= 1;
    num <<= n;
    
    printf("Number after transformation: %d\n", num);
    
    return 0;
}
 */

//bit of highest order

/*
int main () {
    
    int num, i;
    
    printf("Type in number to check:\n");
    scanf("%d", &num);
    
    int size = sizeof(num) * 8 -1;
    
    for (i = size; i >= 0; i--) {
        if(num & 1<<i){
            printf("highest bit is: %d\n", i);
            return 5;
        }
    }
    
    return 0;
}
*/

//decimal to binary

int calcPower(int i, int sum);

int main () {
    
    int num;
    int size = sizeof(num)*8;
    int check = 1;
    int i = size;
    //    int sumDecimal = 0;
    
    printf("Type in the decimal number:\n");
    scanf("%d", &num);
    
    while (i > 0) {
        
        if(num & (check << (i-1))){
//            sumDecimal += (calcPower(i, 1));
            printf("%d", 1);
        }
        else printf("%d", 0);
        
        i--;
    
    }
    
    printf("\n");
    return 0;
       
}

int calcPower(int i, int sum){
    
    if(i == 0)return sum;
    
    sum *= 2;
    return calcPower(i-1, sum);
}





