#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} vector_t;

double distance(vector_t p1, vector_t p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
    vector_t p1, p2;
    
    printf("Input vector p1: \n");
    scanf("%lf %lf", &p1.x, &p1.y);
    
    printf("Input vector p2: \n");
    scanf("%lf %lf", &p2.x, &p2.y);
    
    double dist = distance(p1, p2);
    printf("The distance is: %lf\n", dist);
    
    return 0;
}
