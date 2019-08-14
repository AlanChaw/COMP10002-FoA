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
    int words = 0;
    int ch;
    int inaword = 0;
    printf("Enter text: \n");
    
    while ((ch = getchar()) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            inaword = 1;
        } else if(inaword == 1) {
            inaword = 0;
            words++;
        }
        
    }
    printf("Lines: %8d\n", lines);
    printf("Chars: %8d\n", chars);
    printf("Words: %8d\n\n", words);
    
    return 0;
}
