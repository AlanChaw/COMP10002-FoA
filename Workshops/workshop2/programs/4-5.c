//
//  main.c
//
//  Created by 文彬 on 2019/8/14.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n = 0;
    printf("Enter numbers: ");
    while (scanf("%d", &n) == 1) {
        printf("%-4d|", n);
        for (int i = 0; i < n; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
