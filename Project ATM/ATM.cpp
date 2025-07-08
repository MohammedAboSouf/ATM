#include <iostream>
using namespace std;

/***** «·„ €Ì—«  *****/
int balance = 1000;
int clouds = 0;
int filing = 0;
int password = 0000;
int process_number = 0;
/****‰Â«Ì… «·„ €Ì—«   *****/

/*«· «»⁄ «·–Ì ÌŸÂ— «·ﬁ«∆„… «·—∆Ì”Ì…*/
void list() {
	cout << "***** The List *****" << endl;
	cout << "1:Balance " << endl;
	cout << "2:clouds " << endl;
	cout << "3:filing " << endl;
	cout << "4:Exit " << endl;
	cout << endl << endl;
}
/*   «»⁄ «·⁄„·Ì«   */

void Lion() {
	cout << "enter the password" << endl;
	cin >> password;

	do {

		if (password == 1234) {
			cout << "process number : " << endl;
			cin >> process_number;

			switch (process_number) {
			case 1:cout << "your balance is  " << balance << endl; break;

			case 2:cout << "Nots : your balance is  " << balance << endl;
				cout << "enter your amount" << endl;
				cin >> clouds;
				if (clouds > balance) {
					cout << "Sorry you can't withdraw this amount " << endl;
				}
				else {
					balance = balance - clouds;
					cout << "Now : your balance is  " << balance << endl;
				}break;

			case 3: cout << "your current balance is " << balance << endl << endl;
				cout << "enter your deposit money : ";
				cin >> filing;
				balance += filing;
				cout << "Now : your balance is  " << balance << endl; break;

			case 4:cout << "thank you" << endl; break;
			}
		}
		else {
			char NY = 'o';
			cout << " passwoed error , do you try again ? enter [Y] for  Yes or [N] for No" << endl;
			cin >> NY;

			if (NY == 'Y' || NY == 'y') {
				cout << "enter your password" << endl;
				cin >> password;
			}
			else {
				cout << "thank you" << endl;
				process_number = 4;
			}
		}
	} while (process_number < 4);
}


int main() {
	list();
	Lion();
	return 0;

	/*  *****  The End Program  *****  */
	/*  *****  Abo Adnan  *****  */
}
