#include <iostream>
using namespace std;


double f(double x)
{
    double result = (x*x);
    return result;
}

double integralFunction(int upperLimit, int lowerLimit, double deltax)
{
    double calculatedArea = 0.0;
    double smallRectangle;
    double rectangleLength;
    double rectangleWidth = deltax;

    int numberOfRectangles = (upperLimit-lowerLimit)/deltax;

    for(int i=0; i<numberOfRectangles; i++)
    {
        rectangleLength = f(i*deltax);
        smallRectangle = rectangleLength * rectangleWidth;
        calculatedArea = calculatedArea +  smallRectangle;
    }
    return calculatedArea;
}

int main()
{
    double deltax = 0.001;
    double sum = integralFunction(6,0,deltax);

    cout<<sum<<endl;

  return 0;
}