/* Exercise 3.6: Calculating change
 This is an ugly program, and if arrays and loops are used it can be made
 much more elegant, see Chapter 7.
 Alistair Moffat, March 2013.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_AMOUNT 1000
#define ROUND 1

#define COIN50 50
#define COIN20 20
#define COIN10 10
#define COIN5 05
#define COIN2 02
#define COIN1 01


int try_one_coin(int *cents, int coin);
void print_change(int cents);
int round_to_5(int cents);


int
main(int argc, char *argv[]) {
    int amount = 1;
    while (amount <= MAX_AMOUNT) {
        printf("Amount = %d\n", amount);
        if (ROUND)
            print_change(round_to_5(amount));
        else
            print_change(amount);
        
        amount++;
    }
    
    return 0;
    
    //    /* single test case */
    //    int amount;
    //    printf("Enter amount in cents: ");
    //    if (scanf("%d", &amount)!=1 || (amount<0) || (amount>MAX_CHANGE)) {
    //        /* the if statement is introduced in Chapter 3 */
    //        printf("Error in input\n");
    //        exit(EXIT_FAILURE);
    //    }
    //    print_change(round_to_5(amount));
    //    return 0;
}



int round_to_5(int cents){
    int remainder = cents % 5;
    int quotient = cents / 5;
    if (remainder >= 3){
        return 5 + 5 * quotient;
    }else{
        return 5 * quotient;
    }
}

int try_one_coin(int *cents, int coin){
    int times = 0;
    while (*cents >= coin) {
        times ++;
        *cents -= coin;
    }
    
    return times;
}

void print_change(int cents){
    int fifty, twenty, ten, five, two, one;
    fifty = try_one_coin(&cents, COIN50);
    twenty = try_one_coin(&cents, COIN20);
    ten = try_one_coin(&cents, COIN10);
    five = try_one_coin(&cents, COIN5);
    two = try_one_coin(&cents, COIN2);
    one = try_one_coin(&cents, COIN1);
    
    if (fifty)
        printf("give %3d %2dc coin\n", fifty, COIN50);
    if (twenty)
        printf("give %3d %2dc coin\n", twenty, COIN20);
    if (ten)
        printf("give %3d %2dc coin\n", ten, COIN10);
    if (five)
        printf("give %3d %2dc coin\n", five, COIN5);
    if (two)
        printf("give %3d %2dc coin\n", fifty, COIN2);
    if (one)
        printf("give %3d %2dc coin\n", fifty, COIN1);
    
    /* and now a final check */
    printf("amount remaining: %dc\n\n", cents);
    if (cents!=0) {
        printf("Looks like something is wrong for amount %d\n", cents);
        exit(EXIT_FAILURE);
    }
}
