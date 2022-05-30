#include <iostream>
using namespace std;

int weigh()
{
	double height;
	double weight;

	cout << "Enter your height : ";
	cin >> height;

	cout << "Enter your weight : ";
	cin >> weight;

	if (weight > height - 100)
	{
		cout << "You should lose weight\n\n";
	}

	else if (weight < height - 100)
	{
		cout << "You should gain weight\n\n";
	}

	else if (weight == height - 100)
	{
		cout << "You have ideal weight\n\n";
	}

	return 0;
}


int date()
{
	int year;
	int month;
	int day;

	cout << "Enter year : ";
	cin >> year;

	cout << "Enter month : ";
	cin >> month;

	cout << "Enter day : ";
	cin >> day;

	if (year >= 1 && year <= 2022 && month >= 1 && month <= 12 && day >= 1)
	{
		if (year % 4 == 0)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day <= 31)
			{
				cout << "Date is correct";

				if (month != 12 && day != 31)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else if (month == 12 && day == 31)
				{
					cout << "\nNext date is " << year + 1 << "." << 1 << "." << 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else if (month == 2 && day <= 29)
			{
				cout << "Date is correct";

				if (day != 29)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else if (day <= 30)
			{
				cout << "Date is correct";

				if (day != 30)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else
			{
				cout << "Date is not correct";
			}
		}

		else
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day <= 31)
			{
				cout << "Date is correct";

				if (month != 12 && day != 31)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else if (month == 12 && day == 31)
				{
					cout << "\nNext date is " << year + 1 << "." << 1 << "." << 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else if (month == 2 && day <= 28)
			{
				cout << "Date is correct";

				if (day != 28)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else if (day <= 30)
			{
				cout << "Date is correct";

				if (day != 30)
				{
					cout << "\nNext date is " << year << "." << month << "." << day + 1 << "\n\n";
				}

				else
				{
					cout << "\nNext date is " << year << "." << month + 1 << "." << 1 << "\n\n";
				}
			}

			else
			{
				cout << "Date is not correct";
			}
		}
	}

	else
	{
	cout << "Date is not correct";
	}

	return 0;
}


int cels()
{
	srand(time(0));
	rand();

	int c;

	cout << "Enter C : ";
	cin >> c;


	if (c >= 15 && c <= 30)
	{
		cout << "warm!\n";
	}

	else if (c >= 31)
	{
		cout << "hot!\n";
	}

	else if (c >= 0 && c <= 14)
	{
		cout << "cool\n";
	}


	else if (c >= -20 && c <= -1)
	{
		cout << "cold!\n";
	}

	else
	{
		cout << "Stay at home!\n";
	}


	int r = rand() % 11 - 5;
	c += r; 

	cout << c << "\n\n";

	return 0;
}


int eggs()
{
	int chicken;
	double price;
	int egg;
	double egg_price;

	cout << "Enter count of chickens, price per chiken, eggs per week, egg price (10) : ";
	cin >> chicken >> price >> egg >> egg_price;

	double cost = chicken * price;
	double earnings = egg * (price / 10) / 7;
	int result = cost / earnings;

	cout << result << "\n\n";

	return 0;
}


int main()
{
	weigh();
	date();
	cels();
	eggs();
}