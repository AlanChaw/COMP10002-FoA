/* Exercise 7.16 in Programming, Problem Solving, and Abstraction
 
 Read text, break it in to words, count the frequency of each word
 
 Alistair Moffat, October 2013.
 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXCHARS 10      /* Max chars per word */
#define MAXWORDS 1000    /* Max distinct words */

typedef char word_t[MAXCHARS+1];
int getword(word_t W, int limit);

int
main(int argc, char *argv[]) {
    word_t one_word, all_words[MAXWORDS];
    int word_freqs[MAXWORDS];
    int numdistinct=0, totwords=0, i, found, found_at;
    while (getword(one_word, MAXCHARS) != EOF) {
        totwords = totwords+1;
        /* linear search in array of previous words... */
        found = 0;
        for (i=0; i<numdistinct && !found; i++) {
            found = (strcmp(one_word, all_words[i]) == 0);
            found_at = i;
        }
        if (found) {
            word_freqs[found_at]++;
        } else if (!found && numdistinct<MAXWORDS) {
            strcpy(all_words[numdistinct], one_word);
            word_freqs[numdistinct] = 1;
            numdistinct += 1;
        }
        /* NB - program silently discards words after
         MAXWORDS distinct ones have been found */
    }
    printf("%d words read\n", totwords);
    for (i=0; i<numdistinct; i++) {
        printf("word #%d is %-20s", i, all_words[i]);
        printf(" and appears %3d times\n", word_freqs[i]);
    }
    return 0;
}



/* Extract a single word out of the standard input, of not
 more than limit characters. Argument array W must be
 limit+1 characters or bigger. */
int
getword(char W[], int limit) {
    int c, len=0;
    /* first, skip over any non alphabetics */
    while ((c=getchar())!=EOF && !isalpha(c)) {
        /* do nothing more */
    }
    if (c==EOF) {
        return EOF;
    }
    /* ok, first character of next word has been found */
    W[len++] = c;
    while (len<limit && (c=getchar())!=EOF && isalpha(c)) {
        /* another character to be stored */
        W[len++] = c;
    }
    /* now close off the string */
    W[len] = '\0';
    return 0;
}
