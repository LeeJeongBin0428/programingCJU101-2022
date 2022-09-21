#include <stdio.h>


int main(void)
{
	double weight;
	double cmhight;

	printf("Weight(kg)¿Í height(cm) Input:");
	scanf_s("%.1lf %.1f", $weight, $cmhight);

	cm /= 100;
	double BMI = weight / (cmhight * cmhight);
	if (BMI >= 20.0 && BMI <= 25.0) printf("standard") else ("Non standard");
	
	return 0;

}