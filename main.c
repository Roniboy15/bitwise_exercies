//
//  main.c
//  bits_shachaf
//
//  Created by Jaron Treyer on 10.11.22.
//

#include <stdio.h>

int main() {
    int x = 3;
    int y = 6;
    
    x>>=1;
    
    int*p = &x;
    
    printf("value of x:%d address of x:%p\nvalue of y:%d address of y:%p\n", x, &x, y, &y);
    
    return 0;
}
