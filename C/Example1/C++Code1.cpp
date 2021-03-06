//Checking the numbers 0 - 100000 to see if the number is either prime, perfect, square, or triangular

#include <iostream>
#include <cmath>

using namespace std;

const int ARRAY = 100001;               //The Range

struct number_properties
{
	int number;
	bool prime, perfect, square, triangular;
};

bool isprime(int);
bool isperfect(int);
bool issquare(int);
bool istriangular(int);
void count_struct(int, int, number_properties[]);

int main()
{

	number_properties number_array[ARRAY];

	for (int i = 1; i < ARRAY; i++)  //Finding out the targets
	{
		number_array[i].number = i;
		number_array[i].prime = isprime(i);
		number_array[i].perfect = isperfect(i);
		number_array[i].square = issquare(i);
		number_array[i].triangular = istriangular(i);
	}
	//Calling the result function   
	count_struct(1, 100000, number_array);
	count_struct(1, 10000, number_array);
	count_struct(1, 20000, number_array);
	count_struct(10001, 20000, number_array);
	count_struct(1, 50000, number_array);
	count_struct(50001, 100000, number_array);

	return 0;
}
/*This function checks to see if the number is prime or not and
returns true or false*/

bool isprime(int prime_number)
{
	for (int i = 2; i < prime_number / 2; i++)
	{
		if (prime_number % i == 0)
			return true;
		else
			return false;
	}
}
/*This function checks to see if the number is perfect or not and
returns true or false*/

bool isperfect(int perfect_number)
{
	int temp_number = 0;
	for (int i = 1; i < perfect_number; i++)
	{
		if (perfect_number % i == 0)
			temp_number += i;
		if (temp_number == i)
			return true;
		else
			return false;
	}
	return false;
}
/*This function checks to see if the number is sqaure or not and
returns true or false*/

bool issquare(int square_number)
{
	int temp_number = 0;

	temp_number += sqrt((square_number * square_number));
	if (temp_number == square_number)
		return true;
	else
		return false;

}
/*This function checks to see if the number is triangular or not and
returns true or false*/

bool istriangular(int triangular_number)
{
	int temp_number = 0;

	for (int i = 1; temp_number <= triangular_number; i++)
	{
		temp_number = temp_number + i;
		if (temp_number == triangular_number);
		return true;
	}
	return false;
}
/* This function calls the other function and counts the amount of true that the
function calls in a given range and prints out the results */

void count_struct(int start, int end, number_properties number_array[])
{
	int count_prime = 0, count_perfect = 0, count_square = 0, count_triangular = 0;
	for (int i = start; i < end; i++)
	{

		if (number_array[i].prime)
			count_prime++;
		if (number_array[i].perfect)
			count_perfect++;
		if (number_array[i].square)
			count_square++;
		if (number_array[i].triangular)
			count_triangular++;
	}

	cout << "Range: " << start << " to: " << end << endl;
	cout << "The number of prime numbers are: " << count_prime << endl;
	cout << "The number of perfect numbers are: " << count_perfect << endl;
	cout << "The number of square numbers are: " << count_square << endl;
	cout << "The number of triangular numbers are: " << count_triangular << endl;
}
