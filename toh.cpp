#include <iostream>
#include <iomanip>

using namespace std;

long long toh(int);

int main (void)
{
	int disks;

	cout << "Enter number of disks: ";
	cin >> disks;

	cout << toh(disks) << endl;
}

long long toh(int disks)
{
	if(disks == 1)
		return 1;
	else
		return ((2 * toh(disks - 1)) + 1);
}
