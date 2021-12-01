#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//putting this here, might not use it
#include <stdbool.h>

//function prototype for the 'rotate' function 
void rotate(double *, double*, double);

//declared variables 
double xCoordinate;
double yCoordinate;
double degreesToRotate; 


int main (void){


//get the x coordinate from the user
printf("Please enter an x coordinate: ");
scanf("%lf", &xCoordinate);

//get the y coordinate from the user
printf("Please enter a y coordinate: ");
scanf("%lf", &yCoordinate);

//get the number of degrees to rotate from the user
printf("Please enter the number of degrees to rotate by: ");
scanf("%lf", &degreesToRotate);

rotate(&xCoordinate, &yCoordinate, degreesToRotate);


return 0;
}

void rotate(double *xCoordinate, double *yCoordinate, double degreesToRotate){
    double radians;
    double newX;
    double newY;
    //const double PI = 3.1415926535;

    //calculation for the radians
    radians = (M_PI / 180) * degreesToRotate;

    double cosCalc = cos(radians);
    double sinCalc = sin(radians);

    //calculate the xcoordinate
    newX = *xCoordinate * sinCalc + *yCoordinate * cosCalc;
    newY = *xCoordinate * cosCalc - *yCoordinate * sinCalc;

    //print the results to the terminal
    printf("The result is (%lf, %lf)\n", newX, newY);   

    //used to test
    //printf("%lf\n", radians);

    //used to test
    //printf("%lf\n", *xCoordinate);

    //used to test
    //printf("%lf\n", *yCoordinate);

    //used to test
    //printf("%lf\n", cosCalc);

    //used to test
    //printf("%lf\n", sinCalc;

    
}

