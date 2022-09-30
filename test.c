#include <stdio.h>
#include "physics.h"

int main() {
    double F = UniversalGravitationLaw(5.972E24,55,6371000);
    printf("%lf", F);
    return 0;
}