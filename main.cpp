#include "ArrayTemplate.h"


void calc_time(int hours, int minutes);
void calc_time(int minutes);

int main() {
    srand(time(0));
    calc_time(567);
    calc_time(1, 20);

    return 0;
}

void calc_time(int hours, int minutes) { //Перевантажені функції
    cout << "Time: " << hours*60 + minutes << endl;
}
void calc_time(int minutes) {
    cout << "Time: " << minutes/60  << ":" <<  minutes %60 << endl;
}