#include <stdio.h>


typedef enum {
    GEAR_UP,
    GEAR_DOWN,
    GEAR_TRANSITION
} GearState;


void transition(GearState nextState) {
    printf("Transitioning to state: %d\n", nextState);
   
}

int main() {
    GearState currentState = GEAR_UP;

    
    while (1) {
       
        switch (currentState) {
            case GEAR_UP:
                
                printf("Gear is up\n");
                
                if (/* condition for transition to gear down */) {
                    transition(GEAR_TRANSITION);
                    currentState = GEAR_TRANSITION;
                }
                break;

            case GEAR_DOWN:
                
                printf("Gear is down\n");
                
                if (/* condition for transition to gear up */) {
                    transition(GEAR_TRANSITION);
                    currentState = GEAR_TRANSITION;
                }
                break;

            case GEAR_TRANSITION:
                
                printf("Transitioning...\n");
                
                
               
                if (/* condition for transition to gear up */) {
                    transition(GEAR_UP);
                    currentState = GEAR_UP;
                } else {
                    transition(GEAR_DOWN);
                    currentState = GEAR_DOWN;
                }
                break;
        }
    }

    return 0;
}
