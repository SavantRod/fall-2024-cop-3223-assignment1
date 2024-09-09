#include <stdio.h>
#include <math.h>  // to add math functions

#define PI 3.14159
double distanceValue(){
    double x1, y1, x2, y2, xf, yf, distance;

    // Asking input from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Printing out points
    printf("Point #1 entered: %.2lf ; %.2lf\n",x1,y1);
    printf("Point #2 entered: %.2lf; %.2lf\n",x2,y2);
    
    // calculating the distance between the points
    xf = (x2-x1);
    yf = (y2-y1);
    distance = sqrt(pow(xf, 2) + pow(xf, 2));
    
    return distance;

}
double calculateDistance() {
    double calculated_distance = distanceValue();

    printf("The distance between the two points is: %.2lf\n", calculated_distance);
    
    return calculated_distance;
}

// calculate the perimeter of the circle (diameter)
double calculatePerimeter() {
    double distance = distanceValue();
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return perimeter;
}

// calculate the area of the circle (diameter)
double calculateArea() {
    double distance = distanceValue();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);
    
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return area;
}

// calculate the width of the city (diameter)
double calculateWidth() {
    double distance = distanceValue();
    
    printf("The width of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}

// calculate the height of the city (diameter)
double calculateHeight() {
    double distance = distanceValue();
    
    printf("The height of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}

// Main function
int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}
