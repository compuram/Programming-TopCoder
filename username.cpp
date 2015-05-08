#include<iostream>
#include<sstream>
#include<cstring>

using namespace std;

#define total 8

class UserName {
	
	string existingNames[total];
	string newName;
	int num;
	public:
		UserName(int t);
		string newMember(string existingNames[], string newName);
		bool isin(string existingNames[], string newName);
};

UserName :: UserName(int t) {
	num = t;
}

bool UserName :: isin(string existingNames[], string newName) {

	for (int i = 0; i < total; i++) {
		
		if (newName == existingNames[i]) {
			
			return true;
		}
	}

	return false;
}


string UserName :: newMember(string existingNames[], string newName) {
	
	string str;
	int index=1;

	if (!isin(existingNames,newName)) {
		cout << "u here" << endl;
		return newName;
	}
	else
	{
		while (index <= 50) {
		
			stringstream out;

			out << index;
			
			str = newName + out.str();

			if (!isin(existingNames,str)) {
				return str;
			}
		
			index = index + 1;
		}
	}
			
	//return newName;
}


int main() {
	
	UserName uname(total);
	
	//string existingNames[] = {"MasterOfDisaster", "TygerTyger2", "TygerTyger1", "TygerTyger", "MrKnowItAll"};

	//string existingNames[] = {"Bart4", "Bart5", "Bart6", "Bart7", "Bart8", "Bart9", "Bart10","Lisa", "Marge", "Homer", "Bart", "Bart1", "Bart2", "Bart3","Bart11", "Bart12"};
	//string newName = "Bart";

	string existingNames[] = {"grokster2", "BrownEyedBoy", "Yoop", "BlueEyedGirl","grokster", "Elemental", "NightShade", "Grokster1"};

	string newName = "grokster";

	//string newName = "TygerTyger";
	
	cout << uname.newMember(existingNames,newName) << endl;
	
	return 0;
}
