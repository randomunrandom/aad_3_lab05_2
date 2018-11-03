/*
 * created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 43
 * Дан массив размера N.
 * Найти номера двух ближайших элементов из этого массива
 * (то есть элементов с наименьшим модулем разности) и
 * вывести эти номера в порядке возрастания.
 */

int main() {
    cout << "нахождение номеров 2 ближайших элементов массива" << endl;
    Q z;
    int res1, res2;
    z.user_input();
    z.print();
    res1 = z.search(&res2);
    if(res1>res2) swap(res1, res2);
    cout << "первый эллемент = " << res1 << " со значением " << z.getA_n(res1);
    cout << ", второй элемент = " << res2 << " со значением " << z.getA_n(res2);
    return 0;
}