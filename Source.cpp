//Даниил Журавлёв
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
		недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник» и т.д.).*/
/*int day;
cin >> day;
switch (day) {
case 1: cout << "понедельник" << endl; break;
case 2: cout << "вторник" << endl; break;
case 3: cout << "среда" << endl; break;
case 4: cout << "четверг" << endl; break;
case 5: cout << "пятница" << endl; break;
case 6: cout << "суббота" << endl; break;
case 7: cout << "воскресенье" << endl; break;
default: cout << "ошибка" << endl;
}*/

//Case2. Дано целое число K. Вывести строку-описание оценки, соответствующей числу K (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»). Если K не лежит в диапазоне 1–5,
//то вывести строку «ошибка».
/*int K;
cin >> K;
switch (K) {
case 1: cout << "плохо" << endl; break;
case 2: cout << "неудовлетворительно" << endl; break;
case 3: cout << "удовлетворительно" << endl; break;
case 4: cout << "хорошо" << endl; break;
case 5: cout << "отлично" << endl; break;
default: cout << "ошибка" << endl;*/
//}

//Case3. Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести название соответствующего времени года («зима»,
//«весна», «лето», «осень»).
/*int month;
cin >> month;
switch (month) {
case 1:
case 2:
case 3: cout << "зима\n"; break;
case 4:
case 5:
case 6: cout << "весна\n"; break;
case 7:
case 8:
case 9: cout << "лето\n"; break;
case 10:
case 11:
case 12: cout << "осень\n"; break;
default: cout << "ошибка" << endl;
}*/

/*Case4◦
.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.*//*int month;
cin >> month;
switch (month) {
case 1:
case 3:
case 5:
case 7:
case 12: cout << "31 день\n"; break;
case 2:  cout << "28 день\n"; break;
case 4:
case 6:
case 9:
case 11: cout << "30 день\n"; break;
default: cout << "ошибка" << endl;*/
//}

/*Case5.Арифметические действия над числами пронумерованы следующим
образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
номер действия N(целое число в диапазоне 1–4) и вещественные числа A
и B(В не равно 0).Выполнить над числами указанное действие и вывести
результат.*/
/*int a, b, c;
double d;
cin >> a >> b >> c;
switch (a) {
case 1:d = c + b; break;
case 2:d = c - b; break;
case 3:d = c * b; break;
case 4:d = c / b; break;
default: cout << "ошибка" << endl;
}
cout << d;*/

/*Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр,
2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер
единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих
единицах(вещественное число).Найти длину отрезка в метрах.*/
/*int l, d;
double b;
cin >> l >> d;
switch (l) {
case 1: b = d * 0.1; break;
case 2: b = d * 1000; break;
case 3: b = d; break;
case 4: b = d * 0.001; break;
case 5: b = d * 0.01; break;
default: cout << "ошибка" << endl;
}
cout << b;*/

/*Case7.Единицы массы пронумерованы следующим образом : 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер.Дан номер единицы массы(целое число в диапазоне 1–5) и масса тела в этих единицах
(вещественное число).Найти массу тела в килограммах.*/
/*int a;
double b, c;
cin >> a >> b;
switch (a) {
case 1: c = b / 10; cout << c; break;
case 2: c = b * 1000; break;
case 3: c = b; break;
case 4: c = b / 1000 ; break;
case 5: c = b / 100; break;
}
cout << c << " " << "метров\n";*/

//Case10.Робот может перемещаться в четырех направлениях(«С» — север,
//	«З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды : 0 — продолжать движение, 1 — поворот налево, −1 — поворот
//	направо.Дан символ C — исходное направление робота и целое число N
//	— посланная ему команда.Вывести направление робота после выполнения полученной команды.
	char c;
	int n ;
	switch (c) {
	case 'З':
		switch (n) {
		case -1: cout << "Север" << endl; break;
		case 0: cout << "Запад" << endl; break;
		case 1: cout << "Юг" << endl; break;
		}
	case 'С':
		switch (n) {
		case -1: cout << "Восток" << endl; break;
		case 0:cout << "Север" << endl; break;
		case 1:cout << "Запад" << endl; break;
		}
	case 'Ю':
		switch (n) {
		case -1: cout << "Запад" << endl; break;
		case 0:cout << "Юг" << endl; break;
		case 1:cout << "Восток" << endl; break;
		}
	case 'В':
		switch (n) {
		case -1: cout << "Юг" << endl; break;
		case 0:cout << "Север" << endl; break;
		case 1:cout << "Запад" << endl; break;
		}

	return 0;
}