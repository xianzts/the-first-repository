//项目实现：假如你今天有三次相亲的机会，如果对方和你的兴趣相投则判断你的颜值及家庭收入状况，否则直接放弃。
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
	string hobby[] = {"弹钢琴","玩音游","看动漫"};

	while( i < 3 ){
		cout << "这是你的第" << i+1 << "次相亲。" << endl;
		cout << "我喜欢" << hobby[i] << "，你喜欢吗？" << endl;
		cin >> words;
		if ( words == "喜欢"){
			cout << "那我们兴趣相投哦~" << endl;
			Sleep(1000);
			cout << "你的月薪是多少呀？" << endl;
			cin >> salary;
			cout << "你有房吗？" << endl;
			cin >> houseRet;
			cout << "你有车吗？" << endl;
			cin >> carRet;
			if ( salary < 20000){
				cout << "你是一个好人，我现在还不想谈恋爱！" << endl;
			} else if ( houseRet == "有" ){
				cout << "我其实没有什么要求，你爱我什么都好！" << endl;
			} else if ( carRet == "有" ){
				cout << "还不错哦，以后再联系！" << endl;
			} else {
				cout << "有时间再聊吧！" << endl;  //甚骚的判断语句
			}
		}else{
			cout << "抱歉我还有点事，这次就算了吧，有缘再见！" << endl;
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