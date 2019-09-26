//
//  exercise_structs.c
//
//  Created by Wenbin on 2019/9/26.
//  Copyright © 2019 wenbin. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define NAME_MAX 50
#define MARRIAGE_MAX 10
#define WORK_MAX 100
#define AUSTRALIA_SIZE 30000000
#define NEW_ZEALAND_SIZE 6000000

typedef struct{
    char title[NAME_MAX];
    char given_name[NAME_MAX];
    char middle_name[NAME_MAX];
    char famile_name[NAME_MAX];
} name_t;

typedef struct{
    int dd, mm, yyyy;
} date_t;

typedef struct{
    int yyyy;
    int net_income;
    int tax_liability;
    date_t tax_paid;
} working_year_t;

typedef struct{
    name_t title_name;
    date_t birth_date;
    
    date_t marriage_dates[MARRIAGE_MAX];
    name_t partner_names[MARRIAGE_MAX];
    date_t divorce_dates[MARRIAGE_MAX];
    
    int is_dead;
    date_t death_date;
    
    working_year_t working_years[WORK_MAX];
} person_t;


double average_death_age(person_t * country, int num);


int main(){
    person_t australia_people[AUSTRALIA_SIZE];
    person_t new_zeland_people[NEW_ZEALAND_SIZE];
    
    
    return 0;
}

double average_death_age(person_t * country, int num){
    int i;
    int total_age = 0;
    int dead_num = 0;
    for (i = 0; i < num; i++){
        person_t person = *(country+num);
        if(person.is_dead){
            dead_num++;
            total_age += (person.death_date.yyyy - person.birth_date.yyyy);
        }
    }
    return (double)total_age / dead_num;
}

double total_tax(person_t *country, int num, int yyyy){
    int i;
    int total = 0;
    for (i = 0; i < num; i++) {
        int tax_paid = (*(country+i)).working_years[yyyy].tax_liability;
        total += tax_paid;
    }
    return total;
}
