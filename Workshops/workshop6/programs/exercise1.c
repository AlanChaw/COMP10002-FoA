//
//  main.c
//  assign1
//
//  Created by wenbin on 2019/9/11.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int is_subsequence(char *s1, char *s2);

int main(int argc, const char * argv[]) {
    char *a = "bee";
    char *b = "abbreviate";
    
    printf("%s\n", a);
    printf("%s\n", b);
    
    if(is_subsequence(a, b))
        printf("s1 is sub-sequence of s2\n");
    else
        printf("s1 is not sub-sequence of s2\n");
    
    return 0;
}

int is_subsequence(char *s1, char *s2){
    int i, j;
    j = 0;
    for (i = 0; i < strlen(s1); i++) {
        while (j < strlen(s2)) {
            if (s1[i] == s2[j]){
                printf("match\n");
                printf("i = %d\n", i);
                printf("j = %d\n", j);
                if (i == (strlen(s1) - 1))
                    return 1;
                j++;
                break;
            }
            j++;
        }
    }

    return 0;
}
