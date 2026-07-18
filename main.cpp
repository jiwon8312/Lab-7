#include "alarm.h"
#include <array>

namespace JangJiwon2593266
{
	void printAlarmArray(const alarm a[], const int n)
	{
		for (int i = 0; i < n; ++i)
			std::cout << a[i];
	}
	void parVal(timeOfDay val) { val += 1; }
	void parRef(timeOfDay& ref) { ref += 1; }
	void parPtr(timeOfDay* ptr) { *ptr += 1; }
	timeOfDay retVal(timeOfDay val) { val += 1; return val; }
	timeOfDay& retRef(timeOfDay& ref) { ref += 1; return ref; }
	timeOfDay* retPtr(timeOfDay* ptr) { *ptr += 1; return ptr; }
}

int main()
{
	using namespace JangJiwon2593266;

	timeOfDay t{ 15,45 }; std::cout << val << ' ';
	parVal(val); std::cout << val << '\n';
	timeOfDay& ref(val); std::cout << ref << ' ';
	parRef(ref); std::cout << ref << '\n';
	timeOfDay* ptr(&val); std::cout << *ptr << ' ';
	parPtr(ptr); std::cout << *ptr << '\n';

	val = timeOfDay{ 12,30 };
	std::cout << val << ' ' << retVal(val) << '\n';
	std::cout << ref << ' ' << retRef(ref) << '\n';
	std::cout << *ptr << ' ' << *retPtr(ptr) << '\n' << std::endl;

	timeOfDay* tPtr{ new timeOfDay };
	tPtr->setHour(15);
	tPtr->setMinute(45);
	std::cout << *tPtr << std::endl;
	delete tPtr;

	//const int n{ 4 };
	//alarm a[n];
	//a[0] = alarm{ "morning", {8,0}, 1 };
	//a[1].setName("lunch"); a[1].setWakeTime({ 12,0 }); a[1].setActive(0);
	//a[2].input();
	//std::cin >> a[3];
	//printAlarmArray(a, n);

	//std::array<alarm, n> b;
	//for (int i = 0; i < b.size(); ++i)
	//	b.at(i) = a[i]; //b[i]
	//for (const auto& bi : b)
	//	bi.print();

	/*timeOfDay t1, t2;
	std::cout << "2 timeOfDay objects: \n";
	std::cin >> t1 >> t2;
	std::cout << t1 << " " << t2 << "\n";
	std::cout << ++t2 << '\n';
	std::cout << t2++ << '\n';
	std::cout << t2 << '\n';

	if (t1 == t2) std::cout << "same\n";
	else std::cout << "different\n";
	std::cout << t1 + t2 << std::endl;*/

	return 0;
}