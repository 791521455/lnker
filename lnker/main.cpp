
#include <iostream>
#include <windows.h>

using namespace std;

///turn the string of the app into the number
int app_name_num(string lnker_answer) {
	//define app_num
	int app_num = 0;

	if (lnker_answer == "gamepack" || lnker_answer == "studypack" || lnker_answer == "codepack" || lnker_answer == "unknowpack0") {
		//first kind001
		//012 is useful,3+.->9 is ready to be used.
		if (lnker_answer == "gamepack")//1
			app_num = 1;
		if (lnker_answer == "studypack")//2
			app_num = 2;
		if (lnker_answer == "codepack")//3
			app_num = 3;
		if (lnker_answer == "unknowpack0")//4
			app_num = 4;
		//if()//56789.10
	}
	else {
		//app_num = 100;//debug code
		//second kind002
		if (lnker_answer == "steam")//
			app_num = 10;
		}

		/*
		if (lnker_answer = "steam")//
		app_num = 1;
		}
		*/

		return app_num;
	}

void run_system_code(int app_num) {
	if(app_num == 10)
		system("D:\\New_software\\Steam\\Steam.exe");
	if (app_num == 11)
		system("D:\\New_software\\???.exe");
}

int main() { 
	//define part
	string lnker_answer;
	int lnker_answer_num;
	string packlist_game = "A,B and C";
	string packlist_study = "A,B and C";
	string packlist_code = "A,B and C";
	string packlist_unknow = "A,B and C";
	string app_list = "steam	";//+tab

	//tell part
	cout << "gamepack include " << packlist_game << endl
		<< "studypack include " << packlist_game << endl
		<< "gamepack include " << packlist_game << endl
		<< "unknowpack0 include " << packlist_game << endl
		<< "We have " << app_list << "now." << endl;
	
	//get part
	cin >> lnker_answer;

	//dispose part
	lnker_answer_num = app_name_num(lnker_answer);

	//debug part
	//cout << lnker_answer << endl;//debug code
	//cout << lnker_answer_num << endl;//debug code

	//run part
	run_system_code(lnker_answer_num);
	//system("D:\\New_software\\Steam\\Steam.exe");

	//end part
	return 0;
}

///app_num
/*
* 0
* 1
* 2
* 3
* 4
* 10-->steam
* 11
*/
