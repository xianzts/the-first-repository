//项目实现：编写一程序，算出Π的近似值。取Π = (1 -1/3 + 1/5 -1/7 ...)*4
#include <iostream>
#include <Windows.h>
#include <math.h>     //含fabs()函数

using namespace std;

int main(void){
	int x,z;
	double y;
	y = 0;
	z = 0;
	for( x = 1; fabs(1.0/x) > 1e-8;x += 2){    //fabs()绝对值函数；1e-8 = 10的负8次方
		z += 1;
		if( z % 2 != 0){
			y = y + 1.0/x;
		}else{
			y = y - 1.0/x;
		}
	}
	y = y * 4;
	cout.precision(16);
	cout << "Π=" << y << endl;
	system("pause");
	return 0;
}