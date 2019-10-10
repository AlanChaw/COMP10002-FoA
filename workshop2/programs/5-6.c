//
//  main.c
//
//  Created by Wenbin on 2019/8/14.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>

int sumOfFactors(int num){
    int sum = 0;
    for (int i = 1; i <= (num/2); i++)
        if (num % i == 0) {
            sum += i;
        }
    return sum;
}

int isAmicable(int i, int j){
    if (sumOfFactors(i) == j && sumOfFactors(j) == i)
        return 1;
    else
        return 0;
}

int main(int argc, const char * argv[]) {
    for (int i = 100; i < 10000; i++) {
        for (int j = i + 1; j < 10000; j++){
            if (isAmicable(i, j))
                printf("find pair: %d, %d\n", i, j);
        }
    }
    
    return 0;
}
