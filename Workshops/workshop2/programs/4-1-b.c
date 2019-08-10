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
    for (i = 1; i < 2000000; i = 2*i){
        printf("%7d\n", i);
    }
    
    return 0;
}
