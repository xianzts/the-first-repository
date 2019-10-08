//项目实现：算出斐波那契数列第k项的值，并算出前一项和当前项的比值
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
		cout << "请问你要算斐波那契数列的第几项？";
	    cin >> k;
		if( k == 1 || k == 2){
			cout << "第" << k << "项值为：" << 1;  //第一项和第二项
			break;
		}else if( k >= 3){
			while( i < k){
				numi = num1 + num2;
				num2 = num1;
				num1 = numi;
				i++;                  //第i项的值
				ratio = num2/num1;    //比值
			cout << "第" << i << "项值为：" << numi;
			cout.precision(15);       //取15位有效数字
			cout << "   比值为：" << ratio << endl;
			}
			break;
		}else{
			cout << "输入错误!" << endl;
			cin.clear();
			cin.sync();               //未输入数字的情况
		}
	}
	system("pause");
	return 0;
}