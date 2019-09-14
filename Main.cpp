#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <future>
#include <conio.h>

using namespace std;
using namespace this_thread;     // sleep_for, sleep_until
using namespace chrono_literals; // ns, us, ms, s, h, etc.
using chrono::system_clock;

//class to implement UI methods
class UI {
public:
	UI() {}

	void titleCard() {
		cout << "+---------------------------+" << endl;
		cout << "|    \"A Text Adventure\"     |" << endl;
		cout << "|            by             |" << endl;
		cout << "|      Spencer Trumbore     |" << endl;
		cout << "+---------------------------+" << endl << endl;
	}

	void intro() {
		cout << "Your mother warned you about getting into cars with strangers." << endl;
		cout << "She didn't say anything about vans, true, and it did have a" << endl;
		cout << "friendly moustache on the front bumper, but you knew the risks." << endl;
		cout << "Now you're waking up in the wilderness with no wallet and no clues..." << endl;
		pressEnterToContinue();
		cout << "...and there's something on your shoes." << endl;
	}

	void pressEnterToContinue() {

		using namespace std::literals;
		string str;

		auto f = std::async(std::launch::async, [str] {
			string userStr;
			//using _getch is not universal but it does prevent the loop from latently printing to the next line also
			userStr = _getch();
			//getline(cin, userStr);
			if (userStr == "") {
				cout << string(str.length(), '\b'); // go to front of line
				cout << string(str.length(), ' ');; //overwrite with spaces
				cout << string(str.length(), '\b'); // go to front of line
				return;
			}
		});

		while (f._Is_ready() == false/*f.wait_for(1s) != std::future_status::ready*/) {
			str = "Press ENTER to continue";
			cout << str;
			sleep_until(system_clock::now() + 0.5s); // wait a half-second
			cout << string(str.length(), '\b'); // go to front of line
			//repeat
			str += ".";
			cout << str;
			sleep_until(system_clock::now() + 0.5s); // wait a half-second
			cout << string(str.length(), '\b'); // go to front of line
			//repeat
			str += ".";
			cout << str;
			sleep_until(system_clock::now() + 0.5s); // wait a half-second
			cout << string(str.length(), '\b'); // go to front of line
			//repeat
			str += ".";
			cout << str;
			sleep_until(system_clock::now() + 0.5s); // wait a half-second
			cout << string(str.length(), '\b'); // go to front of line
			cout << string(str.length(), ' ');; //print spaces
			cout << string(str.length(), '\b'); // go to front of line
			sleep_until(system_clock::now() + 0.5s); // wait a half-second
		}
	}
};

int main()
{
	UI ui;
	//Title Card
	ui.titleCard();

	//Intro
	ui.intro();
	return 0;
}