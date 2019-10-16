#include <stdio.h>
#include <string.h>

#define LENGTH 100
typedef struct {
    char name[LENGTH];
    char orbits[LENGTH];
    double distance;
    double mass;
    double radius;
    
} planet_t;

int main(){
    planet_t earth = {"Earth", "Sun", 149.6, 5.9736e+24, 6738.1};
    planet_t moon = {"Moon", "Earth", 0.3844, 7.349e+22, 1738.1};
    planet_t another_planet = earth;
    
    printf("Input the information of another planet: \n");
    planet_t new_planet;
    scanf("%s %s %lf %lf %lf",
          new_planet.name,
          new_planet.orbits,
          &new_planet.distance,
          &new_planet.mass,
          &new_planet.radius
          );
    
    printf("name: %s\n", new_planet.name);
    printf("orbits: %s\n", new_planet.orbits);
    printf("distance: %lf\n", new_planet.distance);
    printf("mass: %lf\n", new_planet.mass);
    printf("radius: %lf\n", new_planet.radius);
    
    
    return 0;
}
//
//void printPlanet(planet_t planet){
//    printf("<#const char *restrict, ...#>")
//}
