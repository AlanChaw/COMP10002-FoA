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
    int i;
    int sum = 0;
    for (i = 1; i < 10; i++){
        sum = sum + i;
        printf("S(%2d) = %2d\n", i, sum);
    }
    
    return 0;
}
