//
//  main.c
//
//  Created by Wenbin on 2019/8/14.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int lines = 0;
    int chars = 0;
    int ch;
    printf("Enter text: \n");
    
    while ((ch = getchar()) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
    }
    printf("Lines: %8d\n", lines);
    printf("Chars: %8d\n\n", chars);
    
    return 0;
}
