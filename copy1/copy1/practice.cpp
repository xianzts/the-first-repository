//��Ŀʵ�֣����쳲��������е�k���ֵ�������ǰһ��͵�ǰ��ı�ֵ
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void){
	double num1,num2,numi;
	int i,k;
	double ratio;
	num1 = 1;
	num2 = 1;
	i = 2;
	while(1){
		cout << "������Ҫ��쳲��������еĵڼ��";
	    cin >> k;
		if( k == 1 || k == 2){
			cout << "��" << k << "��ֵΪ��" << 1;  //��һ��͵ڶ���
			break;
		}else if( k >= 3){
			while( i < k){
				numi = num1 + num2;
				num2 = num1;
				num1 = numi;
				i++;                  //��i���ֵ
				ratio = num2/num1;    //��ֵ
			cout << "��" << i << "��ֵΪ��" << numi;
			cout.precision(15);       //ȡ15λ��Ч����
			cout << "   ��ֵΪ��" << ratio << endl;
			}
			break;
		}else{
			cout << "�������!" << endl;
			cin.clear();
			cin.sync();               //δ�������ֵ����
		}
	}
	system("pause");
	return 0;
}