//��Ŀʵ�֣�������������������׵Ļ��ᣬ����Է��������Ȥ��Ͷ���ж������ֵ����ͥ����״��������ֱ�ӷ�����
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void blind_date(){
	int i,salary;
	string words;
	string houseRet;
	string carRet;
	i = 0;
	string hobby[] = {"������","������","������"};

	while( i < 3 ){
		cout << "������ĵ�" << i+1 << "�����ס�" << endl;
		cout << "��ϲ��" << hobby[i] << "����ϲ����" << endl;
		cin >> words;
		if ( words == "ϲ��"){
			cout << "��������Ȥ��ͶŶ~" << endl;
			Sleep(1000);
			cout << "�����н�Ƕ���ѽ��" << endl;
			cin >> salary;
			cout << "���з���" << endl;
			cin >> houseRet;
			cout << "���г���" << endl;
			cin >> carRet;
			if ( salary < 20000){
				cout << "����һ�����ˣ������ڻ�����̸������" << endl;
			} else if ( houseRet == "��" ){
				cout << "����ʵû��ʲôҪ���㰮��ʲô���ã�" << endl;
			} else if ( carRet == "��" ){
				cout << "������Ŷ���Ժ�����ϵ��" << endl;
			} else {
				cout << "��ʱ�����İɣ�" << endl;  //��ɧ���ж����
			}
		}else{
			cout << "��Ǹ�һ��е��£���ξ����˰ɣ���Ե�ټ���" << endl;
			Sleep(1000);
		}
		i++;
	}
}


int main(void){
	blind_date();
	system("pause");
	return 0;
}