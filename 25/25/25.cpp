//��Ŀʵ�֣���дһ����������Ľ���ֵ��ȡ�� = (1 -1/3 + 1/5 -1/7 ...)*4
#include <iostream>
#include <Windows.h>
#include <math.h>     //��fabs()����

using namespace std;

int main(void){
	int x,z;
	double y;
	y = 0;
	z = 0;
	for( x = 1; fabs(1.0/x) > 1e-8;x += 2){    //fabs()����ֵ������1e-8 = 10�ĸ�8�η�
		z += 1;
		if( z % 2 != 0){
			y = y + 1.0/x;
		}else{
			y = y - 1.0/x;
		}
	}
	y = y * 4;
	cout.precision(16);
	cout << "��=" << y << endl;
	system("pause");
	return 0;
}