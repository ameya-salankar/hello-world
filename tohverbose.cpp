#include <iostream>
#include <iomanip>

using namespace std;

long long toh(int disks, char peg1 = '1', char peg2 = '2', char peg3 = '3');

int main (void)
{
	int disks;

	cout << "Enter number of disks: ";
	cin >> disks;

	cout << "No. of moves: "<< toh(disks) << endl;
}

long long toh(int disks, char peg1, char peg2, char peg3)
{
	long long k = 0;

	if(disks == 1)
	{
		cout << "Moving top disk from peg " << peg1 << " to peg " << 			peg3 << endl;
		return 1;
	}
	else
	{
		k = toh(disks - 1, peg1, peg3, peg2);
		
		cout << "Moving top disk from peg " << peg1 << " to peg " << 			peg3 << endl;
		k++;

		k += toh(disks - 1, peg2, peg1, peg3);

		return k;
	}
}
