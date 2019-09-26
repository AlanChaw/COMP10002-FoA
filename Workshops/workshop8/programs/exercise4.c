//
//  exercise4.c
//
//  Created by Wenbin on 2019/9/26.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *string_dupe(char *s);

int main(){
    char *h = "hello";
    char *dupe_h = string_dupe(h);
    printf("%s\n", h);
    printf("%s\n", dupe_h);
    
    printf("%p\n", h);
    printf("%p\n", dupe_h);
}

char *string_dupe(char *s){	
    char *dupe = (char *)malloc(strlen(s)*sizeof(char)+1);
    strcpy(dupe, s);
    return dupe;
}

