//
//  main.c
//  MyCTest
//
//  Created by 文彬 on 2019/7/30.
//  Copyright © 2019 wenbin. All rights reserved.
//

/* Determine if an input number is prime.
 */
#include <stdio.h>
#include <stdlib.h>


int
main(int argc, char *argv[]) {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j += 3) {
            if (i + j == 7) {
                break;
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }
    
    return 0;
}
